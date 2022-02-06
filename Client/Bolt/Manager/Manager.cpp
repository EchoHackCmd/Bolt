#include "Manager.h"

#include "../Category/Category.h"
#include "../Command/Command.h"
#include "../Module/Module.h"
#include "../../Client.h"

Manager::Manager(Client* client){
    Utils::debugLogF("Initializing Manager\n");

    this->client = client;

    this->initHooks();

    this->initCategories();
    this->initCommands();
    this->initModules();

    this->initModuleConfigs();
    
    this->tickCategories();
};

auto Manager::getClient(void) -> Client* {
    return this->client;
};

auto Manager::addCategory(Category* category) -> void {
    if(std::find(this->categories.begin(), this->categories.end(), category) != this->categories.end())
        return Utils::debugLogF(std::string("Category '" + category->name + "' has already been registered to the Manager\n").c_str());
    
    this->categories.push_back(category);
    Utils::debugLogF(std::string("Registered Category '" + category->name + "' to the Manager\n").c_str());
};

auto Manager::getCategory(std::string name) -> Category* {
    for(auto category : this->categories){
        if(category->name == name)
            return category;
    };
    return this->categories.back();
};

auto Manager::getCategories(void) -> std::vector<Category*> {
    return this->categories;
};

auto Manager::getModule(std::string moduleName) -> Module* {
    for(auto c : this->getCategories()) {
        for(auto m : c->getModules()) {
            if(m->name.rfind(moduleName) != std::string::npos)
                return m;
        };
    };
    return nullptr;
};;

auto Manager::initCategories(void) -> void {
    new Category(this, "Combat");
    new Category(this, "Movement");
    new Category(this, "Player");
    new Category(this, "Visuals");
    new Category(this, "World");
    new Category(this, "Other");
};

#include "../Command/Commands/TeleportCommand.h"

auto Manager::initCommands(void) -> void {
    this->addCommand(new TeleportCommand(this));
};

/* Combat */

#include "../Module/Modules/Combat/Killaura.h"
#include "../Module/Modules/Combat/BoostHit.h"
#include "../Module/Modules/Combat/Hitbox.h"
#include "../Module/Modules/Combat/Surround.h"
#include "../Module/Modules/Combat/CrystalAura.h"

/* Movement */

#include "../Module/Modules/Movement/AirJump.h"
#include "../Module/Modules/Movement/BunnyHop.h"
#include "../Module/Modules/Movement/AutoSprint.h"
#include "../Module/Modules/Movement/AirSpeed.h"
#include "../Module/Modules/Movement/MoveStrafe.h"
#include "../Module/Modules/Movement/Jesus.h"
#include "../Module/Modules/Movement/Jetpack.h"
#include "../Module/Modules/Movement/EntityJetpack.h"
#include "../Module/Modules/Movement/DirectionalPhase.h"

/* Player */

#include "../Module/Modules/Player/Coords.h"
#include "../Module/Modules/Player/NoKnockback.h"
#include "../Module/Modules/Player/Flight.h"
#include "../Module/Modules/Player/ClickNearbyWarp.h"

/* Visuals */

#include "../Module/Modules/Visuals/TabGui.h"
#include "../Module/Modules/Visuals/ClickGui.h"
#include "../Module/Modules/Visuals/ModuleList.h"
#include "../Module/Modules/Visuals/NameTags.h"
#include "../Module/Modules/Visuals/ItemDrops.h"

/* World */

#include "../Module/Modules/World/Instabreak.h"
#include "../Module/Modules/World/Nuker.h"
#include "../Module/Modules/World/Scaffold.h"

/* Other */

#include "../Module/Modules/Other/TestModule.h"
#include "../Module/Modules/Other/FreeLook.h"
#include "../Module/Modules/Other/Zoom.h"
#include "../Module/Modules/Other/StackableItems.h"
#include "../Module/Modules/Other/CakeAura.h"
#include "../Module/Modules/Other/NoPacket.h"
#include "../Module/Modules/Other/LagSpoof.h"
#include "../Module/Modules/Other/PacketLogger.h"
#include "../Module/Modules/Other/Spammer.h"
#include "../Module/Modules/Other/Uninject.h"

