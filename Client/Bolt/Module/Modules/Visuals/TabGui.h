#ifndef CLIENT_BOLT_MODULE_MODULES_VISUALS_TABGUI
#define CLIENT_BOLT_MODULE_MODULES_VISUALS_TABGUI

#include "../../Module.h"

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

    int indexCat = 0, indexMod = 0;
    bool selectedCat = false, selectedMod = false;

    float selectedModifier = 1.f;
    float selectedCatOff = 0.f, selectedModOff = 0.f;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_VISUALS_TABGUI */
