#include "BunnyHop.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"
#include "../../../Client/Client.h"

auto BunnyHop::onGameMode(GameMode* GM) -> void {
    if(GM == nullptr || GM->player == nullptr)
        return;
    
    auto player = GM->player;
    
    if(this->canUse() && *player->onGround() && !player->isJumping())
        player->jumpFromGround();
};

auto BunnyHop::canUse(void) -> bool {
    auto instance = Minecraft::getClientInstance();
    auto mcGame = (instance != nullptr ? instance->getMinecraftGame() : nullptr);

    auto manager = this->getManager();
    
    auto wKey = manager->isHoldingKey(0x57);
    auto sKey = manager->isHoldingKey(0x53);
    auto aKey = manager->isHoldingKey(0x41);
    auto dKey = manager->isHoldingKey(0x44);

    return (mcGame->canUseKeys() ? (wKey || sKey || aKey || dKey) : false);
};