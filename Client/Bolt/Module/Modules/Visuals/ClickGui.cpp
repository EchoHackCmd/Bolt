#include "ClickGui.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"
#include "../../../Client/Client.h"

/* Virtual Object Methods */

auto VWindowObject::getWindow(void) -> VWindow* {
    return this->window;
};

/* Virtual Window Methods */

auto VWindow::appendElement(VWindowObject* obj) -> void {
    if(obj != nullptr)
        this->windowObjects.push_back(obj);
};

auto VWindow::getElements(void) -> std::vector<VWindowObject*> {
    return this->windowObjects;
};

auto VWindow::calculateRect(RenderUtils* r) -> Vec4<float> {
    auto resultRect = Vec4<float>();

    if(r == nullptr || !r->canDraw())
        return resultRect;
    
    auto rectWidth = r->textLen(this->windowTitle, this->fontSize);

    for(auto windowObj : this->windowObjects) {
        auto currWidth = r->textLen(windowObj->displayText, this->fontSize);
        if(currWidth > rectWidth)
            rectWidth = currWidth;
    };

    auto windowPos = this->titlePosition;
    resultRect = Vec4<float>(windowPos.x, windowPos.y, windowPos.x + (rectWidth + 4), windowPos.y + (this->windowObjects.size() * (10 * this->fontSize)));

    return resultRect;
};

/* Click Gui */

auto ClickGui::onTick(void) -> void {
    auto instance = Minecraft::getClientInstance();
    auto player = (instance != nullptr ? instance->getLocalPlayer() : nullptr);

    if(player == nullptr)
        return this->setState(false);
};

auto ClickGui::onEnable(void) -> void {
    auto instance = Minecraft::getClientInstance();

    if(instance != nullptr)
        instance->releaseMouse();
};

auto ClickGui::onDisable(void) -> void {
    auto instance = Minecraft::getClientInstance();

    if(instance != nullptr)
        instance->grabMouse();
};

auto ClickGui::onKey(uint64_t key, bool isDown, bool* cancel) -> void {
    *cancel = true;

    if(!isDown)
        return;
    
    if(key == VK_ESCAPE || key == 0x45 || key == this->key)
        return this->setState(false);
};

auto ClickGui::onMouseClick(Vec2<float> mousePos, char action, bool isDown, bool* cancel) -> void {
    *cancel = true;
    
    if(isDown)
        this->displayToChat(std::to_string(action));
};

auto ClickGui::onMouseMove(Vec2<float> mousePos, char action, bool isDown, bool* cancel) -> void {
    *cancel = true;
};

auto ClickGui::onRender(RenderUtils* r) -> void {
    if(r == nullptr || !r->canDraw())
        return;
    
    auto manager = this->getManager();

    auto instance = r->getCtx()->clientInstance;
    auto guiData = (instance != nullptr ? instance->getGuiData() : nullptr);
    auto mcGame = (instance != nullptr ? instance->getMinecraftGame() : nullptr);

    if(guiData == nullptr || mcGame == nullptr)
        return;
    
    auto windows = this->getWindows(r);

    if(windows.empty())
        return this->setState(false);
    
    for(auto window : windows) {
        auto windowPos = window->calculateRect(r);
        auto titlePos = Vec4<float>(windowPos.x, windowPos.y - (10 * window->fontSize), windowPos.z, windowPos.y);

        r->fillRectangle(titlePos, window->titleBarColor);
        r->fillRectangle(windowPos, window->bgColor);

        r->drawString(window->windowTitle, window->fontSize, Vec2<float>(titlePos.x + 2, titlePos.y), window->titleColor);

        int I = 0;
        for(auto windowObj : window->getElements()) {
            windowObj->position = Vec2<float>(windowPos.x + 2, windowPos.y + (I * (10 * window->fontSize)));
            auto color = window->textColor;

            if(windowObj->isType<VWindowModBtn>()) {
                auto obj = (VWindowModBtn*)windowObj;
                
                if(obj->mod != nullptr && obj->mod->isEnabled)
                    color = Color(3, 252, 252);
            };
            
            r->drawString(windowObj->displayText, window->fontSize, windowObj->position, color);

            I++;
        };
        r->getCtx()->flushText(0);
    };
};

auto ClickGui::getWindows(RenderUtils* r) -> std::vector<VWindow*> {
    if(r == nullptr || !r->canDraw())
        return this->windows;
    
    if(this->windows.empty()) {
        int I = 0;
        for(auto c : this->getManager()->getCategories()) {
            auto currWindow = new VWindow(c->name);

            for(auto m : c->getModules()) {
                currWindow->appendElement(new VWindowModBtn(currWindow, m));
            };

            currWindow->titlePosition = Vec2<float>((50 * I) + 50, (I * 10) + 30);
            this->windows.push_back(currWindow);

            I++;
        };
    };
    return this->windows;
};