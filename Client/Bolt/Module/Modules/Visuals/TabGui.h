#ifndef CLIENT_BOLT_MODULE_MODULES_VISUALS_TABGUI
#define CLIENT_BOLT_MODULE_MODULES_VISUALS_TABGUI

#include "../../Module.h"

class SelectedCursor {
public:
    std::string text = std::string("<");
    Vec2<float> currPos = Vec2<float>();
public:
    float animSpeed = 1.5f;
public:

    auto moveTo(Vec2<float> dest) -> void {
        auto currX = currPos.x;
        auto currY = currPos.y;

        auto destX = dest.x;
        auto destY = dest.y;

        if(currX < (destX - animSpeed) || currX > (destX + animSpeed))
            currPos.x += (currX < (destX - animSpeed) ? animSpeed : -animSpeed);
        
        if(currY < (destY - animSpeed) || currY > (destY + animSpeed))
            currPos.y += (currY < (destY - animSpeed) ? animSpeed : -animSpeed);
    };

public:

    auto setPos(Vec2<float> dest = Vec2<float>()) -> void {
        this->currPos = dest;
    };

    auto setY(float v) -> void {
        this->currPos.y = v;
    };

    auto setX(float v) -> void {
        this->currPos.x = v;
    };
};

class TabGui : public Module {
public:
    TabGui(Category* category) : Module(category, "TabGui") {
        this->setState(true);
        this->setKey(VK_TAB);
    };
public:
    auto onRender(RenderUtils*) -> void override;
    auto onKey(uint64_t, bool, bool*) -> void override;
    auto applyAlpha(void) -> void;
public:
    float alpha = 0.f;
public:
    int indexCat = 0, indexMod = 0;
    bool selectedCat = false, selectedMod = false;
public:
    SelectedCursor* selectedCatCursor = new SelectedCursor();
    SelectedCursor* selectedModCursor = new SelectedCursor();
};

#endif /* CLIENT_BOLT_MODULE_MODULES_VISUALS_TABGUI */