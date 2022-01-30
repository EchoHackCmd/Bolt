#include "TabGui.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"
#include "../../../Client/Client.h"

auto TabGui::onRender(RenderUtils* r) -> void {
    if(r == nullptr || !r->canDraw())
        return;
    
    auto bgColor = Color(22, 22, 22, alpha);
    auto textColor = Color(30, 200, 200, alpha);
    auto outlineColor = Color(52, 159, 235, alpha);
    auto selectedColor = Color(50, 235, 140, alpha);
    
    this->applyAlpha();
    
    auto manager = this->getCategory()->getManager();

    if(manager == nullptr)
        return;
    
    auto client = manager->getClient();

    if(client == nullptr)
        return;
    
    auto brandLogo = std::string(client->name + " ⚡" + " " + Minecraft::getVersion());
    
    auto I = 0;
    auto categoryBoxW = r->textLen(brandLogo, 1);

    for(auto c : manager->getCategories()) { /* Get Category Box Width */
        auto curr = r->textLen(c->name, 1.f);
        if(curr > categoryBoxW)
            categoryBoxW = curr;
    };

    r->fillRectangle(Vec4<float>(0.f, 0.f, 8.f + (categoryBoxW + 3.f), 10.f), bgColor);
    r->drawRectangle(Vec4<float>(0.f, 0.f, 8.f + (categoryBoxW + 3.f), 10.f), outlineColor, 1);
    r->drawString(brandLogo, 1, Vec2<float>(2.f, 0.f), textColor);

    r->fillRectangle(Vec4<float>(0.f, 9.f, 8.f + (categoryBoxW + 3.f), (manager->getCategories().size() * 10) + 12.f), bgColor);
    r->drawRectangle(Vec4<float>(0.f, 9.f, 8.f + (categoryBoxW + 3.f), (manager->getCategories().size() * 10) + 12.f), outlineColor, 1);

    for(auto c : manager->getCategories()) {
        r->drawString(c->name, 1.f, Vec2<float>(2.f, I * 10 + 10.f), textColor);
        I++;
    };

    if(selectedCat) {
        auto yOff = (indexCat * 10) + 19.f;
        r->drawRectangle(Vec4<float>(2.f, yOff, selectedCatOff, yOff + 1.f), selectedColor, 1);

        if(selectedCatOff <= 0.f)
            selectedCatOff = 2.f;
        
        if(selectedCatOff <= (8.f + categoryBoxW))
            selectedCatOff += selectedModifier;
    };

    if(selectedCat) { /* Draw Modules Rectangle */
        auto currCategory = manager->getCategories().at(indexCat);
        auto moduleBoxW = r->textLen(currCategory->name, 1);

        for(auto m : currCategory->getModules()) { /* Get Modules Box Width */
            auto curr = r->textLen(m->name, 1);
            if(curr > moduleBoxW)
                moduleBoxW = curr;
        };

        r->fillRectangle(Vec4<float>(8.f + (categoryBoxW + 3.f), 0.f, (8.f + (categoryBoxW + 3.f)) + (moduleBoxW + 4.f), 10.f), bgColor);
        r->drawRectangle(Vec4<float>(8.f + (categoryBoxW + 3.f), 0.f, (8.f + (categoryBoxW + 3.f)) + (moduleBoxW + 4.f), 10.f), outlineColor, 1);
        r->drawString(std::string(currCategory->name + " ⚡"), 1.f, Vec2<float>(10.f + (categoryBoxW + 3.f), 0.f), textColor);

        r->fillRectangle(Vec4<float>(8.f + (categoryBoxW + 3.f), 9.f, (8.f + (categoryBoxW + 3.f)) + (moduleBoxW + 4.f), (currCategory->getModules().size() * 10) + 12.f), bgColor);
        r->drawRectangle(Vec4<float>(8.f + (categoryBoxW + 3.f), 9.f, (8.f + (categoryBoxW + 3.f)) + (moduleBoxW + 4.f), (currCategory->getModules().size() * 10) + 12.f), outlineColor, 1);

        I = 0;
        for(auto m : currCategory->getModules()) {
            r->drawString(m->name, 1, Vec2<float>(10.f + (categoryBoxW + 3.f), I * 10 + 10.f), m->isEnabled ? selectedColor : textColor);
            I++;
        };

        if(selectedMod && !currCategory->getModules().empty()) {
            auto yOff = (indexMod * 10) + 19.f;
            r->drawRectangle(Vec4<float>(10.f + (categoryBoxW + 3.f), yOff, selectedModOff, yOff + 1.f), selectedColor, 1);

            if(selectedModOff <= 0.f)
                selectedModOff = 10.f + (categoryBoxW + 3.f);
            
            if(selectedModOff <= (6.f + (categoryBoxW + 3.f)) + (moduleBoxW + 4.f))
                selectedModOff += selectedModifier;
        } else {
            indexMod = 0;
            selectedModOff = 0.f;
        };
    };

    r->getCtx()->flushText(0);
};

