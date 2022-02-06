#ifndef CLIENT_BOLT_MODULE_MODULE
#define CLIENT_BOLT_MODULE_MODULE

#include "../../Mem/Mem.h"
#include "../../Utils/Utils.h"

#include "../../SDK/Minecraft.h"

class Category;
class Manager;

class Module {
private:
    Category* category = nullptr;
public:
    std::string name;

    bool wasEnabled = false, isEnabled = false, logState = true;

    uint64_t key = NULL;

    Module(Category*, std::string);

    auto getCategory(void) -> Category*;
    auto getManager(void) -> Manager*;

    auto baseTick(void) -> void;
    
    auto setState(bool) -> void;
    auto setKey(uint64_t) -> void;
    auto setLogState(bool) -> void;

    auto displayToChat(std::string message, bool raw = false) -> bool;
    auto addNotification(std::string) -> void;
    
    virtual auto _onTick(void) -> void {};
    virtual auto onTick(void) -> void {};
    
    virtual auto onEnable(void) -> void {};
    virtual auto onDisable(void) -> void {};
    
    virtual auto onRender(RenderUtils*) -> void {};
    virtual auto onKey(uint64_t, bool, bool*) -> void {};
    virtual auto onMouseClick(Vec2<float>, char, bool, bool*) -> void {};
    virtual auto onMouseMove(Vec2<float>, char, bool, bool*) -> void {};
    
    virtual auto onDestroyBlock(GameMode*, Vec3<int>*, UCHAR, bool*) -> void {};
    virtual auto onGameMode(GameMode*) -> void {};
    virtual auto onPlayerAttack(GameMode*, Actor*) -> void {};

    virtual auto onActorTick(Actor*) -> void {};
    virtual auto onLerpMotion(Actor*, Vec3<float>*, bool*) -> void {};
    virtual auto onActorRot(Actor*, Vec2<float>*) -> void {};

    virtual auto onPacket(Packet*, bool*) -> void {};
};

#endif /* CLIENT_BOLT_MODULE_MODULE */