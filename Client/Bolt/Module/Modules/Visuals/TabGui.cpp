#include "TabGui.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"
#include "../../../Client/Client.h"

auto TabGui::onRender(RenderUtils* r) -> void {
    auto ctx = r->getCtx();
    auto instance = (ctx != nullptr ? ctx->clientInstance : nullptr);

    if(ctx == nullptr || instance == nullptr)
        return;
    
    this->applyAlpha();
    
    auto outlineColor = Color(52, 159, 235, alpha);
    auto textColor = Color(30, 200, 200, alpha);
    auto bgColor = Color(23, 23, 23, alpha);

    auto manager = this->getManager();
    auto categories = manager->getCategories();

    auto rectWidth = 0.f;

    for(auto category : categories) {
        auto curr = r->textLen(std::string(category->name + " " + this->selectedCatCursor->text), 1);
        if(curr > rectWidth)
            rectWidth = curr;
    };
    
    auto categoryRect = Vec4<float>(1.f, 1.f, rectWidth + 3.f, categories.size() * 10 + 2.f);
    auto outlineRect = Vec4<float>(categoryRect.x - 1.f, categoryRect.y - 1.f, categoryRect.z + 1.f, categoryRect.w + 1.f);
    
    r->fillRectangle(categoryRect, bgColor);
    r->drawRectangle(outlineRect, outlineColor, 1);

    auto I = 0;
    for(auto category : categories) {
        auto textPos = Vec2<float>(categoryRect.x + 1, I * 10 + 2.f);
        r->drawString(category->name, 1, textPos, textColor);
        
        if(this->selectedCat && this->indexCat == I) {
            auto cursorDest = Vec2<float>(categoryRect.w - 15.f, textPos.y);
            
            auto catCursor = this->selectedCatCursor;
            auto cursorPos = catCursor->currPos;

            if(cursorPos.x <= 0 && cursorPos.y <= 0)
                catCursor->setPos(cursorDest);
            else
                catCursor->moveTo(cursorDest);
            
            r->drawString(" " + catCursor->text, 1, cursorPos, textColor);
        };
        
        I++;
    };

    if(this->selectedCat) {
        auto category = categories.at(this->indexCat);
        auto modules = category->getModules();

        auto modsWidth = 0.f;

        for(auto module : modules) {
            auto curr = r->textLen(std::string(module->name + " " + this->selectedModCursor->text), 1) + 3.f;
            if(curr > modsWidth)
                modsWidth = curr;
        };
        
        auto modsRect = Vec4<float>(categoryRect.z + 2.f, categoryRect.y, (categoryRect.z + 2.f) + modsWidth, modules.size() * 10 + 2.f);
        auto outlineModsRect = Vec4<float>(modsRect.x - 1.f, modsRect.y - 1.f, modsRect.z + 1.f, modsRect.w + 1.f);
        
        r->fillRectangle(modsRect, bgColor);
        r->drawRectangle(outlineModsRect, outlineColor, 1);

        auto I = 0;
        for(auto module : category->getModules()) {
            auto currColor = module->isEnabled ? Color(30, 200, 50, this->alpha) : textColor;
            auto textPos = Vec2<float>(modsRect.x + 2.f, I * 10 + 2.f);
            r->drawString(module->name, 1, textPos, currColor);

            if(this->selectedMod && this->indexMod == I) {
                auto cursorDest = Vec2<float>(modsRect.z - 11.f, textPos.y);
                
                auto modCursor = this->selectedModCursor;
                auto cursorPos = modCursor->currPos;

                if(cursorPos.x <= 0 && cursorPos.y <= 0)
                    modCursor->setPos(cursorDest);
                else
                    modCursor->moveTo(cursorDest);
                
                r->drawString(" " + modCursor->text, 1, cursorPos, currColor);
            };

            I++;
        };
    };

    ctx->flushText(0);
};

auto TabGui::onKey(uint64_t key, bool isDown, bool* cancel) -> void {
    if(!isDown)
        return;
    
    if(key != VK_LEFT && key != VK_RIGHT && key != VK_UP && key != VK_DOWN)
        return;
    
    auto manager = this->getManager();
    auto categories = manager->getCategories();
    auto modules = categories.at(this->indexCat <= (categories.size() - 1) ? this->indexCat : 0)->getModules();
    
    if(key == VK_RIGHT) {
        if(!this->selectedCat)
            this->selectedCat = true;
        else {
            if(this->selectedMod) {
                auto module = modules.at(this->indexMod);

                if(module == nullptr)
                    return;
                
                module->isEnabled = !module->isEnabled;
            } else {
                this->selectedMod = true;
            };
        };
    };

    if(key == VK_LEFT) {
        if(this->selectedMod) {
            this->selectedModCursor->setPos();
            this->selectedMod = false;
            this->indexMod = 0;
        } else
            this->selectedCat = false;
    };

    if(key == VK_DOWN) {
        if(this->selectedCat && !this->selectedMod) {
            this->indexCat++;

            if(this->indexCat >= categories.size())
                this->indexCat = 0;
        }
        else if(this->selectedMod) {
            this->indexMod++;

            if(this->indexMod >= modules.size())
                this->indexMod = 0;
        };
    };

    if(key == VK_UP) {
        if(this->selectedCat && !this->selectedMod) {
            if(this->indexCat <= 0)
                this->indexCat = categories.size();
            
            this->indexCat--;
        }
        else if(this->selectedMod) {
            if(this->indexMod <= 0)
                this->indexMod = modules.size();
            
            this->indexMod--;
        };
    };
};

auto TabGui::applyAlpha(void) -> void {
    auto instance = Minecraft::getClientInstance();
    auto mcGame = (instance != nullptr ? instance->getMinecraftGame() : nullptr);

    auto modifier = 0.05f;
    auto canUse = (mcGame != nullptr ? mcGame->canUseKeys() : false);

    if(!canUse) {
        if(alpha > 0.f)
            alpha -= modifier;
        else
            alpha = 0.f;
    } else {
        if(alpha < 1.f)
            alpha += modifier;
        else
            alpha = 1.f;
    };
};