auto TabGui::onKey(uint64_t key, bool isDown, bool* cancel) -> void {
    if(!isDown)
        return;
    
    auto instance = Minecraft::getClientInstance();

    if(instance == nullptr || instance->getMinecraftGame() == nullptr || !instance->getMinecraftGame()->canUseKeys())
        return;
    
    if(key != VK_LEFT && key != VK_RIGHT && key != VK_UP && key != VK_DOWN)
        return;
    else
        *cancel = true;
    
    auto manager = this->getCategory()->getManager();
    auto categories = manager->getCategories();

    auto currCategory = categories.at(indexCat);
    
    if(key == VK_RIGHT) {
        if(!selectedCat) {
            selectedCat = true;
            selectedCatOff = 0.f;
        }
        else {
            if(!selectedMod) {
                selectedMod = true;
                selectedModOff = 0.f;
            }
            else {
                if(currCategory == nullptr || currCategory->getModules().empty())
                    return;
                
                auto mod = currCategory->getModules().at(indexMod);

                if(mod == nullptr)
                    return;
                
                mod->isEnabled = !mod->isEnabled;
                selectedModOff = 0.f;
            };
        };
    };

    if(key == VK_LEFT) {
        if(selectedMod) {
            selectedMod = false;
            selectedModOff = 0.f;
        }
        else {
            selectedCat = false;
            selectedCatOff = 0.f;
        };
    };

    if(key == VK_DOWN) {
        if(selectedMod) {
            if(currCategory->getModules().empty())
                return;
            
            indexMod++;
            selectedModOff = 0.f;

            if(indexMod >= currCategory->getModules().size())
                indexMod = 0;
        }
        else if(selectedCat) {
            indexCat++;
            selectedCatOff = 0.f;

            if(indexCat >= categories.size())
                indexCat = 0;
        };
    };

    if(key == VK_UP) {
        if(selectedMod) {
            if(currCategory->getModules().empty())
                return;
            
            if(indexMod <= 0)
                indexMod = currCategory->getModules().size();
            
            indexMod--;
            selectedModOff = 0.f;
        }
        else if(selectedCat) {
            if(indexCat <= 0)
                indexCat = categories.size();
            
            indexCat--;
            selectedCatOff = 0.f;
        };
    };
};

auto TabGui::applyAlpha(void) -> void {
    float modifier = 0.05f;

    auto decreaseAlpha = [&]() {
        if(alpha > 0.f)
            alpha -= modifier;
        else
            alpha = 0.f;
    };

    auto increaseAlpha = [&]() {
        if(alpha < 1.f)
            alpha += modifier;
        else
            alpha = 1.f;
    };

    auto instance = Minecraft::getClientInstance();

    if(instance == nullptr || instance->getMinecraftGame() == nullptr || !instance->getMinecraftGame()->canUseKeys())
        return decreaseAlpha();
    
    return increaseAlpha();
};