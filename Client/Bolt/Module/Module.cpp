#include "Module.h"

#include "../Category/Category.h"
#include "../Manager/Manager.h"
#include "../../Client.h"

Module::Module(Category* category, std::string name) {
    this->category = category;
    this->name = name;

    this->category->addModule(this);
};

auto Module::getCategory(void) -> Category* {
    return this->category;
};

auto Module::getManager(void) -> Manager* {
    auto manager = (Manager*)nullptr;

    if(this->category != nullptr)
        manager = this->category->getManager();
    
    return manager;
};

auto Module::baseTick(void) -> void {
    if(this->wasEnabled != this->isEnabled){
        this->wasEnabled = this->isEnabled;

        if(this->logState) {
            auto clientName = std::string("Client");

            if(getManager() != nullptr && getManager()->getClient() != nullptr)
                clientName = getManager()->getClient()->name;
                    
            this->displayToChat(std::string((this->isEnabled ? "§aEnabled" : "§6Disabled")) + " " + this->name);
        };

        if(this->isEnabled) {
            this->onEnable();
        } else {
            this->onDisable();
        };
        this->getManager()->saveModuleConfigData(this);
        this->addNotification(std::string((this->isEnabled ? "Enabled" : "Disabled")) + " " + this->name);
    };

    this->_onTick();

    if(this->isEnabled)
        this->onTick();
};

auto Module::setState(bool state) -> void {
    this->isEnabled = state;
};

auto Module::setKey(uint64_t key) -> void {
    this->key = key;
};

auto Module::setLogState(bool state) -> void {
    this->logState = state;
};

auto Module::displayToChat(std::string message, bool raw) -> bool {
    auto instance = Minecraft::getClientInstance();
    auto player = (Player*)nullptr;

    auto manager = getManager();
    auto client = (Client*)nullptr;

    if(instance != nullptr && manager != nullptr) {
        player = instance->getLocalPlayer();
        client = manager->getClient();
    };

    if(player == nullptr || client == nullptr)
        return false;
    else
        player->displayClientMessage(std::string(raw ? message : "§3" + client->name + "§f: " + message));
    
    return true;
};

auto Module::addNotification(std::string notification) -> void {
    auto manager = this->getManager();

    if(manager != nullptr)
        manager->addNotif(notification);
};