#ifndef CLIENT_BOLT_MANAGER_MANAGER
#define CLIENT_BOLT_MANAGER_MANAGER

#include "../../Mem/Mem.h"
#include "../../Utils/Utils.h"

class Client;
class Category;
class Module;
class Command;

class RenderUtils;

class Actor;
class GameMode;

class Manager {
private:
    Client* client = nullptr;
    std::vector<Category*> categories = std::vector<Category*>();
    std::vector<Command*> commands = std::vector<Command*>();
    std::map<uint64_t, bool> keyMap = std::map<uint64_t, bool>();
    std::map<__int64, Actor*> entityMap = std::map<__int64, Actor*>();
private:
    std::vector<std::string> notifications;
public:
    std::string cmdPrefix = std::string("*");
public:
    Manager(Client*);

    auto getClient(void) -> Client*;
    auto getCategory(std::string) -> Category*;
    auto addCategory(Category*) -> void;
    auto getCategories(void) -> std::vector<Category*>;

    template<typename T>
    auto getModule(void) -> T* {
        for(auto c : this->getCategories()) {
            for(auto m : c->getModules()) {
                if(dynamic_cast<T*>(m) != nullptr)
                    return (T*)m;
            };
        };
        return nullptr;
    };

    auto getModule(std::string) -> Module*;
    
    auto initCategories(void) -> void;
    auto initCommands(void) -> void;
    auto initModules(void) -> void;
    auto initHooks(void) -> void;

    auto initModuleConfigs(void) -> void;
    auto saveModuleConfigData(Module*) -> void;

    auto tickCategories(void) -> void;

    auto isHoldingKey(uint64_t) -> bool;
    auto setKeyMapData(uint64_t, bool) -> void;

    auto addEntityToMap(__int64, Actor*) -> void;
    auto cleanEntityMap(GameMode*) -> void;
    auto emptyEntityMap(void) -> void;
    auto getEntityMap(void) -> std::map<__int64, Actor*>;

    auto handleCommand(std::string) -> void;
    auto addCommand(Command*) -> void;
public:
    auto addNotif(std::string) -> void;
    auto rmFirstNotification(void) -> void;
    auto tickFirstNotification(RenderUtils*) -> void;
};

#endif /* CLIENT_BOLT_MANAGER_MANAGER */