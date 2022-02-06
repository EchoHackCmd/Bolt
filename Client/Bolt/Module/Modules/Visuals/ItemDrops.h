#ifndef CLIENT_BOLT_MODULE_MODULES_VISUALS_ITEMDROPS
#define CLIENT_BOLT_MODULE_MODULES_VISUALS_ITEMDROPS

#include "../../Module.h"

class ItemDrops : public Module {
public:
    ItemDrops(Category* category) : Module(category, "Item Drops") {
        //
    };
public:
    auto onRender(RenderUtils*) -> void override;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_VISUALS_ITEMDROPS */