#ifndef CLIENT_BOLT_MODULE_MODULES_VISUALS_NAMETAGS
#define CLIENT_BOLT_MODULE_MODULES_VISUALS_NAMETAGS

#include "../../Module.h"

class NameTags : public Module {
public:
    NameTags(Category* category) : Module(category, "Nametags") {
        this->setState(true);
    };
public:
    auto onRender(RenderUtils*) -> void override;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_VISUALS_NAMETAGS */