auto Manager::initModules(void) -> void {
    /* Combat */
    new Killaura(this->getCategory("Combat"));
    new BoostHit(this->getCategory("Combat"));
    new Hitbox(this->getCategory("Combat"));
    new Surround(this->getCategory("Combat"));
    new CrystalAura(this->getCategory("Combat"));
    
    /* Movement */
    new AirJump(this->getCategory("Movement"));
    new BunnyHop(this->getCategory("Movement"));
    new AutoSprint(this->getCategory("Movement"));
    new AirSpeed(this->getCategory("Movement"));
    new MoveStrafe(this->getCategory("Movement"));
    new Jesus(this->getCategory("Movement"));
    new Jetpack(this->getCategory("Movement"));
    new EntityJetpack(this->getCategory("Movement"));
    new DirectionalPhase(this->getCategory("Movement"));

    /* Player */

    new Coords(this->getCategory("Player"));
    new NoKnockBack(this->getCategory("Player"));
    new Flight(this->getCategory("Player"));
    new ClickNearbyWarp(this->getCategory("Player"));
    
    /* Visuals */
    new TabGui(this->getCategory("Visuals"));
    new ClickGui(this->getCategory("Visuals"));
    new ModuleList(this->getCategory("Visuals"));
    new NameTags(this->getCategory("Visuals"));
    new ItemDrops(this->getCategory("Visuals"));

    /* World */

    new Instabreak(this->getCategory("World"));
    new Nuker(this->getCategory("World"));
    new Scaffold(this->getCategory("World"));
    
    /* Other */
    new TestModule(this->getCategory("Other"));
    new FreeLook(this->getCategory("Other"));
    new Zoom(this->getCategory("Other"));
    new StackableItems(this->getCategory("Other"));
    new CakeAura(this->getCategory("Other"));
    new NoPacket(this->getCategory("Other"));
    new LagSpoof(this->getCategory("Other"));
    new PacketLogger(this->getCategory("Other"));
    new Spammer(this->getCategory("Other"));
    new Uninject(this->getCategory("Other"));
};

#include "../Hook/Hooks/Render/Render.h"
#include "../Hook/Hooks/LoopbackPacketSender/LoopbackPacketSender.h"
#include "../Hook/Hooks/Key/Key.h"
#include "../Hook/Hooks/Mouse/Mouse.h"
#include "../Hook/Hooks/GameMode/GameMode.h"
#include "../Hook/Hooks/Actor/Actor.h"

auto Manager::initHooks(void) -> void {
    if(MH_Initialize() == MH_OK){
        Utils::debugLogF("Initialized MinHook");
        
        new Hook_Render(this);

        new Hook_LoopbackPacketSender(this);
        
        new Hook_Key(this);

        new Hook_Mouse(this);

        new Hook_GameMode(this);
        
        new Hook_Actor(this);

        Utils::debugLogF("\n");
    }
    else {
        Utils::debugLogF("Failed to initialize MinHook");
    };
};

auto Manager::initModuleConfigs(void) -> void {
    auto mainDir = Utils::getDebugPath();

    for(auto c : this->getCategories()) {
        for(auto m : c->getModules()) {
            auto fileName = std::string(mainDir + "\\Modules\\" + m->name + "\\" + m->name + ".bolt");
            auto fsPath = std::filesystem::path(fileName);

            if(!std::filesystem::exists(fsPath)) {
                saveModuleConfigData(m);
            } else {
                std::ifstream File(fileName);
                json j = json::parse(File);

                if(!(j.is_null() || j["isEnabled"].is_null() || j["key"].is_null())) {
                    m->setState(j["isEnabled"].get<bool>());
                    m->setKey(Utils::strToUint64(j["key"].get<std::string>()));
                } else {
                    saveModuleConfigData(m);
                };
            };
        };
    };
};

auto Manager::saveModuleConfigData(Module* mod) -> void {
    if(mod == nullptr)
        return;
    
    auto mainDir = Utils::getDebugPath();
    auto fileName = std::string(mainDir + "\\Modules\\" + mod->name + "\\" + mod->name + ".bolt");

    auto fsPath = std::filesystem::path(fileName);

    if(!std::filesystem::exists(fsPath.parent_path()))
        std::filesystem::create_directories(fsPath.parent_path());

    CloseHandle(CreateFileA(fileName.c_str(), GENERIC_WRITE | GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL));

    std::ofstream File;
    json j;

    j["isEnabled"] = mod->isEnabled;
    j["key"] = Utils::uint64ToStr(mod->key);
    
    File.open(fileName);
    
    File << j.dump();
    File.close();
};

