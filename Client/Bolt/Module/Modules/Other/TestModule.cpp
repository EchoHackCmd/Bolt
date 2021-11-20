#include "TestModule.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"
#include "../../../Client/Client.h"

auto TestModule::onEnable(void) -> void {
    //Utils::debugLogF("Test Module has been Enabled!");

    auto instance = Minecraft::getClientInstance();

    if(instance == nullptr)
        return Utils::debugLogF("Client Instance is invalid!");
    
    auto player = instance->getLocalPlayer();

    if(player == nullptr)
        return Utils::debugLogF("Local Player is invalid!");
    
    auto entityMap = this->getManager()->getEntityMap();
    auto list = std::vector<Actor*>();

    for(auto [runtimeId, entity] : entityMap) {
        list.push_back(entity);
    };

    this->displayToChat(std::string("Entities: " + std::to_string(list.size())));
    this->setState(false);
};

auto TestModule::onDisable(void) -> void {
    //Utils::debugLogF("Test Module has been Disabled!");
};

auto TestModule::onTick(void) -> void {
    auto instance = Minecraft::getClientInstance();

    if(instance == nullptr)
        return;
    
    auto player = instance->getLocalPlayer();

    if(player == nullptr)
        return;
};

auto TestModule::onRender(RenderUtils* r) -> void {
    if(r == nullptr)
        return;
};

auto TestModule::onGameMode(GameMode* GM) -> void {
    if(GM == nullptr || GM->player == nullptr)
        return;
};