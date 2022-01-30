#include "Render.h"

#include "../../../Manager/Manager.h"
#include "../../../Category/Category.h"
#include "../../../Module/Module.h"

Manager* renderManager = nullptr;

Hook_Render::Hook_Render(Manager* manager) {
    this->init(manager);
};

typedef void (__thiscall* UIRenderContext)(void*, MinecraftUIRenderContext*);
UIRenderContext _UIRenderContext;

RenderUtils* renderUtils = nullptr;
auto frame = 0;

auto RenderCallback(void* a1, MinecraftUIRenderContext* ctx) -> void {
    if(renderManager != nullptr) {
        if(!renderManager->getEntityMap().empty()) {
            auto instance = ctx->clientInstance;
            auto player = (instance != nullptr ? instance->getLocalPlayer() : nullptr);

            if(player != nullptr) {
                renderManager->cleanEntityMap(player->getGameMode());
            } else {
                renderManager->emptyEntityMap();
            };
        };
        
        if(renderUtils == nullptr) {
            auto instance = ctx->clientInstance;
        
            if(instance != nullptr) {
                auto mcGame = instance->getMinecraftGame();

                if(mcGame != nullptr)
                    renderUtils = new RenderUtils(ctx, mcGame->getFont());
            };
        };

        if(frame >= 2) {
            frame = 0;
            if(renderUtils != nullptr) {
                for(auto c : renderManager->getCategories()) {
                    for(auto m : c->getModules()) {
                        if(m->isEnabled)
                            m->onRender(renderUtils);
                    };
                };
            };
        };
    };

    frame++;
    _UIRenderContext(a1, ctx);
};

auto Hook_Render::init(Manager* manager) -> void {
    renderManager = manager;

    auto sig = Mem::findSig("48 8B C4 48 89 58 18 55 56 57 41 54 41 55 41 56 41 57 48 8D A8 ? ? ? ? 48 81 EC ? ? ? ? 0F 29 ? ? 0F 29 ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 85 ? ? ? ? 4C 8B FA 48");

    if(!sig)
        return Utils::debugLogF("Unable to find address for Render Hook");
    
    if(MH_CreateHook((void*)sig, &RenderCallback, reinterpret_cast<LPVOID*>(&_UIRenderContext)) == MH_OK){
        Utils::debugLogF("MinecraftUIRenderContext Hook Creation: Success");
        MH_EnableHook((void*)sig);
    } else {
        Utils::debugLogF("MinecraftUIRenderContext Hook Creation: Failed");
    };
};