auto Manager::tickCategories(void) -> void {
    for(;;){
        for(auto category : this->categories)
            category->tickModules();
        Sleep(1);
    };
};

auto Manager::isHoldingKey(uint64_t key) -> bool {
    return this->keyMap[key];
};

auto Manager::setKeyMapData(uint64_t key, bool isDown) -> void {
    this->keyMap[key] = isDown;
};

auto Manager::addEntityToMap(__int64 entityRuntimeId, Actor* entity) -> void {
    this->entityMap[entityRuntimeId] = entity;
};

auto Manager::cleanEntityMap(GameMode* GM) -> void {
    if(GM == nullptr || GM->player == nullptr)
        return this->emptyEntityMap();
    
    auto newMap = std::map<__int64, Actor*>();
    auto level = GM->player->getLevel();

    if(level == nullptr)
        return this->emptyEntityMap();

    for(auto [runtimeId, entity] : entityMap) {
        if(level->fetchEntity(runtimeId, false) == nullptr || !entity->isAlive())
            continue;
        
        newMap[entity->getRuntimeID()] = entity;
    };

    this->entityMap = newMap;
};

auto Manager::emptyEntityMap(void) -> void {
    this->entityMap.clear();
};

auto Manager::getEntityMap(void) -> std::map<__int64, Actor*> {
    return this->entityMap;
};

auto Manager::handleCommand(std::string message) -> void {
    auto modifiedStr = std::string(message);
    modifiedStr.erase(0, this->cmdPrefix.length()); /* Remove prefix */

    auto args = std::vector<std::string>();
    auto space = std::string(" ");
    auto pos = 0;

    modifiedStr += " ";

    while((pos = modifiedStr.find(space)) != std::string::npos) {
        args.push_back(modifiedStr.substr(0, pos));
        modifiedStr.erase(0, pos + space.length());
    };

    for(auto cmd : this->commands) {
        if(args.at(0).rfind(cmd->name) == 0)
            return cmd->onCommand(message, args);
    };
};

auto Manager::addCommand(Command* command) -> void {
    if(std::find(this->commands.begin(), this->commands.end(), command) != this->commands.end())
        return Utils::debugLogF(std::string("Command '" + command->name + "' has already been registered to the Manager\n").c_str());
    this->commands.push_back(command);
};

auto Manager::addNotif(std::string notification) -> void {
    this->notifications.push_back(notification);
};

auto Manager::tickNotifications(RenderUtils* r) -> void {
    if(r == nullptr || !r->canDraw() || this->notifications.empty())
        return;
    
    auto ctx = r->getCtx();
    auto instance = (ctx != nullptr ? ctx->clientInstance : nullptr);
    auto guiData = (instance != nullptr ? instance->getGuiData() : nullptr);
    
    if(guiData == nullptr)
        return;
        
    auto text = this->notifications.front();
    auto width = r->textLen(text, 1);
    auto res = guiData->scaledRes;

    auto textPos = Vec2<float>(5.f, res.y - 40.f);
    
    auto rectPos = Vec4<float>(textPos.x - 1.f, textPos.y - 1.f, textPos.x + (width + 1.f), textPos.y + 11.f);
    auto outlinePos = Vec4<float>(rectPos.x - 1.f, rectPos.y - 1.f, rectPos.z + 1.f, rectPos.w + 1.f);
    
    r->drawString(text, 1, textPos, Color(30, 200, 200));
    
    r->fillRectangle(rectPos, Color(23, 23, 23));
    r->drawRectangle(outlinePos, Color(52, 159, 235), 1);
    
    ctx->flushText(0);

    auto now = std::chrono::system_clock::now();
    
    if(now <= this->lastNotif)
        return;
    
    this->lastNotif = now + std::chrono::seconds(2);
    this->notifications.erase(this->notifications.begin());
};