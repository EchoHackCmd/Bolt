#include "Actor.h"

#include "../Minecraft.h"

auto Actor::onGround(void) -> bool* {
    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            return (bool*)((uintptr_t)(this) + 0x1D8);
        break;
        case MC_VER::v1_18_1_20:
            return (bool*)((uintptr_t)(this) + 0x1D8);
        break;
        case MC_VER::v1_18_0_02:
            return (bool*)((uintptr_t)(this) + 0x1D8);
        break;
        case MC_VER::v1_17_41_1:
            return (bool*)((uintptr_t)(this) + 0x1D8);
        break;
        case MC_VER::v1_17_40_6:
            return (bool*)((uintptr_t)(this) + 0x1D8);
        break;
        case MC_VER::v1_17_34_2:
            return (bool*)((uintptr_t)(this) + 0x1D8);
        break;
    };
    return (bool*)nullptr;
};

auto Actor::getBodyRot(void) -> Vec2<float>* {
    auto bodyRot = (Vec2<float>*)nullptr;

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            bodyRot = (Vec2<float>*)((uintptr_t)(this) + 0x138);
        break;
        case MC_VER::v1_18_1_20:
            bodyRot = (Vec2<float>*)((uintptr_t)(this) + 0x138);
        break;
        case MC_VER::v1_18_0_02:
            bodyRot = (Vec2<float>*)((uintptr_t)(this) + 0x138);
        break;
        case MC_VER::v1_17_41_1:
            bodyRot = (Vec2<float>*)((uintptr_t)(this) + 0x138);
        break;
        case MC_VER::v1_17_40_6:
            bodyRot = (Vec2<float>*)((uintptr_t)(this) + 0x138);
        break;
        case MC_VER::v1_17_34_2:
            bodyRot = (Vec2<float>*)((uintptr_t)(this) + 0x138);
        break;
    };

    return bodyRot;
};

auto Actor::getAABB(void) -> AABB<float>* {
    auto aabb = (AABB<float>*)nullptr;

    switch(Minecraft::sdkVer) {
        case MC_VER::v1_18_2_30:
            aabb = (AABB<float>*)((uintptr_t)(this) + 0x4B8);
        break;
        case MC_VER::v1_18_1_20:
            aabb = (AABB<float>*)((uintptr_t)(this) + 0x4B8);
        break;
        case MC_VER::v1_18_0_02:
            aabb = (AABB<float>*)((uintptr_t)(this) + 0x4B8);
        break;
        case MC_VER::v1_17_41_1:
            aabb = (AABB<float>*)((uintptr_t)(this) + 0x4C0);
        break;
        case MC_VER::v1_17_40_6:
            aabb = (AABB<float>*)((uintptr_t)(this) + 0x4C0);
        break;
        case MC_VER::v1_17_34_2:
            aabb = (AABB<float>*)((uintptr_t)(this) + 0x4C0);
        break;
    };

    return aabb;
};

auto Actor::isRidingMob(Actor* isRiding) -> bool {
    return (isRiding->isPassenger(this) || (isRiding->getFirstPassenger() != nullptr && isRiding->getFirstPassenger()->getRuntimeID() == this->getRuntimeID()));
};

auto Actor::getFlightSpeed(void) -> float {
    float* flightSpeed = (float*)nullptr;

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            flightSpeed = (float*)((uintptr_t)(this) + 0x7D8);
        break;
        case MC_VER::v1_18_1_20:
            flightSpeed = (float*)((uintptr_t)(this) + 0x7D8);
        break;
        case MC_VER::v1_18_0_02:
            flightSpeed = (float*)((uintptr_t)(this) + 0x7D8);
        break;
        case MC_VER::v1_17_41_1:
            flightSpeed = (float*)((uintptr_t)(this) + 0x7E0);
        break;
        case MC_VER::v1_17_40_6:
            flightSpeed = (float*)((uintptr_t)(this) + 0x7E0);
        break;
        case MC_VER::v1_17_34_2:
            flightSpeed = (float*)((uintptr_t)(this) + 0x7D8);
        break;
    };

    return *flightSpeed;
};

auto Actor::setFlightSpeed(float f) -> void {
    float* flightSpeed = (float*)nullptr;

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            flightSpeed = (float*)((uintptr_t)(this) + 0x7D8);
        break;
        case MC_VER::v1_18_1_20:
            flightSpeed = (float*)((uintptr_t)(this) + 0x7D8);
        break;
        case MC_VER::v1_18_0_02:
            flightSpeed = (float*)((uintptr_t)(this) + 0x7D8);
        break;
        case MC_VER::v1_17_41_1:
            flightSpeed = (float*)((uintptr_t)(this) + 0x7E0);
        break;
        case MC_VER::v1_17_40_6:
            flightSpeed = (float*)((uintptr_t)(this) + 0x7E0);
        break;
        case MC_VER::v1_17_34_2:
            flightSpeed = (float*)((uintptr_t)(this) + 0x7D8);
        break;
    };

    *flightSpeed = f;
};

auto Actor::isFlying(void) -> bool {
    bool* flyingState = (bool*)nullptr;

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            flyingState = (bool*)((uintptr_t)(this) + 0x978);
        break;
        case MC_VER::v1_18_1_20:
            flyingState = (bool*)((uintptr_t)(this) + 0x978);
        break;
        case MC_VER::v1_18_0_02:
            flyingState = (bool*)((uintptr_t)(this) + 0x978);
        break;
        case MC_VER::v1_17_41_1:
            flyingState = (bool*)((uintptr_t)(this) + 0x980);
        break;
        case MC_VER::v1_17_40_6:
            flyingState = (bool*)((uintptr_t)(this) + 0x980);
        break;
        case MC_VER::v1_17_34_2:
            flyingState = (bool*)((uintptr_t)(this) + 0x9A0);
        break;
    };

    return *flyingState;
};

auto Actor::setFlyState(bool state) -> void {
    bool* flyingState = (bool*)nullptr;

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            flyingState = (bool*)((uintptr_t)(this) + 0x978);
        break;
        case MC_VER::v1_18_1_20:
            flyingState = (bool*)((uintptr_t)(this) + 0x978);
        break;
        case MC_VER::v1_18_0_02:
            flyingState = (bool*)((uintptr_t)(this) + 0x978);
        break;
        case MC_VER::v1_17_41_1:
            flyingState = (bool*)((uintptr_t)(this) + 0x980);
        break;
        case MC_VER::v1_17_40_6:
            flyingState = (bool*)((uintptr_t)(this) + 0x980);
        break;
        case MC_VER::v1_17_34_2:
            flyingState = (bool*)((uintptr_t)(this) + 0x9A0);
        break;
    };

    if(flyingState != nullptr)
        *flyingState = state;
};

auto Actor::getMotion() -> Vec3<float> {
    auto motionVec = (Vec3<float>*)nullptr;

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            motionVec = (Vec3<float>*)((uintptr_t)(this) + 0x4F0);
        break;
        case MC_VER::v1_18_1_20:
            motionVec = (Vec3<float>*)((uintptr_t)(this) + 0x4F0);
        break;
        case MC_VER::v1_18_0_02:
            motionVec = (Vec3<float>*)((uintptr_t)(this) + 0x4F0);
        break;
        case MC_VER::v1_17_41_1:
            motionVec = (Vec3<float>*)((uintptr_t)(this) + 0x4F8);
        break;
        case MC_VER::v1_17_40_6:
            motionVec = (Vec3<float>*)((uintptr_t)(this) + 0x4F8);
        break;
        case MC_VER::v1_17_34_2:
            motionVec = (Vec3<float>*)((uintptr_t)(this) + 0x4F8);
        break;
    };

    return *motionVec;
};

auto Actor::setMotion(Vec3<float> motion) -> void {
    auto motionVec = (Vec3<float>*)nullptr;

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            motionVec = (Vec3<float>*)((uintptr_t)(this) + 0x4F0);
        break;
        case MC_VER::v1_18_1_20:
            motionVec = (Vec3<float>*)((uintptr_t)(this) + 0x4F0);
        break;
        case MC_VER::v1_18_0_02:
            motionVec = (Vec3<float>*)((uintptr_t)(this) + 0x4F0);
        break;
        case MC_VER::v1_17_41_1:
            motionVec = (Vec3<float>*)((uintptr_t)(this) + 0x4F8);
        break;
        case MC_VER::v1_17_40_6:
            motionVec = (Vec3<float>*)((uintptr_t)(this) + 0x4F8);
        break;
        case MC_VER::v1_17_34_2:
            motionVec = (Vec3<float>*)((uintptr_t)(this) + 0x4F8);
        break;
    };

    *motionVec = motion;
};

auto Actor::setMotion(float x = 0.f, float y = 0.f, float z = 0.f) -> void {
    this->setMotion(Vec3<float>(x, y, z));
};

auto Actor::setMotion(float f) -> void {
    this->setMotion(Vec3<float>(f, f, f));
};

auto Actor::setPos(Vec3<float> pos) -> void {
    this->setPos(&pos);
};

auto Actor::_getDimensionId(void) -> int {
    int* dimensionId = (int*)nullptr;

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            dimensionId = (int*)((uintptr_t)(this) + 0xE4);
        break;
        case MC_VER::v1_18_1_20:
            dimensionId = (int*)((uintptr_t)(this) + 0xE4);
        break;
        case MC_VER::v1_18_0_02:
            dimensionId = (int*)((uintptr_t)(this) + 0xE4);
        break;
        case MC_VER::v1_17_41_1:
            dimensionId = (int*)((uintptr_t)(this) + 0xE4);
        break;
        case MC_VER::v1_17_40_6:
            dimensionId = (int*)((uintptr_t)(this) + 0xE4);
        break;
        case MC_VER::v1_17_34_2:
            dimensionId = (int*)((uintptr_t)(this) + 0xE4);
        break;
    };

    return *dimensionId;
};

auto Actor::getRuntimeID(void) -> __int64 {
    auto RuntimeID = (__int64*)nullptr;

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            RuntimeID = (__int64*)((uintptr_t)(this) + 0x558);
        break;
        case MC_VER::v1_18_1_20:
            RuntimeID = (__int64*)((uintptr_t)(this) + 0x558);
        break;
        case MC_VER::v1_18_0_02:
            RuntimeID = (__int64*)((uintptr_t)(this) + 0x558);
        break;
        case MC_VER::v1_17_41_1:
            RuntimeID = (__int64*)((uintptr_t)(this) + 0x560);
        break;
        case MC_VER::v1_17_40_6:
            RuntimeID = (__int64*)((uintptr_t)(this) + 0x560);
        break;
        case MC_VER::v1_17_34_2:
            RuntimeID = (__int64*)((uintptr_t)(this) + 0x558);
        break;
    };

    return *RuntimeID;
};

auto Actor::getXboxGamertag(void) -> std::string {
    auto gamertag = (std::string*)nullptr;

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            gamertag = (std::string*)((uintptr_t)(this) + 0x8D8);
        break;
        case MC_VER::v1_18_1_20:
            gamertag = (std::string*)((uintptr_t)(this) + 0x8D8);
        break;
        case MC_VER::v1_18_0_02:
            gamertag = (std::string*)((uintptr_t)(this) + 0x8D8);
        break;
        case MC_VER::v1_17_41_1:
            gamertag = (std::string*)((uintptr_t)(this) + 0x8E0);
        break;
        case MC_VER::v1_17_40_6:
            gamertag = (std::string*)((uintptr_t)(this) + 0x8E0);
        break;
        case MC_VER::v1_17_34_2:
            gamertag = (std::string*)((uintptr_t)(this) + 0x900);
        break;
    };

    return *gamertag;
};

auto Actor::getRegionConst(void) -> BlockSource* {
    auto regionConst = (BlockSource*)nullptr;

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            regionConst = *(BlockSource**)((uintptr_t)(this) + 0x358);
        break;
        case MC_VER::v1_18_1_20:
            regionConst = *(BlockSource**)((uintptr_t)(this) + 0x358);
        break;
        case MC_VER::v1_18_0_02:
            regionConst = *(BlockSource**)((uintptr_t)(this) + 0x358);
        break;
        case MC_VER::v1_17_41_1:
            regionConst = *(BlockSource**)((uintptr_t)(this) + 0x360);
        break;
        case MC_VER::v1_17_40_6:
            regionConst = *(BlockSource**)((uintptr_t)(this) + 0x360);
        break;
        case MC_VER::v1_17_34_2:
            regionConst = *(BlockSource**)((uintptr_t)(this) + 0x360);
        break;
    };

    return regionConst;
};

auto Actor::getDimension(void) -> Dimension* {
    auto dimension = (Dimension*)nullptr;

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            dimension = *(Dimension**)((uintptr_t)(this) + 0x360);
        break;
        case MC_VER::v1_18_1_20:
            dimension = *(Dimension**)((uintptr_t)(this) + 0x360);
        break;
        case MC_VER::v1_18_0_02:
            dimension = *(Dimension**)((uintptr_t)(this) + 0x360);
        break;
        case MC_VER::v1_17_41_1:
            dimension = *(Dimension**)((uintptr_t)(this) + 0x368);
        break;
        case MC_VER::v1_17_40_6:
            dimension = *(Dimension**)((uintptr_t)(this) + 0x368);
        break;
        case MC_VER::v1_17_34_2:
            dimension = *(Dimension**)((uintptr_t)(this) + 0x368);
        break;
    };

    return dimension;
};

auto Actor::getLevel(void) -> Level* {
    auto level = (Level*)nullptr;

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            level = *(Level**)((uintptr_t)(this) + 0x368);
        break;
        case MC_VER::v1_18_1_20:
            level = *(Level**)((uintptr_t)(this) + 0x368);
        break;
        case MC_VER::v1_18_0_02:
            level = *(Level**)((uintptr_t)(this) + 0x368);
        break;
        case MC_VER::v1_17_41_1:
            level = *(Level**)((uintptr_t)(this) + 0x370);
        break;
        case MC_VER::v1_17_40_6:
            level = *(Level**)((uintptr_t)(this) + 0x370);
        break;
        case MC_VER::v1_17_34_2:
            level = *(Level**)((uintptr_t)(this) + 0x370);
        break;
    };

    return level;
};

auto Actor::isPassenger(Actor* passenger) -> bool {
    using IsPassenger = bool (__thiscall*)(Actor*, Actor*);
    static auto _IsPassenger = (IsPassenger)nullptr;

    if(_IsPassenger == nullptr)
        _IsPassenger = (IsPassenger)(Mem::findSig("48 89 5C 24 ? 57 48 83 EC 30 4C 8B 82 ? ? ? ? 48 8B FA 48"));

    return (_IsPassenger != nullptr ? _IsPassenger(this, passenger) : false);
};

auto Actor::getFirstPassenger(void) -> Actor* {
    using GetFirstPassenger = Actor* (__thiscall*)(Actor*);
    static auto _GetFirstPassenger = (GetFirstPassenger)nullptr;

    if(_GetFirstPassenger == nullptr)
        _GetFirstPassenger = (GetFirstPassenger)(Mem::findSig("48 8B 91 ? ? ? ? 48 8B 81 ? ? ? ? 48 2B C2 48 C1 F8 03 48 85 C0 74 17 48"));
    
    return (_GetFirstPassenger != nullptr ? _GetFirstPassenger(this) : nullptr);
};

auto Actor::isPlayerType(void) -> bool {
    return (this->getEntityTypeId() == EntityType::Client_Player);
};

auto Actor::isHostileType(void) -> bool {
    auto type = this->getEntityTypeId();

    switch(type) {
        case EntityType::Zombie:
            return true;
        break;
        case EntityType::Creeper:
            return true;
        break;
        case EntityType::Skeleton:
            return true;
        break;
        case EntityType::Spider:
            return true;
        break;
        case EntityType::Zombie_Pigman:
            return true;
        break;
        case EntityType::Slime:
            return true;
        break;
        case EntityType::Enderman:
            return true;
        break;
        case EntityType::Silverfish:
            return true;
        break;
        case EntityType::Cave_Spider:
            return true;
        break;
        case EntityType::Ghast:
            return true;
        break;
        case EntityType::Magma_Cube:
            return true;
        break;
        case EntityType::Blaze:
            return true;
        break;
        case EntityType::Zombie_Villager:
            return true;
        break;
        case EntityType::Witch:
            return true;
        break;
        case EntityType::Stray:
            return true;
        break;
        case EntityType::Husk:
            return true;
        break;
        case EntityType::Wither_Skeleton:
            return true;
        break;
        case EntityType::Guardian:
            return true;
        break;
        case EntityType::Elder_Guardian:
            return true;
        break;
        case EntityType::Wither:
            return true;
        break;
        case EntityType::Ender_Dragon:
            return true;
        break;
        case EntityType::Shulker:
            return true;
        break;
        case EntityType::Endermite:
            return true;
        break;
        case EntityType::Vindicator:
            return true;
        break;
        case EntityType::Phantom:
            return true;
        break;
        case EntityType::Ravager:
            return true;
        break;
        case EntityType::Evocation_Villager:
            return true;
        break;
        case EntityType::Vex:
            return true;
        break;
        case EntityType::Drowned:
            return true;
        break;
        case EntityType::Pillager:
            return true;
        break;
        case EntityType::Zombie_Villager_V2:
            return true;
        break;
        case EntityType::Piglin:
            return true;
        break;
        case EntityType::Hoglin:
            return true;
        break;
        case EntityType::Zoglin:
            return true;
        break;
        case EntityType::Piglin_Brute:
            return true;
        break;
    };

    return false;
};

auto Actor::isNotMob(void) -> bool {
    auto type = this->getEntityTypeId();

    switch(type) {
        case EntityType::Dropped_Item:
            return true;
        break;
        case EntityType::Experience_Orb:
            return true;
        break;
        case EntityType::TNT:
            return true;
        break;
        case EntityType::Falling_Block:
            return true;
        break;
        case EntityType::Moving_Block:
            return true;
        break;
        case EntityType::Armor_Stand:
            return true;
        break;
        case EntityType::Bottle_Of_Enchanting:
            return true;
        break;
        case EntityType::Eye_Of_Ender:
            return true;
        break;
        case EntityType::Ender_Crystal:
            return true;
        break;
        case EntityType::Fireworks_Rocket:
            return true;
        break;
        case EntityType::Thrown_Trident:
            return true;
        break;
        case EntityType::Shulker_Bullet:
            return true;
        break;
        case EntityType::Fishing_Hook:
            return true;
        break;
        case EntityType::Dragon_Fireball:
            return true;
        break;
        case EntityType::Arrow:
            return true;
        break;
        case EntityType::Snowball:
            return true;
        break;
        case EntityType::Egg:
            return true;
        break;
        case EntityType::Painting:
            return true;
        break;
        case EntityType::Minecart:
            return true;
        break;
        case EntityType::Fireball:
            return true;
        break;
        case EntityType::Splash_Potion:
            return true;
        break;
        case EntityType::Ender_Pearl:
            return true;
        break;
        case EntityType::Leash_Knot:
            return true;
        break;
        case EntityType::Wither_Skull:
            return true;
        break;
        case EntityType::Boat:
            return true;
        break;
        case EntityType::Wither_Skull_Dangerous:
            return true;
        break;
        case EntityType::Lightning_Bolt:
            return true;
        break;
        case EntityType::Small_Fireball:
            return true;
        break;
        case EntityType::Area_Effect_Cloud:
            return true;
        break;
        case EntityType::Hopper_Minecart:
            return true;
        break;
        case EntityType::TNT_Minecart:
            return true;
        break;
        case EntityType::Chest_Minecart:
            return true;
        break;
        case EntityType::Command_Block_Minecart:
            return true;
        break;
        case EntityType::Lingering_Potion:
            return true;
        break;
        case EntityType::Llama_Spit:
            return true;
        break;
        case EntityType::Evocation_Fang:
            return true;
        break;
        case EntityType::Ice_Bomb:
            return true;
        break;
        case EntityType::Balloon:
            return true;
        break;
    };
    
    return false;
};

auto Actor::getEntityType(void) -> std::string {
    auto type = (std::string*)nullptr;

    switch(Minecraft::sdkVer) {
        case MC_VER::v1_18_2_30:
            type = (std::string*)((uintptr_t)(this) + 0x3F8);
        break;
        case MC_VER::v1_18_1_20:
            type = (std::string*)((uintptr_t)(this) + 0x3F8);
        break;
        case MC_VER::v1_18_0_02:
            type = (std::string*)((uintptr_t)(this) + 0x3F8);
        break;
        case MC_VER::v1_17_41_1:
            type = (std::string*)((uintptr_t)(this) + 0x400);
        break;
        case MC_VER::v1_17_40_6:
            type = (std::string*)((uintptr_t)(this) + 0x400);
        break;
        case MC_VER::v1_17_34_2:
            type = (std::string*)((uintptr_t)(this) + 0x400);
        break;
    };

    return *type;
};

auto Actor::outOfWorld(void) -> bool {
    using OutOfWorld = bool (__thiscall*)(Actor*);
    auto _OutOfWorld = (OutOfWorld)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _OutOfWorld = (OutOfWorld)(this->VTable[7]);
        break;
        case MC_VER::v1_18_1_20:
            _OutOfWorld = (OutOfWorld)(this->VTable[7]);
        break;
        case MC_VER::v1_18_0_02:
            _OutOfWorld = (OutOfWorld)(this->VTable[7]);
        break;
        case MC_VER::v1_17_41_1:
            _OutOfWorld = (OutOfWorld)(this->VTable[7]);
        break;
        case MC_VER::v1_17_40_6:
            _OutOfWorld = (OutOfWorld)(this->VTable[7]);
        break;
        case MC_VER::v1_17_34_2:
            _OutOfWorld = (OutOfWorld)(this->VTable[7]);
        break;
    };

    return _OutOfWorld(this);
};

auto Actor::_serverInitItemStackIds(void) -> void {
    using ServerInitItemStackIds = void (__thiscall*)(Actor*);
    auto _ServerInitItemStackIds = (ServerInitItemStackIds)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _ServerInitItemStackIds = (ServerInitItemStackIds)(this->VTable[12]);
        break;
        case MC_VER::v1_18_1_20:
            _ServerInitItemStackIds = (ServerInitItemStackIds)(this->VTable[12]);
        break;
        case MC_VER::v1_18_0_02:
            _ServerInitItemStackIds = (ServerInitItemStackIds)(this->VTable[12]);
        break;
        case MC_VER::v1_17_41_1:
            _ServerInitItemStackIds = (ServerInitItemStackIds)(this->VTable[12]);
        break;
        case MC_VER::v1_17_40_6:
            _ServerInitItemStackIds = (ServerInitItemStackIds)(this->VTable[12]);
        break;
        case MC_VER::v1_17_34_2:
            _ServerInitItemStackIds = (ServerInitItemStackIds)(this->VTable[12]);
        break;
    };

    _ServerInitItemStackIds(this);
};

auto Actor::_doInitialMove(void) -> void {
    using DoInitialMove = void (__thiscall*)(Actor*);
    auto _DoInitialMove = (DoInitialMove)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _DoInitialMove = (DoInitialMove)(this->VTable[13]);
        break;
        case MC_VER::v1_18_1_20:
            _DoInitialMove = (DoInitialMove)(this->VTable[13]);
        break;
        case MC_VER::v1_18_0_02:
            _DoInitialMove = (DoInitialMove)(this->VTable[13]);
        break;
        case MC_VER::v1_17_41_1:
            _DoInitialMove = (DoInitialMove)(this->VTable[13]);
        break;
        case MC_VER::v1_17_40_6:
            _DoInitialMove = (DoInitialMove)(this->VTable[13]);
        break;
        case MC_VER::v1_17_34_2:
            _DoInitialMove = (DoInitialMove)(this->VTable[13]);
        break;
    };

    _DoInitialMove(this);
};

auto Actor::reset(void) -> void {
    using Reset = void (__thiscall*)(Actor*);
    auto _Reset = (Reset)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _Reset = (Reset)(this->VTable[15]);
        break;
        case MC_VER::v1_18_1_20:
            _Reset = (Reset)(this->VTable[15]);
        break;
        case MC_VER::v1_18_0_02:
            _Reset = (Reset)(this->VTable[15]);
        break;
        case MC_VER::v1_17_41_1:
            _Reset = (Reset)(this->VTable[15]);
        break;
        case MC_VER::v1_17_40_6:
            _Reset = (Reset)(this->VTable[15]);
        break;
        case MC_VER::v1_17_34_2:
            _Reset = (Reset)(this->VTable[15]);
        break;
    };

    _Reset(this);
};

auto Actor::getOnDeathExperience(void) -> __int64 {
    using GetOnDeathExperience = __int64 (__thiscall*)(Actor*);
    auto _GetOnDeathExperience = (GetOnDeathExperience)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetOnDeathExperience = (GetOnDeathExperience)(this->VTable[16]);
        break;
        case MC_VER::v1_18_1_20:
            _GetOnDeathExperience = (GetOnDeathExperience)(this->VTable[16]);
        break;
        case MC_VER::v1_18_0_02:
            _GetOnDeathExperience = (GetOnDeathExperience)(this->VTable[16]);
        break;
        case MC_VER::v1_17_41_1:
            _GetOnDeathExperience = (GetOnDeathExperience)(this->VTable[16]);
        break;
        case MC_VER::v1_17_40_6:
            _GetOnDeathExperience = (GetOnDeathExperience)(this->VTable[16]);
        break;
        case MC_VER::v1_17_34_2:
            _GetOnDeathExperience = (GetOnDeathExperience)(this->VTable[16]);
        break;
    };

    return _GetOnDeathExperience(this);
};

auto Actor::getOwnerEntityType(void) -> uint8_t {
    using GetOwnerEntityType = uint8_t (__thiscall*)(Actor*);
    auto _GetOwnerEntityType = (GetOwnerEntityType)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetOwnerEntityType = (GetOwnerEntityType)(this->VTable[17]);
        break;
        case MC_VER::v1_18_1_20:
            _GetOwnerEntityType = (GetOwnerEntityType)(this->VTable[17]);
        break;
        case MC_VER::v1_18_0_02:
            _GetOwnerEntityType = (GetOwnerEntityType)(this->VTable[17]);
        break;
        case MC_VER::v1_17_41_1:
            _GetOwnerEntityType = (GetOwnerEntityType)(this->VTable[17]);
        break;
        case MC_VER::v1_17_40_6:
            _GetOwnerEntityType = (GetOwnerEntityType)(this->VTable[17]);
        break;
        case MC_VER::v1_17_34_2:
            _GetOwnerEntityType = (GetOwnerEntityType)(this->VTable[17]);
        break;
    };

    return _GetOwnerEntityType(this);
};

auto Actor::remove(void) -> void {
    using Remove = void (__thiscall*)(Actor*);
    auto _Remove = (Remove)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _Remove = (Remove)(this->VTable[18]);
        break;
        case MC_VER::v1_18_1_20:
            _Remove = (Remove)(this->VTable[18]);
        break;
        case MC_VER::v1_18_0_02:
            _Remove = (Remove)(this->VTable[18]);
        break;
        case MC_VER::v1_17_41_1:
            _Remove = (Remove)(this->VTable[18]);
        break;
        case MC_VER::v1_17_40_6:
            _Remove = (Remove)(this->VTable[18]);
        break;
        case MC_VER::v1_17_34_2:
            _Remove = (Remove)(this->VTable[18]);
        break;
    };

    _Remove(this);
};

auto Actor::setPos(Vec3<float>* blockPos) -> void {
    using SetPos = void (__thiscall*)(Actor*, Vec3<float>*);
    auto _SetPos = (SetPos)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _SetPos = (SetPos)(this->VTable[19]);
        break;
        case MC_VER::v1_18_1_20:
            _SetPos = (SetPos)(this->VTable[19]);
        break;
        case MC_VER::v1_18_0_02:
            _SetPos = (SetPos)(this->VTable[19]);
        break;
        case MC_VER::v1_17_41_1:
            _SetPos = (SetPos)(this->VTable[19]);
        break;
        case MC_VER::v1_17_40_6:
            _SetPos = (SetPos)(this->VTable[19]);
        break;
        case MC_VER::v1_17_34_2:
            _SetPos = (SetPos)(this->VTable[19]);
        break;
    };

    _SetPos(this, blockPos);
};

auto Actor::getPos(void) -> Vec3<float>* {
    using GetPos = Vec3<float>* (__thiscall*)(Actor*);
    auto _GetPos = (GetPos)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetPos = (GetPos)(this->VTable[22]);
        break;
        case MC_VER::v1_18_1_20:
            _GetPos = (GetPos)(this->VTable[22]);
        break;
        case MC_VER::v1_18_0_02:
            _GetPos = (GetPos)(this->VTable[22]);
        break;
        case MC_VER::v1_17_41_1:
            _GetPos = (GetPos)(this->VTable[22]);
        break;
        case MC_VER::v1_17_40_6:
            _GetPos = (GetPos)(this->VTable[22]);
        break;
        case MC_VER::v1_17_34_2:
            _GetPos = (GetPos)(this->VTable[22]);
        break;
    };

    return _GetPos(this);
};

auto Actor::getPosOld(void) -> Vec3<float>* {
    using GetPosOld = Vec3<float>* (__thiscall*)(Actor*);
    auto _GetPosOld = (GetPosOld)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetPosOld = (GetPosOld)(this->VTable[23]);
        break;
        case MC_VER::v1_18_1_20:
            _GetPosOld = (GetPosOld)(this->VTable[23]);
        break;
        case MC_VER::v1_18_0_02:
            _GetPosOld = (GetPosOld)(this->VTable[23]);
        break;
        case MC_VER::v1_17_41_1:
            _GetPosOld = (GetPosOld)(this->VTable[23]);
        break;
        case MC_VER::v1_17_40_6:
            _GetPosOld = (GetPosOld)(this->VTable[23]);
        break;
        case MC_VER::v1_17_34_2:
            _GetPosOld = (GetPosOld)(this->VTable[23]);
        break;
    };

    return _GetPosOld(this);
};

auto Actor::getPosExtrapolated(float f) -> Vec3<float>* {
    using GetPosExtrapolated = Vec3<float>* (__thiscall*)(Actor*, float);
    auto _GetPosExtrapolated = (GetPosExtrapolated)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetPosExtrapolated = (GetPosExtrapolated)(this->VTable[24]);
        break;
        case MC_VER::v1_18_1_20:
            _GetPosExtrapolated = (GetPosExtrapolated)(this->VTable[24]);
        break;
        case MC_VER::v1_18_0_02:
            _GetPosExtrapolated = (GetPosExtrapolated)(this->VTable[24]);
        break;
        case MC_VER::v1_17_41_1:
            _GetPosExtrapolated = (GetPosExtrapolated)(this->VTable[24]);
        break;
        case MC_VER::v1_17_40_6:
            _GetPosExtrapolated = (GetPosExtrapolated)(this->VTable[24]);
        break;
        case MC_VER::v1_17_34_2:
            _GetPosExtrapolated = (GetPosExtrapolated)(this->VTable[24]);
        break;
    };

    return _GetPosExtrapolated(this, f);
};

auto Actor::getAttachPos(enum ActorLocation actorLocation, float f) -> Vec3<float>* {
    using GetAttachPos = Vec3<float>* (__thiscall*)(Actor*, enum ActorLocation, float);
    auto _GetAttachPos = (GetAttachPos)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetAttachPos = (GetAttachPos)(this->VTable[25]);
        break;
        case MC_VER::v1_18_1_20:
            _GetAttachPos = (GetAttachPos)(this->VTable[25]);
        break;
        case MC_VER::v1_18_0_02:
            _GetAttachPos = (GetAttachPos)(this->VTable[25]);
        break;
        case MC_VER::v1_17_41_1:
            _GetAttachPos = (GetAttachPos)(this->VTable[25]);
        break;
        case MC_VER::v1_17_40_6:
            _GetAttachPos = (GetAttachPos)(this->VTable[25]);
        break;
        case MC_VER::v1_17_34_2:
            _GetAttachPos = (GetAttachPos)(this->VTable[25]);
        break;
    };

    return _GetAttachPos(this, actorLocation, f);
};

auto Actor::getFiringPos(void) -> Vec3<float>* {
    using GetFiringPos = Vec3<float>* (__thiscall*)(Actor*);
    auto _GetFiringPos = (GetFiringPos)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetFiringPos = (GetFiringPos)(this->VTable[26]);
        break;
        case MC_VER::v1_18_1_20:
            _GetFiringPos = (GetFiringPos)(this->VTable[26]);
        break;
        case MC_VER::v1_18_0_02:
            _GetFiringPos = (GetFiringPos)(this->VTable[26]);
        break;
        case MC_VER::v1_17_41_1:
            _GetFiringPos = (GetFiringPos)(this->VTable[26]);
        break;
        case MC_VER::v1_17_40_6:
            _GetFiringPos = (GetFiringPos)(this->VTable[26]);
        break;
        case MC_VER::v1_17_34_2:
            _GetFiringPos = (GetFiringPos)(this->VTable[26]);
        break;
    };

    return _GetFiringPos(this);
};

auto Actor::setRot(Vec2<float>* bodyRot) -> void {
    using SetRot = void (__thiscall*)(Actor*, Vec2<float>*);
    auto _SetRot = (SetRot)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _SetRot = (SetRot)(this->VTable[27]);
        break;
        case MC_VER::v1_18_1_20:
            _SetRot = (SetRot)(this->VTable[27]);
        break;
        case MC_VER::v1_18_0_02:
            _SetRot = (SetRot)(this->VTable[27]);
        break;
        case MC_VER::v1_17_41_1:
            _SetRot = (SetRot)(this->VTable[27]);
        break;
        case MC_VER::v1_17_40_6:
            _SetRot = (SetRot)(this->VTable[27]);
        break;
        case MC_VER::v1_17_34_2:
            _SetRot = (SetRot)(this->VTable[27]);
        break;
    };

    _SetRot(this, bodyRot);
};

auto Actor::move(struct IActorMovementProxy* proxy, Vec3<float>* moveVec) -> void {
    using Move = void (__thiscall*)(Actor*, IActorMovementProxy*, Vec3<float>*);
    auto _Move = (Move)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _Move = (Move)(this->VTable[28]);
        break;
        case MC_VER::v1_18_1_20:
            _Move = (Move)(this->VTable[28]);
        break;
        case MC_VER::v1_18_0_02:
            _Move = (Move)(this->VTable[28]);
        break;
        case MC_VER::v1_17_41_1:
            _Move = (Move)(this->VTable[28]);
        break;
        case MC_VER::v1_17_40_6:
            _Move = (Move)(this->VTable[28]);
        break;
        case MC_VER::v1_17_34_2:
            _Move = (Move)(this->VTable[28]);
        break;
    };

    _Move(this, proxy, moveVec);
};

auto Actor::move(Vec3<float>* moveVec) -> void {
    using Move = void (__thiscall*)(Actor*, Vec3<float>*);
    auto _Move = (Move)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _Move = (Move)(this->VTable[29]);
        break;
        case MC_VER::v1_18_1_20:
            _Move = (Move)(this->VTable[29]);
        break;
        case MC_VER::v1_18_0_02:
            _Move = (Move)(this->VTable[29]);
        break;
        case MC_VER::v1_17_41_1:
            _Move = (Move)(this->VTable[29]);
        break;
        case MC_VER::v1_17_40_6:
            _Move = (Move)(this->VTable[29]);
        break;
        case MC_VER::v1_17_34_2:
            _Move = (Move)(this->VTable[29]);
        break;
    };

    _Move(this, moveVec);
};

auto Actor::getInterpolatedRidingPosition(float f) -> Vec3<float>* {
    using GetInterpolatedRidingPosition = Vec3<float>* (__thiscall*)(Actor*, float);
    auto _GetInterpolatedRidingPosition = (GetInterpolatedRidingPosition)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetInterpolatedRidingPosition = (GetInterpolatedRidingPosition)(this->VTable[30]);
        break;
        case MC_VER::v1_18_1_20:
            _GetInterpolatedRidingPosition = (GetInterpolatedRidingPosition)(this->VTable[30]);
        break;
        case MC_VER::v1_18_0_02:
            _GetInterpolatedRidingPosition = (GetInterpolatedRidingPosition)(this->VTable[30]);
        break;
        case MC_VER::v1_17_41_1:
            _GetInterpolatedRidingPosition = (GetInterpolatedRidingPosition)(this->VTable[30]);
        break;
        case MC_VER::v1_17_40_6:
            _GetInterpolatedRidingPosition = (GetInterpolatedRidingPosition)(this->VTable[30]);
        break;
        case MC_VER::v1_17_34_2:
            _GetInterpolatedRidingPosition = (GetInterpolatedRidingPosition)(this->VTable[30]);
        break;
    };

    return _GetInterpolatedRidingPosition(this, f);
};

auto Actor::getInterpolatedBodyRot(float f) -> float {
    using GetInterpolatedBodyRot = float (__thiscall*)(Actor*, float);
    auto _GetInterpolatedBodyRot = (GetInterpolatedBodyRot)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetInterpolatedBodyRot = (GetInterpolatedBodyRot)(this->VTable[31]);
        break;
        case MC_VER::v1_18_1_20:
            _GetInterpolatedBodyRot = (GetInterpolatedBodyRot)(this->VTable[31]);
        break;
        case MC_VER::v1_18_0_02:
            _GetInterpolatedBodyRot = (GetInterpolatedBodyRot)(this->VTable[31]);
        break;
        case MC_VER::v1_17_41_1:
            _GetInterpolatedBodyRot = (GetInterpolatedBodyRot)(this->VTable[31]);
        break;
        case MC_VER::v1_17_40_6:
            _GetInterpolatedBodyRot = (GetInterpolatedBodyRot)(this->VTable[31]);
        break;
        case MC_VER::v1_17_34_2:
            _GetInterpolatedBodyRot = (GetInterpolatedBodyRot)(this->VTable[31]);
        break;
    };

    return _GetInterpolatedBodyRot(this, f);
};

auto Actor::getYawSpeedInDegreesPerSecond(void) -> float {
    using GetYawSpeedInDegreesPerSecond = float (__thiscall*)(Actor*);
    auto _GetYawSpeedInDegreesPerSecond = (GetYawSpeedInDegreesPerSecond)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetYawSpeedInDegreesPerSecond = (GetYawSpeedInDegreesPerSecond)(this->VTable[34]);
        break;
        case MC_VER::v1_18_1_20:
            _GetYawSpeedInDegreesPerSecond = (GetYawSpeedInDegreesPerSecond)(this->VTable[34]);
        break;
        case MC_VER::v1_18_0_02:
            _GetYawSpeedInDegreesPerSecond = (GetYawSpeedInDegreesPerSecond)(this->VTable[34]);
        break;
        case MC_VER::v1_17_41_1:
            _GetYawSpeedInDegreesPerSecond = (GetYawSpeedInDegreesPerSecond)(this->VTable[34]);
        break;
        case MC_VER::v1_17_40_6:
            _GetYawSpeedInDegreesPerSecond = (GetYawSpeedInDegreesPerSecond)(this->VTable[34]);
        break;
        case MC_VER::v1_17_34_2:
            _GetYawSpeedInDegreesPerSecond = (GetYawSpeedInDegreesPerSecond)(this->VTable[34]);
        break;
    };

    return _GetYawSpeedInDegreesPerSecond(this);
};

auto Actor::getInterpolatedWalkAnimSpeed(float f) -> float {
    using GetInterpolatedWalkAnimSpeed = float (__thiscall*)(Actor*, float);
    auto _GetInterpolatedWalkAnimSpeed = (GetInterpolatedWalkAnimSpeed)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetInterpolatedWalkAnimSpeed = (GetInterpolatedWalkAnimSpeed)(this->VTable[35]);
        break;
        case MC_VER::v1_18_1_20:
            _GetInterpolatedWalkAnimSpeed = (GetInterpolatedWalkAnimSpeed)(this->VTable[35]);
        break;
        case MC_VER::v1_18_0_02:
            _GetInterpolatedWalkAnimSpeed = (GetInterpolatedWalkAnimSpeed)(this->VTable[35]);
        break;
        case MC_VER::v1_17_41_1:
            _GetInterpolatedWalkAnimSpeed = (GetInterpolatedWalkAnimSpeed)(this->VTable[35]);
        break;
        case MC_VER::v1_17_40_6:
            _GetInterpolatedWalkAnimSpeed = (GetInterpolatedWalkAnimSpeed)(this->VTable[35]);
        break;
        case MC_VER::v1_17_34_2:
            _GetInterpolatedWalkAnimSpeed = (GetInterpolatedWalkAnimSpeed)(this->VTable[35]);
        break;
    };

    return _GetInterpolatedWalkAnimSpeed(this, f);
};

auto Actor::getWorldPosition(void) -> Vec3<float>* {
    using GetWorldPosition = Vec3<float>* (__thiscall*)(Actor*);
    auto _GetWorldPosition = (GetWorldPosition)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetWorldPosition = (GetWorldPosition)(this->VTable[36]);
        break;
        case MC_VER::v1_18_1_20:
            _GetWorldPosition = (GetWorldPosition)(this->VTable[36]);
        break;
        case MC_VER::v1_18_0_02:
            _GetWorldPosition = (GetWorldPosition)(this->VTable[36]);
        break;
        case MC_VER::v1_17_41_1:
            _GetWorldPosition = (GetWorldPosition)(this->VTable[36]);
        break;
        case MC_VER::v1_17_40_6:
            _GetWorldPosition = (GetWorldPosition)(this->VTable[36]);
        break;
        case MC_VER::v1_17_34_2:
            _GetWorldPosition = (GetWorldPosition)(this->VTable[36]);
        break;
    };

    return _GetWorldPosition(this);
};

auto Actor::updateEntityInside(void) -> void {
    using UpdateEntityInside = void (__thiscall*)(Actor*);
    auto _UpdateEntityInside = (UpdateEntityInside)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _UpdateEntityInside = (UpdateEntityInside)(this->VTable[38]);
        break;
        case MC_VER::v1_18_1_20:
            _UpdateEntityInside = (UpdateEntityInside)(this->VTable[38]);
        break;
        case MC_VER::v1_18_0_02:
            _UpdateEntityInside = (UpdateEntityInside)(this->VTable[38]);
        break;
        case MC_VER::v1_17_41_1:
            _UpdateEntityInside = (UpdateEntityInside)(this->VTable[38]);
        break;
        case MC_VER::v1_17_40_6:
            _UpdateEntityInside = (UpdateEntityInside)(this->VTable[38]);
        break;
        case MC_VER::v1_17_34_2:
            _UpdateEntityInside = (UpdateEntityInside)(this->VTable[38]);
        break;
    };

    _UpdateEntityInside(this);
};

auto Actor::updateEntityInside(AABB<float>* aabb) -> void {
    using UpdateEntityInside = void (__thiscall*)(Actor*, AABB<float>*);
    auto _UpdateEntityInside = (UpdateEntityInside)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _UpdateEntityInside = (UpdateEntityInside)(this->VTable[39]);
        break;
        case MC_VER::v1_18_1_20:
            _UpdateEntityInside = (UpdateEntityInside)(this->VTable[39]);
        break;
        case MC_VER::v1_18_0_02:
            _UpdateEntityInside = (UpdateEntityInside)(this->VTable[39]);
        break;
        case MC_VER::v1_17_41_1:
            _UpdateEntityInside = (UpdateEntityInside)(this->VTable[39]);
        break;
        case MC_VER::v1_17_40_6:
            _UpdateEntityInside = (UpdateEntityInside)(this->VTable[39]);
        break;
        case MC_VER::v1_17_34_2:
            _UpdateEntityInside = (UpdateEntityInside)(this->VTable[39]);
        break;
    };

    _UpdateEntityInside(this, aabb);
};

auto Actor::isFireImmune(void) -> bool {
    using IsFireImmune = bool (__thiscall*)(Actor*);
    auto _IsFireImmune = (IsFireImmune)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _IsFireImmune = (IsFireImmune)(this->VTable[40]);
        break;
        case MC_VER::v1_18_1_20:
            _IsFireImmune = (IsFireImmune)(this->VTable[40]);
        break;
        case MC_VER::v1_18_0_02:
            _IsFireImmune = (IsFireImmune)(this->VTable[40]);
        break;
        case MC_VER::v1_17_41_1:
            _IsFireImmune = (IsFireImmune)(this->VTable[40]);
        break;
        case MC_VER::v1_17_40_6:
            _IsFireImmune = (IsFireImmune)(this->VTable[40]);
        break;
        case MC_VER::v1_17_34_2:
            _IsFireImmune = (IsFireImmune)(this->VTable[40]);
        break;
    };

    return _IsFireImmune(this);
};

auto Actor::blockedByShield(struct ActorDamageSource* actorDamageSource, Actor* entity) -> void {
    using BlockedByShield = void (__thiscall*)(Actor*, ActorDamageSource*, Actor*);
    auto _BlockedByShield = (BlockedByShield)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _BlockedByShield = (BlockedByShield)(this->VTable[42]);
        break;
        case MC_VER::v1_18_1_20:
            _BlockedByShield = (BlockedByShield)(this->VTable[42]);
        break;
        case MC_VER::v1_18_0_02:
            _BlockedByShield = (BlockedByShield)(this->VTable[42]);
        break;
        case MC_VER::v1_17_41_1:
            _BlockedByShield = (BlockedByShield)(this->VTable[42]);
        break;
        case MC_VER::v1_17_40_6:
            _BlockedByShield = (BlockedByShield)(this->VTable[42]);
        break;
        case MC_VER::v1_17_34_2:
            _BlockedByShield = (BlockedByShield)(this->VTable[42]);
        break;
    };

    _BlockedByShield(this, actorDamageSource, entity);
};

auto Actor::teleportTo(Vec3<float>* tpPos, bool paramB, int paramC, int paramD) -> void {
    using TeleportTo = void (__thiscall*)(Actor*, Vec3<float>*, bool, int, int);
    auto _TeleportTo = (TeleportTo)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _TeleportTo = (TeleportTo)(this->VTable[43]);
        break;
        case MC_VER::v1_18_1_20:
            _TeleportTo = (TeleportTo)(this->VTable[43]);
        break;
        case MC_VER::v1_18_0_02:
            _TeleportTo = (TeleportTo)(this->VTable[43]);
        break;
        case MC_VER::v1_17_41_1:
            _TeleportTo = (TeleportTo)(this->VTable[43]);
        break;
        case MC_VER::v1_17_40_6:
            _TeleportTo = (TeleportTo)(this->VTable[43]);
        break;
        case MC_VER::v1_17_34_2:
            _TeleportTo = (TeleportTo)(this->VTable[43]);
        break;
    };

    _TeleportTo(this, tpPos, paramB, paramC, paramD);
};

auto Actor::tryTeleportTo(Vec3<float>* tpPos, bool paramB, bool paramC, int paramD, int paramE) -> void {
    using TeleportTo = void (__thiscall*)(Actor*, Vec3<float>*, bool, bool, int, int);
    auto _TeleportTo = (TeleportTo)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _TeleportTo = (TeleportTo)(this->VTable[44]);
        break;
        case MC_VER::v1_18_1_20:
            _TeleportTo = (TeleportTo)(this->VTable[44]);
        break;
        case MC_VER::v1_18_0_02:
            _TeleportTo = (TeleportTo)(this->VTable[44]);
        break;
        case MC_VER::v1_17_41_1:
            _TeleportTo = (TeleportTo)(this->VTable[44]);
        break;
        case MC_VER::v1_17_40_6:
            _TeleportTo = (TeleportTo)(this->VTable[44]);
        break;
        case MC_VER::v1_17_34_2:
            _TeleportTo = (TeleportTo)(this->VTable[44]);
        break;
    };

    _TeleportTo(this, tpPos, paramB, paramC, paramD, paramE);
};

auto Actor::chorusFruitTeleport(Vec3<float>* tpPos) -> void {
    using ChorusFruitTeleport = void (__thiscall*)(Actor*, Vec3<float>*);
    auto _ChorusFruitTeleport = (ChorusFruitTeleport)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _ChorusFruitTeleport = (ChorusFruitTeleport)(this->VTable[45]);
        break;
        case MC_VER::v1_18_1_20:
            _ChorusFruitTeleport = (ChorusFruitTeleport)(this->VTable[45]);
        break;
        case MC_VER::v1_18_0_02:
            _ChorusFruitTeleport = (ChorusFruitTeleport)(this->VTable[45]);
        break;
        case MC_VER::v1_17_41_1:
            _ChorusFruitTeleport = (ChorusFruitTeleport)(this->VTable[45]);
        break;
        case MC_VER::v1_17_40_6:
            _ChorusFruitTeleport = (ChorusFruitTeleport)(this->VTable[45]);
        break;
        case MC_VER::v1_17_34_2:
            _ChorusFruitTeleport = (ChorusFruitTeleport)(this->VTable[45]);
        break;
    };

    _ChorusFruitTeleport(this, tpPos);
};

auto Actor::lerpMotion(Vec3<float>* lerpTo) -> void {
    using LerpMotion = void (__thiscall*)(Actor*, Vec3<float>*);
    auto _LerpMotion = (LerpMotion)(this->VTable[0]);
    
    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _LerpMotion = (LerpMotion)(this->VTable[46]);
        break;
        case MC_VER::v1_18_1_20:
            _LerpMotion = (LerpMotion)(this->VTable[46]);
        break;
        case MC_VER::v1_18_0_02:
            _LerpMotion = (LerpMotion)(this->VTable[46]);
        break;
        case MC_VER::v1_17_41_1:
            _LerpMotion = (LerpMotion)(this->VTable[46]);
        break;
        case MC_VER::v1_17_40_6:
            _LerpMotion = (LerpMotion)(this->VTable[46]);
        break;
        case MC_VER::v1_17_34_2:
            _LerpMotion = (LerpMotion)(this->VTable[47]);
        break;
    };

    _LerpMotion(this, lerpTo);
};

auto Actor::tryCreateAddActorPacket(void) -> __int64 {
    using TryCreateAddActorPacket = __int64 (__thiscall*)(Actor*);
    auto _TryCreateAddActorPacket = (TryCreateAddActorPacket)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _TryCreateAddActorPacket = (TryCreateAddActorPacket)(this->VTable[47]);
        break;
        case MC_VER::v1_18_1_20:
            _TryCreateAddActorPacket = (TryCreateAddActorPacket)(this->VTable[47]);
        break;
        case MC_VER::v1_18_0_02:
            _TryCreateAddActorPacket = (TryCreateAddActorPacket)(this->VTable[47]);
        break;
        case MC_VER::v1_17_41_1:
            _TryCreateAddActorPacket = (TryCreateAddActorPacket)(this->VTable[47]);
        break;
        case MC_VER::v1_17_40_6:
            _TryCreateAddActorPacket = (TryCreateAddActorPacket)(this->VTable[47]);
        break;
        case MC_VER::v1_17_34_2:
            _TryCreateAddActorPacket = (TryCreateAddActorPacket)(this->VTable[48]);
        break;
    };

    return _TryCreateAddActorPacket(this);
};

auto Actor::normalTick(void) -> void {
    using NormalTick = void (__thiscall*)(Actor*);
    auto _NormalTick = (NormalTick)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _NormalTick = (NormalTick)(this->VTable[48]);
        break;
        case MC_VER::v1_18_1_20:
            _NormalTick = (NormalTick)(this->VTable[48]);
        break;
        case MC_VER::v1_18_0_02:
            _NormalTick = (NormalTick)(this->VTable[48]);
        break;
        case MC_VER::v1_17_41_1:
            _NormalTick = (NormalTick)(this->VTable[48]);
        break;
        case MC_VER::v1_17_40_6:
            _NormalTick = (NormalTick)(this->VTable[48]);
        break;
        case MC_VER::v1_17_34_2:
            _NormalTick = (NormalTick)(this->VTable[49]);
        break;
    };

    _NormalTick(this);
};

auto Actor::baseTick(void) -> void {
    using BaseTick = void (__thiscall*)(Actor*);
    auto _BaseTick = (BaseTick)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _BaseTick = (BaseTick)(this->VTable[49]);
        break;
        case MC_VER::v1_18_1_20:
            _BaseTick = (BaseTick)(this->VTable[49]);
        break;
        case MC_VER::v1_18_0_02:
            _BaseTick = (BaseTick)(this->VTable[49]);
        break;
        case MC_VER::v1_17_41_1:
            _BaseTick = (BaseTick)(this->VTable[49]);
        break;
        case MC_VER::v1_17_40_6:
            _BaseTick = (BaseTick)(this->VTable[49]);
        break;
        case MC_VER::v1_17_34_2:
            _BaseTick = (BaseTick)(this->VTable[50]);
        break;
    };

    _BaseTick(this);
};

auto Actor::rideTick(void) -> void {
    using RideTick = void (__thiscall*)(Actor*);
    auto _RideTick = (RideTick)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _RideTick = (RideTick)(this->VTable[50]);
        break;
        case MC_VER::v1_18_1_20:
            _RideTick = (RideTick)(this->VTable[50]);
        break;
        case MC_VER::v1_18_0_02:
            _RideTick = (RideTick)(this->VTable[50]);
        break;
        case MC_VER::v1_17_41_1:
            _RideTick = (RideTick)(this->VTable[50]);
        break;
        case MC_VER::v1_17_40_6:
            _RideTick = (RideTick)(this->VTable[50]);
        break;
        case MC_VER::v1_17_34_2:
            _RideTick = (RideTick)(this->VTable[51]);
        break;
    };

    _RideTick(this);
};

auto Actor::positionPassenger(Actor* entity) -> void {
    using PositionPassenger = void (__thiscall*)(Actor*, Actor*);
    auto _PositionPassenger = (PositionPassenger)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _PositionPassenger = (PositionPassenger)(this->VTable[51]);
        break;
        case MC_VER::v1_18_1_20:
            _PositionPassenger = (PositionPassenger)(this->VTable[51]);
        break;
        case MC_VER::v1_18_0_02:
            _PositionPassenger = (PositionPassenger)(this->VTable[51]);
        break;
        case MC_VER::v1_17_41_1:
            _PositionPassenger = (PositionPassenger)(this->VTable[51]);
        break;
        case MC_VER::v1_17_40_6:
            _PositionPassenger = (PositionPassenger)(this->VTable[51]);
        break;
        case MC_VER::v1_17_34_2:
            _PositionPassenger = (PositionPassenger)(this->VTable[52]);
        break;
    };

    _PositionPassenger(this, entity);
};

auto Actor::startRiding(Actor* entity) -> bool {
    using StartRiding = bool (__thiscall*)(Actor*, Actor*);
    auto _StartRiding = (StartRiding)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _StartRiding = (StartRiding)(this->VTable[53]);
        break;
        case MC_VER::v1_18_1_20:
            _StartRiding = (StartRiding)(this->VTable[53]);
        break;
        case MC_VER::v1_18_0_02:
            _StartRiding = (StartRiding)(this->VTable[53]);
        break;
        case MC_VER::v1_17_41_1:
            _StartRiding = (StartRiding)(this->VTable[53]);
        break;
        case MC_VER::v1_17_40_6:
            _StartRiding = (StartRiding)(this->VTable[53]);
        break;
        case MC_VER::v1_17_34_2:
            _StartRiding = (StartRiding)(this->VTable[54]);
        break;
    };

    return _StartRiding(this, entity);
};

auto Actor::addPassenger(Actor* entity) -> void {
    using AddPassenger = void (__thiscall*)(Actor*, Actor*);
    auto _AddPassenger = (AddPassenger)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _AddPassenger = (AddPassenger)(this->VTable[54]);
        break;
        case MC_VER::v1_18_1_20:
            _AddPassenger = (AddPassenger)(this->VTable[54]);
        break;
        case MC_VER::v1_18_0_02:
            _AddPassenger = (AddPassenger)(this->VTable[54]);
        break;
        case MC_VER::v1_17_41_1:
            _AddPassenger = (AddPassenger)(this->VTable[54]);
        break;
        case MC_VER::v1_17_40_6:
            _AddPassenger = (AddPassenger)(this->VTable[54]);
        break;
        case MC_VER::v1_17_34_2:
            _AddPassenger = (AddPassenger)(this->VTable[55]);
        break;
    };

    _AddPassenger(this, entity);
};

auto Actor::flagPassengerToRemove(Actor* entity) -> void {
    using FlagPassengerToRemove = void (__thiscall*)(Actor*, Actor*);
    auto _FlagPassengerToRemove = (FlagPassengerToRemove)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _FlagPassengerToRemove = (FlagPassengerToRemove)(this->VTable[55]);
        break;
        case MC_VER::v1_18_1_20:
            _FlagPassengerToRemove = (FlagPassengerToRemove)(this->VTable[55]);
        break;
        case MC_VER::v1_18_0_02:
            _FlagPassengerToRemove = (FlagPassengerToRemove)(this->VTable[55]);
        break;
        case MC_VER::v1_17_41_1:
            _FlagPassengerToRemove = (FlagPassengerToRemove)(this->VTable[55]);
        break;
        case MC_VER::v1_17_40_6:
            _FlagPassengerToRemove = (FlagPassengerToRemove)(this->VTable[55]);
        break;
        case MC_VER::v1_17_34_2:
            _FlagPassengerToRemove = (FlagPassengerToRemove)(this->VTable[56]);
        break;
    };

    _FlagPassengerToRemove(this, entity);
};

auto Actor::intersects(Vec3<float>* posA, Vec3<float>* posB) -> bool {
    using Intersects = bool (__thiscall*)(Actor*, Vec3<float>*, Vec3<float>*);
    auto _Intersects = (Intersects)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _Intersects = (Intersects)(this->VTable[57]);
        break;
        case MC_VER::v1_18_1_20:
            _Intersects = (Intersects)(this->VTable[57]);
        break;
        case MC_VER::v1_18_0_02:
            _Intersects = (Intersects)(this->VTable[57]);
        break;
        case MC_VER::v1_17_41_1:
            _Intersects = (Intersects)(this->VTable[57]);
        break;
        case MC_VER::v1_17_40_6:
            _Intersects = (Intersects)(this->VTable[57]);
        break;
        case MC_VER::v1_17_34_2:
            _Intersects = (Intersects)(this->VTable[57]);
        break;
    };

    return _Intersects(this, posA, posB);
};

auto Actor::isInWall(void) -> bool {
    using IsInWall = bool (__thiscall*)(Actor*);
    auto _IsInWall = (IsInWall)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _IsInWall = (IsInWall)(this->VTable[58]);
        break;
        case MC_VER::v1_18_1_20:
            _IsInWall = (IsInWall)(this->VTable[58]);
        break;
        case MC_VER::v1_18_0_02:
            _IsInWall = (IsInWall)(this->VTable[58]);
        break;
        case MC_VER::v1_17_41_1:
            _IsInWall = (IsInWall)(this->VTable[58]);
        break;
        case MC_VER::v1_17_40_6:
            _IsInWall = (IsInWall)(this->VTable[58]);
        break;
        case MC_VER::v1_17_34_2:
            _IsInWall = (IsInWall)(this->VTable[59]);
        break;
    };

    return _IsInWall(this);
};

auto Actor::isInvisible(void) -> bool {
    using IsInvisible = bool (__thiscall*)(Actor*);
    auto _IsInvisible = (IsInvisible)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _IsInvisible = (IsInvisible)(this->VTable[59]);
        break;
        case MC_VER::v1_18_1_20:
            _IsInvisible = (IsInvisible)(this->VTable[59]);
        break;
        case MC_VER::v1_18_0_02:
            _IsInvisible = (IsInvisible)(this->VTable[59]);
        break;
        case MC_VER::v1_17_41_1:
            _IsInvisible = (IsInvisible)(this->VTable[59]);
        break;
        case MC_VER::v1_17_40_6:
            _IsInvisible = (IsInvisible)(this->VTable[59]);
        break;
        case MC_VER::v1_17_34_2:
            _IsInvisible = (IsInvisible)(this->VTable[60]);
        break;
    };

    return _IsInvisible(this);
};

auto Actor::canShowNameTag(void) -> bool {
    using CanShowNameTag = bool (__thiscall*)(Actor*);
    auto _CanShowNameTag = (CanShowNameTag)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _CanShowNameTag = (CanShowNameTag)(this->VTable[60]);
        break;
        case MC_VER::v1_18_1_20:
            _CanShowNameTag = (CanShowNameTag)(this->VTable[60]);
        break;
        case MC_VER::v1_18_0_02:
            _CanShowNameTag = (CanShowNameTag)(this->VTable[60]);
        break;
        case MC_VER::v1_17_41_1:
            _CanShowNameTag = (CanShowNameTag)(this->VTable[60]);
        break;
        case MC_VER::v1_17_40_6:
            _CanShowNameTag = (CanShowNameTag)(this->VTable[60]);
        break;
        case MC_VER::v1_17_34_2:
            _CanShowNameTag = (CanShowNameTag)(this->VTable[61]);
        break;
    };

    return _CanShowNameTag(this);
};

auto Actor::setNameTagVisible(bool setVisible) -> void {
    using SetNameTagVisible = void (__thiscall*)(Actor*, bool);
    auto _SetNameTagVisible = (SetNameTagVisible)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _SetNameTagVisible = (SetNameTagVisible)(this->VTable[62]);
        break;
        case MC_VER::v1_18_1_20:
            _SetNameTagVisible = (SetNameTagVisible)(this->VTable[62]);
        break;
        case MC_VER::v1_18_0_02:
            _SetNameTagVisible = (SetNameTagVisible)(this->VTable[62]);
        break;
        case MC_VER::v1_17_41_1:
            _SetNameTagVisible = (SetNameTagVisible)(this->VTable[62]);
        break;
        case MC_VER::v1_17_40_6:
            _SetNameTagVisible = (SetNameTagVisible)(this->VTable[62]);
        break;
        case MC_VER::v1_17_34_2:
            _SetNameTagVisible = (SetNameTagVisible)(this->VTable[63]);
        break;
    };

    _SetNameTagVisible(this, setVisible);
};

auto Actor::getNameTag(void) -> std::string {
    using GetNameTag = std::string* (__thiscall*)(Actor*);
    auto _GetNameTag = (GetNameTag)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetNameTag = (GetNameTag)(this->VTable[63]);
        break;
        case MC_VER::v1_18_1_20:
            _GetNameTag = (GetNameTag)(this->VTable[63]);
        break;
        case MC_VER::v1_18_0_02:
            _GetNameTag = (GetNameTag)(this->VTable[63]);
        break;
        case MC_VER::v1_17_41_1:
            _GetNameTag = (GetNameTag)(this->VTable[63]);
        break;
        case MC_VER::v1_17_40_6:
            _GetNameTag = (GetNameTag)(this->VTable[63]);
        break;
        case MC_VER::v1_17_34_2:
            _GetNameTag = (GetNameTag)(this->VTable[64]);
        break;
    };

    return *_GetNameTag(this);
};

auto Actor::getFormattedNameTag(void) -> std::string {
    using GetFormattedNameTag = std::string* (__thiscall*)(Actor*);
    auto _GetFormattedNameTag = (GetFormattedNameTag)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetFormattedNameTag = (GetFormattedNameTag)(this->VTable[65]);
        break;
        case MC_VER::v1_18_1_20:
            _GetFormattedNameTag = (GetFormattedNameTag)(this->VTable[65]);
        break;
        case MC_VER::v1_18_0_02:
            _GetFormattedNameTag = (GetFormattedNameTag)(this->VTable[65]);
        break;
        case MC_VER::v1_17_41_1:
            _GetFormattedNameTag = (GetFormattedNameTag)(this->VTable[65]);
        break;
        case MC_VER::v1_17_40_6:
            _GetFormattedNameTag = (GetFormattedNameTag)(this->VTable[65]);
        break;
        case MC_VER::v1_17_34_2:
            _GetFormattedNameTag = (GetFormattedNameTag)(this->VTable[66]);
        break;
    };

    return *_GetFormattedNameTag(this);
};

auto Actor::filterFormattedNameTag(struct UIProfanityContext* uiProfanityContext) {
    using FilterFormattedNameTag = void (__thiscall*)(Actor*, UIProfanityContext*);
    auto _FilterFormattedNameTag = (FilterFormattedNameTag)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _FilterFormattedNameTag = (FilterFormattedNameTag)(this->VTable[66]);
        break;
        case MC_VER::v1_18_1_20:
            _FilterFormattedNameTag = (FilterFormattedNameTag)(this->VTable[66]);
        break;
        case MC_VER::v1_18_0_02:
            _FilterFormattedNameTag = (FilterFormattedNameTag)(this->VTable[66]);
        break;
        case MC_VER::v1_17_41_1:
            _FilterFormattedNameTag = (FilterFormattedNameTag)(this->VTable[66]);
        break;
        case MC_VER::v1_17_40_6:
            _FilterFormattedNameTag = (FilterFormattedNameTag)(this->VTable[66]);
        break;
        case MC_VER::v1_17_34_2:
            _FilterFormattedNameTag = (FilterFormattedNameTag)(this->VTable[67]);
        break;
    };

    _FilterFormattedNameTag(this, uiProfanityContext);
};

auto Actor::setNameTag(std::string name) -> void {
    using SetNameTag = void (__thiscall*)(Actor*, std::string*);
    auto _SetNameTag = (SetNameTag)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _SetNameTag = (SetNameTag)(this->VTable[67]);
        break;
        case MC_VER::v1_18_1_20:
            _SetNameTag = (SetNameTag)(this->VTable[67]);
        break;
        case MC_VER::v1_18_0_02:
            _SetNameTag = (SetNameTag)(this->VTable[67]);
        break;
        case MC_VER::v1_17_41_1:
            _SetNameTag = (SetNameTag)(this->VTable[67]);
        break;
        case MC_VER::v1_17_40_6:
            _SetNameTag = (SetNameTag)(this->VTable[67]);
        break;
        case MC_VER::v1_17_34_2:
            _SetNameTag = (SetNameTag)(this->VTable[68]);
        break;
    };

    _SetNameTag(this, &name);
};

auto Actor::setScoreTag(std::string scoreTag) -> void {
    using SetScoreTag = void (__thiscall*)(Actor*, std::string*);
    auto _SetScoreTag = (SetScoreTag)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _SetScoreTag = (SetScoreTag)(this->VTable[69]);
        break;
        case MC_VER::v1_18_1_20:
            _SetScoreTag = (SetScoreTag)(this->VTable[69]);
        break;
        case MC_VER::v1_18_0_02:
            _SetScoreTag = (SetScoreTag)(this->VTable[69]);
        break;
        case MC_VER::v1_17_41_1:
            _SetScoreTag = (SetScoreTag)(this->VTable[69]);
        break;
        case MC_VER::v1_17_40_6:
            _SetScoreTag = (SetScoreTag)(this->VTable[69]);
        break;
        case MC_VER::v1_17_34_2:
            _SetScoreTag = (SetScoreTag)(this->VTable[70]);
        break;
    };

    _SetScoreTag(this, &scoreTag);
};

auto Actor::getScoreTag(void) -> std::string {
    using GetScoreTag = std::string* (__thiscall*)(Actor*);
    auto _GetScoreTag = (GetScoreTag)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetScoreTag = (GetScoreTag)(this->VTable[70]);
        break;
        case MC_VER::v1_18_1_20:
            _GetScoreTag = (GetScoreTag)(this->VTable[70]);
        break;
        case MC_VER::v1_18_0_02:
            _GetScoreTag = (GetScoreTag)(this->VTable[70]);
        break;
        case MC_VER::v1_17_41_1:
            _GetScoreTag = (GetScoreTag)(this->VTable[70]);
        break;
        case MC_VER::v1_17_40_6:
            _GetScoreTag = (GetScoreTag)(this->VTable[70]);
        break;
        case MC_VER::v1_17_34_2:
            _GetScoreTag = (GetScoreTag)(this->VTable[71]);
        break;
    };

    return *_GetScoreTag(this);
};

auto Actor::isInWater(void) -> bool {
    using IsInWater = bool (__thiscall*)(Actor*);
    auto _IsInWater = (IsInWater)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _IsInWater = (IsInWater)(this->VTable[71]);
        break;
        case MC_VER::v1_18_1_20:
            _IsInWater = (IsInWater)(this->VTable[71]);
        break;
        case MC_VER::v1_18_0_02:
            _IsInWater = (IsInWater)(this->VTable[71]);
        break;
        case MC_VER::v1_17_41_1:
            _IsInWater = (IsInWater)(this->VTable[71]);
        break;
        case MC_VER::v1_17_40_6:
            _IsInWater = (IsInWater)(this->VTable[71]);
        break;
        case MC_VER::v1_17_34_2:
            _IsInWater = (IsInWater)(this->VTable[72]);
        break;
    };

    return _IsInWater(this);
};

auto Actor::hasEnteredWater(void) -> bool {
    using HasEnteredWater = bool (__thiscall*)(Actor*);
    auto _HasEnteredWater = (HasEnteredWater)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _HasEnteredWater = (HasEnteredWater)(this->VTable[72]);
        break;
        case MC_VER::v1_18_1_20:
            _HasEnteredWater = (HasEnteredWater)(this->VTable[72]);
        break;
        case MC_VER::v1_18_0_02:
            _HasEnteredWater = (HasEnteredWater)(this->VTable[72]);
        break;
        case MC_VER::v1_17_41_1:
            _HasEnteredWater = (HasEnteredWater)(this->VTable[72]);
        break;
        case MC_VER::v1_17_40_6:
            _HasEnteredWater = (HasEnteredWater)(this->VTable[72]);
        break;
        case MC_VER::v1_17_34_2:
            _HasEnteredWater = (HasEnteredWater)(this->VTable[73]);
        break;
    };

    return _HasEnteredWater(this);
};

auto Actor::isInLava(void) -> bool {
    using IsInLava = bool (__thiscall*)(Actor*);
    auto _IsInLava = (IsInLava)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _IsInLava = (IsInLava)(this->VTable[73]);
        break;
        case MC_VER::v1_18_1_20:
            _IsInLava = (IsInLava)(this->VTable[73]);
        break;
        case MC_VER::v1_18_0_02:
            _IsInLava = (IsInLava)(this->VTable[73]);
        break;
        case MC_VER::v1_17_41_1:
            _IsInLava = (IsInLava)(this->VTable[73]);
        break;
        case MC_VER::v1_17_40_6:
            _IsInLava = (IsInLava)(this->VTable[73]);
        break;
        case MC_VER::v1_17_34_2:
            _IsInLava = (IsInLava)(this->VTable[74]);
        break;
    };

    return _IsInLava(this);
};

auto Actor::isUnderLiquid(MaterialType materialType) -> bool {
    using IsUnderLiquid = bool(__thiscall*)(Actor*, MaterialType);
    auto _IsUnderLiquid = (IsUnderLiquid)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _IsUnderLiquid = (IsUnderLiquid)(this->VTable[74]);
        break;
        case MC_VER::v1_18_1_20:
            _IsUnderLiquid = (IsUnderLiquid)(this->VTable[74]);
        break;
        case MC_VER::v1_18_0_02:
            _IsUnderLiquid = (IsUnderLiquid)(this->VTable[74]);
        break;
        case MC_VER::v1_17_41_1:
            _IsUnderLiquid = (IsUnderLiquid)(this->VTable[74]);
        break;
        case MC_VER::v1_17_40_6:
            _IsUnderLiquid = (IsUnderLiquid)(this->VTable[74]);
        break;
        case MC_VER::v1_17_34_2:
            _IsUnderLiquid = (IsUnderLiquid)(this->VTable[75]);
        break;
    };

    return _IsUnderLiquid(this, materialType);
};

auto Actor::isOverWater(void) -> bool {
    using IsOverWater = bool (__thiscall*)(Actor*);
    auto _IsOverWater = (IsOverWater)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _IsOverWater = (IsOverWater)(this->VTable[75]);
        break;
        case MC_VER::v1_18_1_20:
            _IsOverWater = (IsOverWater)(this->VTable[75]);
        break;
        case MC_VER::v1_18_0_02:
            _IsOverWater = (IsOverWater)(this->VTable[75]);
        break;
        case MC_VER::v1_17_41_1:
            _IsOverWater = (IsOverWater)(this->VTable[75]);
        break;
        case MC_VER::v1_17_40_6:
            _IsOverWater = (IsOverWater)(this->VTable[75]);
        break;
        case MC_VER::v1_17_34_2:
            _IsOverWater = (IsOverWater)(this->VTable[76]);
        break;
    };

    return _IsOverWater(this);
};

auto Actor::setBlockMovementSlowdownMultiplier(Vec3<float>* modifier) -> void {
    using SetBlockMovementSlowdownMultiplier = void (__thiscall*)(Actor*, Vec3<float>*);
    auto _SetBlockMovementSlowdownMultiplier = (SetBlockMovementSlowdownMultiplier)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _SetBlockMovementSlowdownMultiplier = (SetBlockMovementSlowdownMultiplier)(this->VTable[76]);
        break;
        case MC_VER::v1_18_1_20:
            _SetBlockMovementSlowdownMultiplier = (SetBlockMovementSlowdownMultiplier)(this->VTable[76]);
        break;
        case MC_VER::v1_18_0_02:
            _SetBlockMovementSlowdownMultiplier = (SetBlockMovementSlowdownMultiplier)(this->VTable[76]);
        break;
        case MC_VER::v1_17_41_1:
            _SetBlockMovementSlowdownMultiplier = (SetBlockMovementSlowdownMultiplier)(this->VTable[76]);
        break;
        case MC_VER::v1_17_40_6:
            _SetBlockMovementSlowdownMultiplier = (SetBlockMovementSlowdownMultiplier)(this->VTable[76]);
        break;
        case MC_VER::v1_17_34_2:
            _SetBlockMovementSlowdownMultiplier = (SetBlockMovementSlowdownMultiplier)(this->VTable[77]);
        break;
    };

    _SetBlockMovementSlowdownMultiplier(this, modifier);
};

auto Actor::resetBlockMovementSlowdownMultiplier(void) -> void {
    using ResetBlockMovementSlowdownMultiplier = void (__thiscall*)(Actor*);
    auto _ResetBlockMovementSlowdownMultiplier = (ResetBlockMovementSlowdownMultiplier)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _ResetBlockMovementSlowdownMultiplier = (ResetBlockMovementSlowdownMultiplier)(this->VTable[77]);
        break;
        case MC_VER::v1_18_1_20:
            _ResetBlockMovementSlowdownMultiplier = (ResetBlockMovementSlowdownMultiplier)(this->VTable[77]);
        break;
        case MC_VER::v1_18_0_02:
            _ResetBlockMovementSlowdownMultiplier = (ResetBlockMovementSlowdownMultiplier)(this->VTable[77]);
        break;
        case MC_VER::v1_17_41_1:
            _ResetBlockMovementSlowdownMultiplier = (ResetBlockMovementSlowdownMultiplier)(this->VTable[77]);
        break;
        case MC_VER::v1_17_40_6:
            _ResetBlockMovementSlowdownMultiplier = (ResetBlockMovementSlowdownMultiplier)(this->VTable[77]);
        break;
        case MC_VER::v1_17_34_2:
            _ResetBlockMovementSlowdownMultiplier = (ResetBlockMovementSlowdownMultiplier)(this->VTable[78]);
        break;
    };

    _ResetBlockMovementSlowdownMultiplier(this);
};

auto Actor::getShadowHeightOffs(void) -> float {
    using GetShadowHeightOffs = float (__thiscall*)(Actor*);
    auto _GetShadowHeightOffs = (GetShadowHeightOffs)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetShadowHeightOffs = (GetShadowHeightOffs)(this->VTable[79]);
        break;
        case MC_VER::v1_18_1_20:
            _GetShadowHeightOffs = (GetShadowHeightOffs)(this->VTable[79]);
        break;
        case MC_VER::v1_18_0_02:
            _GetShadowHeightOffs = (GetShadowHeightOffs)(this->VTable[79]);
        break;
        case MC_VER::v1_17_41_1:
            _GetShadowHeightOffs = (GetShadowHeightOffs)(this->VTable[79]);
        break;
        case MC_VER::v1_17_40_6:
            _GetShadowHeightOffs = (GetShadowHeightOffs)(this->VTable[79]);
        break;
        case MC_VER::v1_17_34_2:
            _GetShadowHeightOffs = (GetShadowHeightOffs)(this->VTable[80]);
        break;
    };

    return _GetShadowHeightOffs(this);
};

auto Actor::getShadowRadiusOffs(void) -> float {
    using GetShadowRadiusOffs = float (__thiscall*)(Actor*);
    auto _GetShadowRadiusOffs = (GetShadowRadiusOffs)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetShadowRadiusOffs = (GetShadowRadiusOffs)(this->VTable[80]);
        break;
        case MC_VER::v1_18_1_20:
            _GetShadowRadiusOffs = (GetShadowRadiusOffs)(this->VTable[80]);
        break;
        case MC_VER::v1_18_0_02:
            _GetShadowRadiusOffs = (GetShadowRadiusOffs)(this->VTable[80]);
        break;
        case MC_VER::v1_17_41_1:
            _GetShadowRadiusOffs = (GetShadowRadiusOffs)(this->VTable[80]);
        break;
        case MC_VER::v1_17_40_6:
            _GetShadowRadiusOffs = (GetShadowRadiusOffs)(this->VTable[80]);
        break;
        case MC_VER::v1_17_34_2:
            _GetShadowRadiusOffs = (GetShadowRadiusOffs)(this->VTable[81]);
        break;
    };

    return _GetShadowRadiusOffs(this);
};

auto Actor::getHeadLookVector(float f) -> Vec3<float>* {
    using GetHeadLookVector = Vec3<float>* (__thiscall*)(Actor*, float);
    auto _GetHeadLookVector = (GetHeadLookVector)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetHeadLookVector = (GetHeadLookVector)(this->VTable[81]);
        break;
        case MC_VER::v1_18_1_20:
            _GetHeadLookVector = (GetHeadLookVector)(this->VTable[81]);
        break;
        case MC_VER::v1_18_0_02:
            _GetHeadLookVector = (GetHeadLookVector)(this->VTable[81]);
        break;
        case MC_VER::v1_17_41_1:
            _GetHeadLookVector = (GetHeadLookVector)(this->VTable[81]);
        break;
        case MC_VER::v1_17_40_6:
            _GetHeadLookVector = (GetHeadLookVector)(this->VTable[81]);
        break;
        case MC_VER::v1_17_34_2:
            _GetHeadLookVector = (GetHeadLookVector)(this->VTable[82]);
        break;
    };

    return _GetHeadLookVector(this, f);
};

auto Actor::canSee(Vec3<float>* vec) -> bool {
    using CanSee = bool (__thiscall*)(Actor*, Vec3<float>*);
    auto _CanSee = (CanSee)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _CanSee = (CanSee)(this->VTable[83]);
        break;
        case MC_VER::v1_18_1_20:
            _CanSee = (CanSee)(this->VTable[83]);
        break;
        case MC_VER::v1_18_0_02:
            _CanSee = (CanSee)(this->VTable[83]);
        break;
        case MC_VER::v1_17_41_1:
            _CanSee = (CanSee)(this->VTable[83]);
        break;
        case MC_VER::v1_17_40_6:
            _CanSee = (CanSee)(this->VTable[83]);
        break;
        case MC_VER::v1_17_34_2:
            _CanSee = (CanSee)(this->VTable[84]);
        break;
    };

    return _CanSee(this, vec);
};

auto Actor::canSee(Actor* entity) -> bool {
    using CanSee = bool (__thiscall*)(Actor*, Actor*);
    auto _CanSee = (CanSee)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _CanSee = (CanSee)(this->VTable[84]);
        break;
        case MC_VER::v1_18_1_20:
            _CanSee = (CanSee)(this->VTable[84]);
        break;
        case MC_VER::v1_18_0_02:
            _CanSee = (CanSee)(this->VTable[84]);
        break;
        case MC_VER::v1_17_41_1:
            _CanSee = (CanSee)(this->VTable[84]);
        break;
        case MC_VER::v1_17_40_6:
            _CanSee = (CanSee)(this->VTable[84]);
        break;
        case MC_VER::v1_17_34_2:
            _CanSee = (CanSee)(this->VTable[85]);
        break;
    };

    return _CanSee(this, entity);
};

auto Actor::isSkyLit(float f) -> bool {
    using IsSkyLit = bool (__thiscall*)(Actor*, float);
    auto _IsSkyLit = (IsSkyLit)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _IsSkyLit = (IsSkyLit)(this->VTable[85]);
        break;
        case MC_VER::v1_18_1_20:
            _IsSkyLit = (IsSkyLit)(this->VTable[85]);
        break;
        case MC_VER::v1_18_0_02:
            _IsSkyLit = (IsSkyLit)(this->VTable[85]);
        break;
        case MC_VER::v1_17_41_1:
            _IsSkyLit = (IsSkyLit)(this->VTable[85]);
        break;
        case MC_VER::v1_17_40_6:
            _IsSkyLit = (IsSkyLit)(this->VTable[85]);
        break;
        case MC_VER::v1_17_34_2:
            _IsSkyLit = (IsSkyLit)(this->VTable[86]);
        break;
    };

    return _IsSkyLit(this, f);
};

auto Actor::getBrightness(float f) -> float {
    using GetBrightness = float (__thiscall*)(Actor*, float);
    auto _GetBrightness = (GetBrightness)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetBrightness = (GetBrightness)(this->VTable[86]);
        break;
        case MC_VER::v1_18_1_20:
            _GetBrightness = (GetBrightness)(this->VTable[86]);
        break;
        case MC_VER::v1_18_0_02:
            _GetBrightness = (GetBrightness)(this->VTable[86]);
        break;
        case MC_VER::v1_17_41_1:
            _GetBrightness = (GetBrightness)(this->VTable[86]);
        break;
        case MC_VER::v1_17_40_6:
            _GetBrightness = (GetBrightness)(this->VTable[86]);
        break;
        case MC_VER::v1_17_34_2:
            _GetBrightness = (GetBrightness)(this->VTable[87]);
        break;
    };

    return _GetBrightness(this, f);
};

auto Actor::isImmobile(void) -> bool {
    using IsImmobile = bool (__thiscall*)(Actor*);
    auto _IsImmobile = (IsImmobile)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _IsImmobile = (IsImmobile)(this->VTable[91]);
        break;
        case MC_VER::v1_18_1_20:
            _IsImmobile = (IsImmobile)(this->VTable[91]);
        break;
        case MC_VER::v1_18_0_02:
            _IsImmobile = (IsImmobile)(this->VTable[91]);
        break;
        case MC_VER::v1_17_41_1:
            _IsImmobile = (IsImmobile)(this->VTable[91]);
        break;
        case MC_VER::v1_17_40_6:
            _IsImmobile = (IsImmobile)(this->VTable[91]);
        break;
        case MC_VER::v1_17_34_2:
            _IsImmobile = (IsImmobile)(this->VTable[92]);
        break;
    };
    
    return _IsImmobile(this);
};

auto Actor::isSilent(void) -> bool {
    using IsSilent = bool (__thiscall*)(Actor*);
    auto _IsSilent = (IsSilent)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _IsSilent = (IsSilent)(this->VTable[92]);
        break;
        case MC_VER::v1_18_1_20:
            _IsSilent = (IsSilent)(this->VTable[92]);
        break;
        case MC_VER::v1_18_0_02:
            _IsSilent = (IsSilent)(this->VTable[92]);
        break;
        case MC_VER::v1_17_41_1:
            _IsSilent = (IsSilent)(this->VTable[92]);
        break;
        case MC_VER::v1_17_40_6:
            _IsSilent = (IsSilent)(this->VTable[92]);
        break;
        case MC_VER::v1_17_34_2:
            _IsSilent = (IsSilent)(this->VTable[93]);
        break;
    };

    return _IsSilent(this);
};

auto Actor::isSleeping(void) -> bool {
    using IsSleeping = bool (__thiscall*)(Actor*);
    auto _IsSleeping = (IsSleeping)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _IsSleeping = (IsSleeping)(this->VTable[95]);
        break;
        case MC_VER::v1_18_1_20:
            _IsSleeping = (IsSleeping)(this->VTable[95]);
        break;
        case MC_VER::v1_18_0_02:
            _IsSleeping = (IsSleeping)(this->VTable[95]);
        break;
        case MC_VER::v1_17_41_1:
            _IsSleeping = (IsSleeping)(this->VTable[95]);
        break;
        case MC_VER::v1_17_40_6:
            _IsSleeping = (IsSleeping)(this->VTable[95]);
        break;
        case MC_VER::v1_17_34_2:
            _IsSleeping = (IsSleeping)(this->VTable[96]);
        break;
    };

    return _IsSleeping(this);
};

auto Actor::setSleeping(bool setSleeping) -> void {
    using SetSleeping = void (__thiscall*)(Actor*, bool);
    auto _SetSleeping = (SetSleeping)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _SetSleeping = (SetSleeping)(this->VTable[96]);
        break;
        case MC_VER::v1_18_1_20:
            _SetSleeping = (SetSleeping)(this->VTable[96]);
        break;
        case MC_VER::v1_18_0_02:
            _SetSleeping = (SetSleeping)(this->VTable[96]);
        break;
        case MC_VER::v1_17_41_1:
            _SetSleeping = (SetSleeping)(this->VTable[96]);
        break;
        case MC_VER::v1_17_40_6:
            _SetSleeping = (SetSleeping)(this->VTable[96]);
        break;
        case MC_VER::v1_17_34_2:
            _SetSleeping = (SetSleeping)(this->VTable[97]);
        break;
    };

    _SetSleeping(this, setSleeping);
};

auto Actor::setSneaking(bool setSneaking) -> void {
    using SetSneaking = bool (__thiscall*)(Actor*, bool);
    auto _SetSneaking = (SetSneaking)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _SetSneaking = (SetSneaking)(this->VTable[98]);
        break;
        case MC_VER::v1_18_1_20:
            _SetSneaking = (SetSneaking)(this->VTable[98]);
        break;
        case MC_VER::v1_18_0_02:
            _SetSneaking = (SetSneaking)(this->VTable[98]);
        break;
        case MC_VER::v1_17_41_1:
            _SetSneaking = (SetSneaking)(this->VTable[98]);
        break;
        case MC_VER::v1_17_40_6:
            _SetSneaking = (SetSneaking)(this->VTable[98]);
        break;
        case MC_VER::v1_17_34_2:
            _SetSneaking = (SetSneaking)(this->VTable[99]);
        break;
    };

    _SetSneaking(this, setSneaking);
};

auto Actor::isAlive(void) -> bool {
    using IsAlive = bool (__thiscall*)(Actor*);
    auto _IsAlive = (IsAlive)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _IsAlive = (IsAlive)(this->VTable[101]);
        break;
        case MC_VER::v1_18_1_20:
            _IsAlive = (IsAlive)(this->VTable[101]);
        break;
        case MC_VER::v1_18_0_02:
            _IsAlive = (IsAlive)(this->VTable[101]);
        break;
        case MC_VER::v1_17_41_1:
            _IsAlive = (IsAlive)(this->VTable[101]);
        break;
        case MC_VER::v1_17_40_6:
            _IsAlive = (IsAlive)(this->VTable[101]);
        break;
        case MC_VER::v1_17_34_2:
            _IsAlive = (IsAlive)(this->VTable[102]);
        break;
    };

    return _IsAlive(this);
};

auto Actor::isOnFire(void) -> bool {
    using IsOnFire = bool (__thiscall*)(Actor*);
    auto _IsOnFire = (IsOnFire)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _IsOnFire = (IsOnFire)(this->VTable[102]);
        break;
        case MC_VER::v1_18_1_20:
            _IsOnFire = (IsOnFire)(this->VTable[102]);
        break;
        case MC_VER::v1_18_0_02:
            _IsOnFire = (IsOnFire)(this->VTable[102]);
        break;
        case MC_VER::v1_17_41_1:
            _IsOnFire = (IsOnFire)(this->VTable[102]);
        break;
        case MC_VER::v1_17_40_6:
            _IsOnFire = (IsOnFire)(this->VTable[102]);
        break;
        case MC_VER::v1_17_34_2:
            _IsOnFire = (IsOnFire)(this->VTable[103]);
        break;
    };

    return _IsOnFire(this);
};

auto Actor::isOnHotBlock(void) -> bool {
    using IsOnHotBlock = bool (__thiscall*)(Actor*);
    auto _IsOnHotBlock = (IsOnHotBlock)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _IsOnHotBlock = (IsOnHotBlock)(this->VTable[103]);
        break;
        case MC_VER::v1_18_1_20:
            _IsOnHotBlock = (IsOnHotBlock)(this->VTable[103]);
        break;
        case MC_VER::v1_18_0_02:
            _IsOnHotBlock = (IsOnHotBlock)(this->VTable[103]);
        break;
        case MC_VER::v1_17_41_1:
            _IsOnHotBlock = (IsOnHotBlock)(this->VTable[103]);
        break;
        case MC_VER::v1_17_40_6:
            _IsOnHotBlock = (IsOnHotBlock)(this->VTable[103]);
        break;
        case MC_VER::v1_17_34_2:
            _IsOnHotBlock = (IsOnHotBlock)(this->VTable[104]);
        break;
    };

    return _IsOnHotBlock(this);
};

auto Actor::isAffectedByWaterBottle(void) -> bool {
    using IsAffectedByWaterBottle = bool (__thiscall*)(Actor*);
    auto _IsAffectedByWaterBottle = (IsAffectedByWaterBottle)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _IsAffectedByWaterBottle = (IsAffectedByWaterBottle)(this->VTable[109]);
        break;
        case MC_VER::v1_18_1_20:
            _IsAffectedByWaterBottle = (IsAffectedByWaterBottle)(this->VTable[109]);
        break;
        case MC_VER::v1_18_0_02:
            _IsAffectedByWaterBottle = (IsAffectedByWaterBottle)(this->VTable[109]);
        break;
        case MC_VER::v1_17_41_1:
            _IsAffectedByWaterBottle = (IsAffectedByWaterBottle)(this->VTable[109]);
        break;
        case MC_VER::v1_17_40_6:
            _IsAffectedByWaterBottle = (IsAffectedByWaterBottle)(this->VTable[109]);
        break;
        case MC_VER::v1_17_34_2:
            _IsAffectedByWaterBottle = (IsAffectedByWaterBottle)(this->VTable[110]);
        break;
    };

    return _IsAffectedByWaterBottle(this);
};

auto Actor::canAttack(Actor* entity, bool paramB) -> bool {
    using CanAttack = bool (__thiscall*)(Actor*, Actor*, bool);
    auto _CanAttack = (CanAttack)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _CanAttack = (CanAttack)(this->VTable[110]);
        break;
        case MC_VER::v1_18_1_20:
            _CanAttack = (CanAttack)(this->VTable[110]);
        break;
        case MC_VER::v1_18_0_02:
            _CanAttack = (CanAttack)(this->VTable[110]);
        break;
        case MC_VER::v1_17_41_1:
            _CanAttack = (CanAttack)(this->VTable[110]);
        break;
        case MC_VER::v1_17_40_6:
            _CanAttack = (CanAttack)(this->VTable[110]);
        break;
        case MC_VER::v1_17_34_2:
            _CanAttack = (CanAttack)(this->VTable[111]);
        break;
    };

    return _CanAttack(this, entity, paramB);
};

auto Actor::setTarget(Actor* entity) -> void {
    using SetTarget = void (__thiscall*)(Actor*, Actor*);
    auto _SetTarget = (SetTarget)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _SetTarget = (SetTarget)(this->VTable[111]);
        break;
        case MC_VER::v1_18_1_20:
            _SetTarget = (SetTarget)(this->VTable[111]);
        break;
        case MC_VER::v1_18_0_02:
            _SetTarget = (SetTarget)(this->VTable[111]);
        break;
        case MC_VER::v1_17_41_1:
            _SetTarget = (SetTarget)(this->VTable[111]);
        break;
        case MC_VER::v1_17_40_6:
            _SetTarget = (SetTarget)(this->VTable[111]);
        break;
        case MC_VER::v1_17_34_2:
            _SetTarget = (SetTarget)(this->VTable[112]);
        break;
    };

    _SetTarget(this, entity);
};

auto Actor::isValidTarget(Actor* entity) -> bool {
    using IsValidTarget = bool (__thiscall*)(Actor*, Actor*);
    auto _IsValidTarget = (IsValidTarget)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _IsValidTarget = (IsValidTarget)(this->VTable[113]);
        break;
        case MC_VER::v1_18_1_20:
            _IsValidTarget = (IsValidTarget)(this->VTable[113]);
        break;
        case MC_VER::v1_18_0_02:
            _IsValidTarget = (IsValidTarget)(this->VTable[113]);
        break;
        case MC_VER::v1_17_41_1:
            _IsValidTarget = (IsValidTarget)(this->VTable[113]);
        break;
        case MC_VER::v1_17_40_6:
            _IsValidTarget = (IsValidTarget)(this->VTable[113]);
        break;
        case MC_VER::v1_17_34_2:
            _IsValidTarget = (IsValidTarget)(this->VTable[114]);
        break;
    };

    return _IsValidTarget(this, entity);
};

auto Actor::attack(Actor* entity, enum ActorDamageCause actorDamageCause) -> bool {
    using Attack = bool (__thiscall*)(Actor*, Actor*, ActorDamageCause);
    auto _Attack = (Attack)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _Attack = (Attack)(this->VTable[114]);
        break;
        case MC_VER::v1_18_1_20:
            _Attack = (Attack)(this->VTable[114]);
        break;
        case MC_VER::v1_18_0_02:
            _Attack = (Attack)(this->VTable[114]);
        break;
        case MC_VER::v1_17_41_1:
            _Attack = (Attack)(this->VTable[114]);
        break;
        case MC_VER::v1_17_40_6:
            _Attack = (Attack)(this->VTable[114]);
        break;
        case MC_VER::v1_17_34_2:
            _Attack = (Attack)(this->VTable[115]);
        break;
    };

    return _Attack(this, entity, actorDamageCause);
};

auto Actor::performRangedAttack(Actor* entity, float f) -> void {
    using PerformRangedAttack = void (__thiscall*)(Actor*, Actor*, float);
    auto _PerformRangedAttack = (PerformRangedAttack)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _PerformRangedAttack = (PerformRangedAttack)(this->VTable[115]);
        break;
        case MC_VER::v1_18_1_20:
            _PerformRangedAttack = (PerformRangedAttack)(this->VTable[115]);
        break;
        case MC_VER::v1_18_0_02:
            _PerformRangedAttack = (PerformRangedAttack)(this->VTable[115]);
        break;
        case MC_VER::v1_17_41_1:
            _PerformRangedAttack = (PerformRangedAttack)(this->VTable[115]);
        break;
        case MC_VER::v1_17_40_6:
            _PerformRangedAttack = (PerformRangedAttack)(this->VTable[115]);
        break;
        case MC_VER::v1_17_34_2:
            _PerformRangedAttack = (PerformRangedAttack)(this->VTable[116]);
        break;
    };

    return _PerformRangedAttack(this, entity, f);
};

auto Actor::getEquipmentCount(void) -> __int64 {
    using GetEquipmentCount = _int64 (__thiscall*)(Actor*);
    auto _GetEquipmentCount = (GetEquipmentCount)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetEquipmentCount = (GetEquipmentCount)(this->VTable[117]);
        break;
        case MC_VER::v1_18_1_20:
            _GetEquipmentCount = (GetEquipmentCount)(this->VTable[117]);
        break;
        case MC_VER::v1_18_0_02:
            _GetEquipmentCount = (GetEquipmentCount)(this->VTable[117]);
        break;
        case MC_VER::v1_17_41_1:
            _GetEquipmentCount = (GetEquipmentCount)(this->VTable[117]);
        break;
        case MC_VER::v1_17_40_6:
            _GetEquipmentCount = (GetEquipmentCount)(this->VTable[117]);
        break;
        case MC_VER::v1_17_34_2:
            _GetEquipmentCount = (GetEquipmentCount)(this->VTable[118]);
        break;
    };

    return _GetEquipmentCount(this);
};

auto Actor::setOwner(ActorUniqueID & actorUniqueID) -> void {
    using SetOwner = void (__thiscall*)(Actor*, ActorUniqueID&);
    auto _SetOwner = (SetOwner)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _SetOwner = (SetOwner)(this->VTable[118]);
        break;
        case MC_VER::v1_18_1_20:
            _SetOwner = (SetOwner)(this->VTable[118]);
        break;
        case MC_VER::v1_18_0_02:
            _SetOwner = (SetOwner)(this->VTable[118]);
        break;
        case MC_VER::v1_17_41_1:
            _SetOwner = (SetOwner)(this->VTable[118]);
        break;
        case MC_VER::v1_17_40_6:
            _SetOwner = (SetOwner)(this->VTable[118]);
        break;
        case MC_VER::v1_17_34_2:
            _SetOwner = (SetOwner)(this->VTable[119]);
        break;
    };

    _SetOwner(this, actorUniqueID);
};

auto Actor::setSitting(bool state) -> void {
    using SetSitting = void (__thiscall*)(Actor*, bool);
    auto _SetSitting = (SetSitting)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _SetSitting = (SetSitting)(this->VTable[119]);
        break;
        case MC_VER::v1_18_1_20:
            _SetSitting = (SetSitting)(this->VTable[119]);
        break;
        case MC_VER::v1_18_0_02:
            _SetSitting = (SetSitting)(this->VTable[119]);
        break;
        case MC_VER::v1_17_41_1:
            _SetSitting = (SetSitting)(this->VTable[119]);
        break;
        case MC_VER::v1_17_40_6:
            _SetSitting = (SetSitting)(this->VTable[119]);
        break;
        case MC_VER::v1_17_34_2:
            _SetSitting = (SetSitting)(this->VTable[120]);
        break;
    };

    _SetSitting(this, state);
};

auto Actor::getInventorySize(void) -> __int64 {
    using GetInventorySize = __int64 (__thiscall*)(Actor*);
    auto _GetInventorySize = (GetInventorySize)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetInventorySize = (GetInventorySize)(this->VTable[122]);
        break;
        case MC_VER::v1_18_1_20:
            _GetInventorySize = (GetInventorySize)(this->VTable[122]);
        break;
        case MC_VER::v1_18_0_02:
            _GetInventorySize = (GetInventorySize)(this->VTable[122]);
        break;
        case MC_VER::v1_17_41_1:
            _GetInventorySize = (GetInventorySize)(this->VTable[122]);
        break;
        case MC_VER::v1_17_40_6:
            _GetInventorySize = (GetInventorySize)(this->VTable[122]);
        break;
        case MC_VER::v1_17_34_2:
            _GetInventorySize = (GetInventorySize)(this->VTable[123]);
        break;
    };

    return _GetInventorySize(this);
};

auto Actor::getEquipSlots(void) -> __int64 {
    using GetEquipSlots = __int64 (__thiscall*)(Actor*);
    auto _GetEquipSlots = (GetEquipSlots)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetEquipSlots = (GetEquipSlots)(this->VTable[123]);
        break;
        case MC_VER::v1_18_1_20:
            _GetEquipSlots = (GetEquipSlots)(this->VTable[123]);
        break;
        case MC_VER::v1_18_0_02:
            _GetEquipSlots = (GetEquipSlots)(this->VTable[123]);
        break;
        case MC_VER::v1_17_41_1:
            _GetEquipSlots = (GetEquipSlots)(this->VTable[123]);
        break;
        case MC_VER::v1_17_40_6:
            _GetEquipSlots = (GetEquipSlots)(this->VTable[123]);
        break;
        case MC_VER::v1_17_34_2:
            _GetEquipSlots = (GetEquipSlots)(this->VTable[124]);
        break;
    };

    return _GetEquipSlots(this);
};

auto Actor::getChestSlots(void) -> __int64 {
    using GetChestSlots = __int64 (__thiscall*)(Actor*);
    auto _GetChestSlots = (GetChestSlots)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetChestSlots = (GetChestSlots)(this->VTable[124]);
        break;
        case MC_VER::v1_18_1_20:
            _GetChestSlots = (GetChestSlots)(this->VTable[124]);
        break;
        case MC_VER::v1_18_0_02:
            _GetChestSlots = (GetChestSlots)(this->VTable[124]);
        break;
        case MC_VER::v1_17_41_1:
            _GetChestSlots = (GetChestSlots)(this->VTable[124]);
        break;
        case MC_VER::v1_17_40_6:
            _GetChestSlots = (GetChestSlots)(this->VTable[124]);
        break;
        case MC_VER::v1_17_34_2:
            _GetChestSlots = (GetChestSlots)(this->VTable[125]);
        break;
    };

    return _GetChestSlots(this);
};

auto Actor::setStanding(bool standing) -> void {
    using SetStanding = void (__thiscall*)(Actor*, bool);
    auto _SetStanding = (SetStanding)(this->VTable[0]);
    
    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _SetStanding = (SetStanding)(this->VTable[125]);
        break;
        case MC_VER::v1_18_1_20:
            _SetStanding = (SetStanding)(this->VTable[125]);
        break;
        case MC_VER::v1_18_0_02:
            _SetStanding = (SetStanding)(this->VTable[125]);
        break;
        case MC_VER::v1_17_41_1:
            _SetStanding = (SetStanding)(this->VTable[125]);
        break;
        case MC_VER::v1_17_40_6:
            _SetStanding = (SetStanding)(this->VTable[125]);
        break;
        case MC_VER::v1_17_34_2:
            _SetStanding = (SetStanding)(this->VTable[126]);
        break;
    };

    _SetStanding(this, standing);
};

auto Actor::canPowerJump(void) -> bool {
    using CanPowerJump = bool (__thiscall*)(Actor*);
    auto _CanPowerJump = (CanPowerJump)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _CanPowerJump = (CanPowerJump)(this->VTable[126]);
        break;
        case MC_VER::v1_18_1_20:
            _CanPowerJump = (CanPowerJump)(this->VTable[126]);
        break;
        case MC_VER::v1_18_0_02:
            _CanPowerJump = (CanPowerJump)(this->VTable[126]);
        break;
        case MC_VER::v1_17_41_1:
            _CanPowerJump = (CanPowerJump)(this->VTable[126]);
        break;
        case MC_VER::v1_17_40_6:
            _CanPowerJump = (CanPowerJump)(this->VTable[126]);
        break;
        case MC_VER::v1_17_34_2:
            _CanPowerJump = (CanPowerJump)(this->VTable[127]);
        break;
    };

    return _CanPowerJump(this);
};

auto Actor::setCanPowerJump(bool powerJumpState) -> void {
    using SetCanPowerJump = void (__thiscall*)(Actor*, bool);
    auto _SetCanPowerJump = (SetCanPowerJump)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _SetCanPowerJump = (SetCanPowerJump)(this->VTable[127]);
        break;
        case MC_VER::v1_18_1_20:
            _SetCanPowerJump = (SetCanPowerJump)(this->VTable[127]);
        break;
        case MC_VER::v1_18_0_02:
            _SetCanPowerJump = (SetCanPowerJump)(this->VTable[127]);
        break;
        case MC_VER::v1_17_41_1:
            _SetCanPowerJump = (SetCanPowerJump)(this->VTable[127]);
        break;
        case MC_VER::v1_17_40_6:
            _SetCanPowerJump = (SetCanPowerJump)(this->VTable[127]);
        break;
        case MC_VER::v1_17_34_2:
            _SetCanPowerJump = (SetCanPowerJump)(this->VTable[128]);
        break;
    };

    _SetCanPowerJump(this, powerJumpState);
};

auto Actor::isJumping(void) -> bool {
    using IsJumping = bool (__thiscall*)(Actor*);
    auto _IsJumping = (IsJumping)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _IsJumping = (IsJumping)(this->VTable[128]);
        break;
        case MC_VER::v1_18_1_20:
            _IsJumping = (IsJumping)(this->VTable[128]);
        break;
        case MC_VER::v1_18_0_02:
            _IsJumping = (IsJumping)(this->VTable[128]);
        break;
        case MC_VER::v1_17_41_1:
            _IsJumping = (IsJumping)(this->VTable[128]);
        break;
        case MC_VER::v1_17_40_6:
            _IsJumping = (IsJumping)(this->VTable[128]);
        break;
        case MC_VER::v1_17_34_2:
            _IsJumping = (IsJumping)(this->VTable[129]);
        break;
    };

    return _IsJumping(this);
};

auto Actor::isEnchanted(void) -> bool {
    using IsEnchanted = bool (__thiscall*)(Actor*);
    auto _IsEnchanted = (IsEnchanted)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _IsEnchanted = (IsEnchanted)(this->VTable[129]);
        break;
        case MC_VER::v1_18_1_20:
            _IsEnchanted = (IsEnchanted)(this->VTable[129]);
        break;
        case MC_VER::v1_18_0_02:
            _IsEnchanted = (IsEnchanted)(this->VTable[129]);
        break;
        case MC_VER::v1_17_41_1:
            _IsEnchanted = (IsEnchanted)(this->VTable[129]);
        break;
        case MC_VER::v1_17_40_6:
            _IsEnchanted = (IsEnchanted)(this->VTable[129]);
        break;
        case MC_VER::v1_17_34_2:
            _IsEnchanted = (IsEnchanted)(this->VTable[130]);
        break;
    };

    return _IsEnchanted(this);
};

auto Actor::shouldRender(void) -> bool {
    using ShouldRender = bool (__thiscall*)(Actor*);
    auto _ShouldRender = (ShouldRender)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _ShouldRender = (ShouldRender)(this->VTable[131]);
        break;
        case MC_VER::v1_18_1_20:
            _ShouldRender = (ShouldRender)(this->VTable[131]);
        break;
        case MC_VER::v1_18_0_02:
            _ShouldRender = (ShouldRender)(this->VTable[131]);
        break;
        case MC_VER::v1_17_41_1:
            _ShouldRender = (ShouldRender)(this->VTable[132]);
        break;
        case MC_VER::v1_17_40_6:
            _ShouldRender = (ShouldRender)(this->VTable[132]);
        break;
        case MC_VER::v1_17_34_2:
            _ShouldRender = (ShouldRender)(this->VTable[133]);
        break;
    };

    return _ShouldRender(this);
};

auto Actor::playAmbientSound(void) -> void {
    using PlayAmbientSound = void (__thiscall*)(Actor*);
    auto _PlayAmbientSound = (PlayAmbientSound)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _PlayAmbientSound = (PlayAmbientSound)(this->VTable[132]);
        break;
        case MC_VER::v1_18_1_20:
            _PlayAmbientSound = (PlayAmbientSound)(this->VTable[132]);
        break;
        case MC_VER::v1_18_0_02:
            _PlayAmbientSound = (PlayAmbientSound)(this->VTable[132]);
        break;
        case MC_VER::v1_17_41_1:
            _PlayAmbientSound = (PlayAmbientSound)(this->VTable[133]);
        break;
        case MC_VER::v1_17_40_6:
            _PlayAmbientSound = (PlayAmbientSound)(this->VTable[133]);
        break;
        case MC_VER::v1_17_34_2:
            _PlayAmbientSound = (PlayAmbientSound)(this->VTable[134]);
        break;
    };

    _PlayAmbientSound(this);
};

auto Actor::getAmbientSound(void) -> LevelSoundEvent {
    using GetAmbientSound = LevelSoundEvent (__thiscall*)(Actor*);
    auto _GetAmbientSound = (GetAmbientSound)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetAmbientSound = (GetAmbientSound)(this->VTable[133]);
        break;
        case MC_VER::v1_18_1_20:
            _GetAmbientSound = (GetAmbientSound)(this->VTable[133]);
        break;
        case MC_VER::v1_18_0_02:
            _GetAmbientSound = (GetAmbientSound)(this->VTable[133]);
        break;
        case MC_VER::v1_17_41_1:
            _GetAmbientSound = (GetAmbientSound)(this->VTable[134]);
        break;
        case MC_VER::v1_17_40_6:
            _GetAmbientSound = (GetAmbientSound)(this->VTable[134]);
        break;
        case MC_VER::v1_17_34_2:
            _GetAmbientSound = (GetAmbientSound)(this->VTable[135]);
        break;
    };

    return _GetAmbientSound(this);
};

auto Actor::isInvulnerableTo(struct ActorDamageSource* actorDamageSource) -> bool {
    using IsInvulnerableTo = bool (__thiscall*)(Actor*, ActorDamageSource*);
    auto _IsInvulnerableTo = (IsInvulnerableTo)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _IsInvulnerableTo = (IsInvulnerableTo)(this->VTable[134]);
        break;
        case MC_VER::v1_18_1_20:
            _IsInvulnerableTo = (IsInvulnerableTo)(this->VTable[134]);
        break;
        case MC_VER::v1_18_0_02:
            _IsInvulnerableTo = (IsInvulnerableTo)(this->VTable[134]);
        break;
        case MC_VER::v1_17_41_1:
            _IsInvulnerableTo = (IsInvulnerableTo)(this->VTable[135]);
        break;
        case MC_VER::v1_17_40_6:
            _IsInvulnerableTo = (IsInvulnerableTo)(this->VTable[135]);
        break;
        case MC_VER::v1_17_34_2:
            _IsInvulnerableTo = (IsInvulnerableTo)(this->VTable[136]);
        break;
    };

    return _IsInvulnerableTo(this, actorDamageSource);
};

auto Actor::getBlockDamageCause(class Block* block) -> ActorDamageCause {
    using GetBlockDamageCause = ActorDamageCause (__thiscall*)(Actor*, Block*);
    auto _GetBlockDamageCause = (GetBlockDamageCause)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetBlockDamageCause = (GetBlockDamageCause)(this->VTable[135]);
        break;
        case MC_VER::v1_18_1_20:
            _GetBlockDamageCause = (GetBlockDamageCause)(this->VTable[135]);
        break;
        case MC_VER::v1_18_0_02:
            _GetBlockDamageCause = (GetBlockDamageCause)(this->VTable[135]);
        break;
        case MC_VER::v1_17_41_1:
            _GetBlockDamageCause = (GetBlockDamageCause)(this->VTable[136]);
        break;
        case MC_VER::v1_17_40_6:
            _GetBlockDamageCause = (GetBlockDamageCause)(this->VTable[136]);
        break;
        case MC_VER::v1_17_34_2:
            _GetBlockDamageCause = (GetBlockDamageCause)(this->VTable[137]);
        break;
    };

    return _GetBlockDamageCause(this, block);
};

auto Actor::actuallyHurt(int paramA, struct ActorDamageSource* actorDamageSource, bool paramC) -> void {
    using ActuallyHurt = void (__thiscall*)(Actor*, int, ActorDamageSource*, bool);
    auto _ActuallyHurt = (ActuallyHurt)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _ActuallyHurt = (ActuallyHurt)(this->VTable[136]);
        break;
        case MC_VER::v1_18_1_20:
            _ActuallyHurt = (ActuallyHurt)(this->VTable[136]);
        break;
        case MC_VER::v1_18_0_02:
            _ActuallyHurt = (ActuallyHurt)(this->VTable[136]);
        break;
        case MC_VER::v1_17_41_1:
            _ActuallyHurt = (ActuallyHurt)(this->VTable[137]);
        break;
        case MC_VER::v1_17_40_6:
            _ActuallyHurt = (ActuallyHurt)(this->VTable[137]);
        break;
        case MC_VER::v1_17_34_2:
            _ActuallyHurt = (ActuallyHurt)(this->VTable[138]);
        break;
    };

    _ActuallyHurt(this, paramA, actorDamageSource, paramC);
};

auto Actor::animateHurt(void) -> void {
    using AnimateHurt = void (__thiscall*)(Actor*);
    auto _AnimateHurt = (AnimateHurt)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _AnimateHurt = (AnimateHurt)(this->VTable[137]);
        break;
        case MC_VER::v1_18_1_20:
            _AnimateHurt = (AnimateHurt)(this->VTable[137]);
        break;
        case MC_VER::v1_18_0_02:
            _AnimateHurt = (AnimateHurt)(this->VTable[137]);
        break;
        case MC_VER::v1_17_41_1:
            _AnimateHurt = (AnimateHurt)(this->VTable[138]);
        break;
        case MC_VER::v1_17_40_6:
            _AnimateHurt = (AnimateHurt)(this->VTable[138]);
        break;
        case MC_VER::v1_17_34_2:
            _AnimateHurt = (AnimateHurt)(this->VTable[139]);
        break;
    };

    _AnimateHurt(this);
};

auto Actor::doFireHurt(int v) -> bool {
    using DoFireHurt = bool (__thiscall*)(Actor*, int);
    auto _DoFireHurt = (DoFireHurt)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _DoFireHurt = (DoFireHurt)(this->VTable[138]);
        break;
        case MC_VER::v1_18_1_20:
            _DoFireHurt = (DoFireHurt)(this->VTable[138]);
        break;
        case MC_VER::v1_18_0_02:
            _DoFireHurt = (DoFireHurt)(this->VTable[138]);
        break;
        case MC_VER::v1_17_41_1:
            _DoFireHurt = (DoFireHurt)(this->VTable[139]);
        break;
        case MC_VER::v1_17_40_6:
            _DoFireHurt = (DoFireHurt)(this->VTable[139]);
        break;
        case MC_VER::v1_17_34_2:
            _DoFireHurt = (DoFireHurt)(this->VTable[140]);
        break;
    };

    return _DoFireHurt(this, v);
};

auto Actor::feed(int v) -> void {
    using Feed = void (__thiscall*)(Actor*, int);
    auto _Feed = (Feed)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _Feed = (Feed)(this->VTable[141]);
        break;
        case MC_VER::v1_18_1_20:
            _Feed = (Feed)(this->VTable[141]);
        break;
        case MC_VER::v1_18_0_02:
            _Feed = (Feed)(this->VTable[141]);
        break;
        case MC_VER::v1_17_41_1:
            _Feed = (Feed)(this->VTable[142]);
        break;
        case MC_VER::v1_17_40_6:
            _Feed = (Feed)(this->VTable[142]);
        break;
        case MC_VER::v1_17_34_2:
            _Feed = (Feed)(this->VTable[143]);
        break;
    };

    _Feed(this, v);
};

auto Actor::handleEntityEvent(enum ActorEvent event, int paramB) -> void {
    using HandleEntityEvent = void (__thiscall*)(Actor*, ActorEvent, int);
    auto _HandleEntityEvent = (HandleEntityEvent)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _HandleEntityEvent = (HandleEntityEvent)(this->VTable[142]);
        break;
        case MC_VER::v1_18_1_20:
            _HandleEntityEvent = (HandleEntityEvent)(this->VTable[142]);
        break;
        case MC_VER::v1_18_0_02:
            _HandleEntityEvent = (HandleEntityEvent)(this->VTable[142]);
        break;
        case MC_VER::v1_17_41_1:
            _HandleEntityEvent = (HandleEntityEvent)(this->VTable[143]);
        break;
        case MC_VER::v1_17_40_6:
            _HandleEntityEvent = (HandleEntityEvent)(this->VTable[143]);
        break;
        case MC_VER::v1_17_34_2:
            _HandleEntityEvent = (HandleEntityEvent)(this->VTable[144]);
        break;
    };

    _HandleEntityEvent(this, event, paramB);
};

auto Actor::getPickRadius(void) -> float {
    using GetPickRadius = float (__thiscall*)(Actor*);
    auto _GetPickRadius = (GetPickRadius)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetPickRadius = (GetPickRadius)(this->VTable[143]);
        break;
        case MC_VER::v1_18_1_20:
            _GetPickRadius = (GetPickRadius)(this->VTable[143]);
        break;
        case MC_VER::v1_18_0_02:
            _GetPickRadius = (GetPickRadius)(this->VTable[143]);
        break;
        case MC_VER::v1_17_41_1:
            _GetPickRadius = (GetPickRadius)(this->VTable[144]);
        break;
        case MC_VER::v1_17_40_6:
            _GetPickRadius = (GetPickRadius)(this->VTable[144]);
        break;
        case MC_VER::v1_17_34_2:
            _GetPickRadius = (GetPickRadius)(this->VTable[145]);
        break;
    };

    return _GetPickRadius(this);
};

auto Actor::getActorRendererId(void) -> HashedString* {
    using GetActorRendererId = HashedString* (__thiscall*)(Actor*);
    auto _GetActorRendererId = (GetActorRendererId)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetActorRendererId = (GetActorRendererId)(this->VTable[144]);
        break;
        case MC_VER::v1_18_1_20:
            _GetActorRendererId = (GetActorRendererId)(this->VTable[144]);
        break;
        case MC_VER::v1_18_0_02:
            _GetActorRendererId = (GetActorRendererId)(this->VTable[144]);
        break;
        case MC_VER::v1_17_41_1:
            _GetActorRendererId = (GetActorRendererId)(this->VTable[145]);
        break;
        case MC_VER::v1_17_40_6:
            _GetActorRendererId = (GetActorRendererId)(this->VTable[145]);
        break;
        case MC_VER::v1_17_34_2:
            _GetActorRendererId = (GetActorRendererId)(this->VTable[146]);
        break;
    };

    return _GetActorRendererId(this);
};

auto Actor::spawnAtLocation(ItemStack* item, float f) -> ItemActor* {
    using SpawnAtLocation = ItemActor* (__thiscall*)(Actor*, ItemStack*, float);
    auto _SpawnAtLocation = (SpawnAtLocation)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[145]);
        break;
        case MC_VER::v1_18_1_20:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[145]);
        break;
        case MC_VER::v1_18_0_02:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[145]);
        break;
        case MC_VER::v1_17_41_1:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[146]);
        break;
        case MC_VER::v1_17_40_6:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[146]);
        break;
        case MC_VER::v1_17_34_2:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[147]);
        break;
    };

    return _SpawnAtLocation(this, item, f);
};

auto Actor::spawnAtLocation(Block* block, int paramB, float paramC) -> ItemActor* {
    using SpawnAtLocation = ItemActor* (__thiscall*)(Actor*, Block*, int, float);
    auto _SpawnAtLocation = (SpawnAtLocation)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[146]);
        break;
        case MC_VER::v1_18_1_20:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[146]);
        break;
        case MC_VER::v1_18_0_02:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[146]);
        break;
        case MC_VER::v1_17_41_1:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[147]);
        break;
        case MC_VER::v1_17_40_6:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[147]);
        break;
        case MC_VER::v1_17_34_2:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[148]);
        break;
    };

    return _SpawnAtLocation(this, block, paramB, paramC);
};

auto Actor::spawnAtLocation(Block* block, int paramB) -> ItemActor* {
    using SpawnAtLocation = ItemActor* (__thiscall*)(Actor*, Block*, int);
    auto _SpawnAtLocation = (SpawnAtLocation)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[147]);
        break;
        case MC_VER::v1_18_1_20:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[147]);
        break;
        case MC_VER::v1_18_0_02:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[147]);
        break;
        case MC_VER::v1_17_41_1:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[148]);
        break;
        case MC_VER::v1_17_40_6:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[148]);
        break;
        case MC_VER::v1_17_34_2:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[149]);
        break;
    };

    return _SpawnAtLocation(this, block, paramB);
};

auto Actor::spawnAtLocation(int paramA, int paramB, float paramC) -> ItemActor* {
    using SpawnAtLocation = ItemActor* (__thiscall*)(Actor*, int, int, float);
    auto _SpawnAtLocation = (SpawnAtLocation)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[148]);
        break;
        case MC_VER::v1_18_1_20:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[148]);
        break;
        case MC_VER::v1_18_0_02:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[148]);
        break;
        case MC_VER::v1_17_41_1:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[149]);
        break;
        case MC_VER::v1_17_40_6:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[149]);
        break;
        case MC_VER::v1_17_34_2:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[150]);
        break;
    };

    return _SpawnAtLocation(this, paramA, paramB, paramC);
};

auto Actor::spawnAtLocation(int paramA, int paramB) -> ItemActor* {
    using SpawnAtLocation = ItemActor* (__thiscall*)(Actor*, int, int);
    auto _SpawnAtLocation = (SpawnAtLocation)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[149]);
        break;
        case MC_VER::v1_18_1_20:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[149]);
        break;
        case MC_VER::v1_18_0_02:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[149]);
        break;
        case MC_VER::v1_17_41_1:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[150]);
        break;
        case MC_VER::v1_17_40_6:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[150]);
        break;
        case MC_VER::v1_17_34_2:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[151]);
        break;
    };

    return _SpawnAtLocation(this, paramA, paramB);
};

auto Actor::despawn(void) -> void {
    using Despawn = void (__thiscall*)(Actor*);
    auto _Despawn = (Despawn)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _Despawn = (Despawn)(this->VTable[150]);
        break;
        case MC_VER::v1_18_1_20:
            _Despawn = (Despawn)(this->VTable[150]);
        break;
        case MC_VER::v1_18_0_02:
            _Despawn = (Despawn)(this->VTable[150]);
        break;
        case MC_VER::v1_17_41_1:
            _Despawn = (Despawn)(this->VTable[151]);
        break;
        case MC_VER::v1_17_40_6:
            _Despawn = (Despawn)(this->VTable[151]);
        break;
        case MC_VER::v1_17_34_2:
            _Despawn = (Despawn)(this->VTable[152]);
        break;
    };

    _Despawn(this);
};

auto Actor::killed(Actor* entity) -> void {
    using Killed = void (__thiscall*)(Actor*, Actor*);
    auto _Killed = (Killed)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _Killed = (Killed)(this->VTable[151]);
        break;
        case MC_VER::v1_18_1_20:
            _Killed = (Killed)(this->VTable[151]);
        break;
        case MC_VER::v1_18_0_02:
            _Killed = (Killed)(this->VTable[151]);
        break;
        case MC_VER::v1_17_41_1:
            _Killed = (Killed)(this->VTable[152]);
        break;
        case MC_VER::v1_17_40_6:
            _Killed = (Killed)(this->VTable[152]);
        break;
        case MC_VER::v1_17_34_2:
            _Killed = (Killed)(this->VTable[153]);
        break;
    };

    _Killed(this, entity);
};

auto Actor::setArmorSlot(int slot, ItemStack* item) -> void {
    using SetArmorSlot = void (__thiscall*)(Actor*, int, ItemStack*);
    auto _SetArmorSlot = (SetArmorSlot)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _SetArmorSlot = (SetArmorSlot)(this->VTable[153]);
        break;
        case MC_VER::v1_18_1_20:
            _SetArmorSlot = (SetArmorSlot)(this->VTable[153]);
        break;
        case MC_VER::v1_18_0_02:
            _SetArmorSlot = (SetArmorSlot)(this->VTable[153]);
        break;
        case MC_VER::v1_17_41_1:
            _SetArmorSlot = (SetArmorSlot)(this->VTable[154]);
        break;
        case MC_VER::v1_17_40_6:
            _SetArmorSlot = (SetArmorSlot)(this->VTable[154]);
        break;
        case MC_VER::v1_17_34_2:
            _SetArmorSlot = (SetArmorSlot)(this->VTable[155]);
        break;
    };

    _SetArmorSlot(this, slot, item);
};

auto Actor::getArmor(int slot) -> ItemStack* {
    using GetArmorSlot = ItemStack* (__thiscall*)(Actor*, int);
    auto _GetArmorSlot = (GetArmorSlot)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetArmorSlot = (GetArmorSlot)(this->VTable[154]);
        break;
        case MC_VER::v1_18_1_20:
            _GetArmorSlot = (GetArmorSlot)(this->VTable[154]);
        break;
        case MC_VER::v1_18_0_02:
            _GetArmorSlot = (GetArmorSlot)(this->VTable[154]);
        break;
        case MC_VER::v1_17_41_1:
            _GetArmorSlot = (GetArmorSlot)(this->VTable[155]);
        break;
        case MC_VER::v1_17_40_6:
            _GetArmorSlot = (GetArmorSlot)(this->VTable[155]);
        break;
        case MC_VER::v1_17_34_2:
            _GetArmorSlot = (GetArmorSlot)(this->VTable[156]);
        break;
    };

    return _GetArmorSlot(this, slot);
};

auto Actor::getAllArmor(void) -> std::vector<ItemStack*> {
    using GetAllArmor = std::vector<ItemStack*> (__thiscall*)(Actor*);
    auto _GetAllArmor = (GetAllArmor)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetAllArmor = (GetAllArmor)(this->VTable[155]);
        break;
        case MC_VER::v1_18_1_20:
            _GetAllArmor = (GetAllArmor)(this->VTable[155]);
        break;
        case MC_VER::v1_18_0_02:
            _GetAllArmor = (GetAllArmor)(this->VTable[155]);
        break;
        case MC_VER::v1_17_41_1:
            _GetAllArmor = (GetAllArmor)(this->VTable[323]);
        break;
        case MC_VER::v1_17_40_6:
            _GetAllArmor = (GetAllArmor)(this->VTable[323]);
        break;
        case MC_VER::v1_17_34_2:
            _GetAllArmor = (GetAllArmor)(this->VTable[323]);
        break;
    };

    return _GetAllArmor(this);
};

auto Actor::getModelScale(void) -> float {
    using GetModelScale = float (__thiscall*)(Actor*);
    auto _GetModelScale = (GetModelScale)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetModelScale = (GetModelScale)(this->VTable[158]);
        break;
        case MC_VER::v1_18_1_20:
            _GetModelScale = (GetModelScale)(this->VTable[158]);
        break;
        case MC_VER::v1_18_0_02:
            _GetModelScale = (GetModelScale)(this->VTable[158]);
        break;
        case MC_VER::v1_17_41_1:
            _GetModelScale = (GetModelScale)(this->VTable[158]);
        break;
        case MC_VER::v1_17_40_6:
            _GetModelScale = (GetModelScale)(this->VTable[158]);
        break;
        case MC_VER::v1_17_34_2:
            _GetModelScale = (GetModelScale)(this->VTable[159]);
        break;
    };

    return _GetModelScale(this);
};

auto Actor::getEquippedSlot(int slot) -> ItemStack* {
    using GetEquippedSlot = ItemStack* (__thiscall*)(Actor*, int);
    auto _GetEquippedSlot = (GetEquippedSlot)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetEquippedSlot = (GetEquippedSlot)(this->VTable[159]);
        break;
        case MC_VER::v1_18_1_20:
            _GetEquippedSlot = (GetEquippedSlot)(this->VTable[159]);
        break;
        case MC_VER::v1_18_0_02:
            _GetEquippedSlot = (GetEquippedSlot)(this->VTable[159]);
        break;
        case MC_VER::v1_17_41_1:
            _GetEquippedSlot = (GetEquippedSlot)(this->VTable[159]);
        break;
        case MC_VER::v1_17_40_6:
            _GetEquippedSlot = (GetEquippedSlot)(this->VTable[159]);
        break;
        case MC_VER::v1_17_34_2:
            _GetEquippedSlot = (GetEquippedSlot)(this->VTable[160]);
        break;
    };

    return _GetEquippedSlot(this, slot);
};

auto Actor::getCarriedItem(void) -> ItemStack* {
    using GetCarriedItem = ItemStack* (__thiscall*)(Actor*);
    auto _GetCarriedItem = (GetCarriedItem)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetCarriedItem = (GetCarriedItem)(this->VTable[161]);
        break;
        case MC_VER::v1_18_1_20:
            _GetCarriedItem = (GetCarriedItem)(this->VTable[161]);
        break;
        case MC_VER::v1_18_0_02:
            _GetCarriedItem = (GetCarriedItem)(this->VTable[161]);
        break;
        case MC_VER::v1_17_41_1:
            _GetCarriedItem = (GetCarriedItem)(this->VTable[161]);
        break;
        case MC_VER::v1_17_40_6:
            _GetCarriedItem = (GetCarriedItem)(this->VTable[161]);
        break;
        case MC_VER::v1_17_34_2:
            _GetCarriedItem = (GetCarriedItem)(this->VTable[162]);
        break;
    };

    return _GetCarriedItem(this);
};

auto Actor::setCarriedItem(ItemStack* item) -> void {
    using SetCarriedItem = void (__thiscall*)(Actor*, ItemStack*);
    auto _SetCarriedItem = (SetCarriedItem)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _SetCarriedItem = (SetCarriedItem)(this->VTable[162]);
        break;
        case MC_VER::v1_18_1_20:
            _SetCarriedItem = (SetCarriedItem)(this->VTable[162]);
        break;
        case MC_VER::v1_18_0_02:
            _SetCarriedItem = (SetCarriedItem)(this->VTable[162]);
        break;
        case MC_VER::v1_17_41_1:
            _SetCarriedItem = (SetCarriedItem)(this->VTable[162]);
        break;
        case MC_VER::v1_17_40_6:
            _SetCarriedItem = (SetCarriedItem)(this->VTable[162]);
        break;
        case MC_VER::v1_17_34_2:
            _SetCarriedItem = (SetCarriedItem)(this->VTable[163]);
        break;
    };

    _SetCarriedItem(this, item);
};

auto Actor::setOffHandSlot(ItemStack* item) -> void {
    using SetOffHandSlot = void (__thiscall*)(Actor*, ItemStack*);
    auto _SetOffHandSlot = (SetOffHandSlot)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _SetOffHandSlot = (SetOffHandSlot)(this->VTable[163]);
        break;
        case MC_VER::v1_18_1_20:
            _SetOffHandSlot = (SetOffHandSlot)(this->VTable[163]);
        break;
        case MC_VER::v1_18_0_02:
            _SetOffHandSlot = (SetOffHandSlot)(this->VTable[163]);
        break;
        case MC_VER::v1_17_41_1:
            _SetOffHandSlot = (SetOffHandSlot)(this->VTable[163]);
        break;
        case MC_VER::v1_17_40_6:
            _SetOffHandSlot = (SetOffHandSlot)(this->VTable[163]);
        break;
        case MC_VER::v1_17_34_2:
            _SetOffHandSlot = (SetOffHandSlot)(this->VTable[164]);
        break;
    };

    _SetOffHandSlot(this, item);
};

auto Actor::getEquippedTotem(void) -> ItemStack* {
    using GetEquppedTotem = ItemStack* (__thiscall*)(Actor*);
    auto _GetEquppedTotem = (GetEquppedTotem)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetEquppedTotem = (GetEquppedTotem)(this->VTable[164]);
        break;
        case MC_VER::v1_18_1_20:
            _GetEquppedTotem = (GetEquppedTotem)(this->VTable[164]);
        break;
        case MC_VER::v1_18_0_02:
            _GetEquppedTotem = (GetEquppedTotem)(this->VTable[164]);
        break;
        case MC_VER::v1_17_41_1:
            _GetEquppedTotem = (GetEquppedTotem)(this->VTable[164]);
        break;
        case MC_VER::v1_17_40_6:
            _GetEquppedTotem = (GetEquppedTotem)(this->VTable[164]);
        break;
        case MC_VER::v1_17_34_2:
            _GetEquppedTotem = (GetEquppedTotem)(this->VTable[165]);
        break;
    };

    return _GetEquppedTotem(this);
};

auto Actor::consumeTotem(void) -> void {
    using ConsumeTotem = void (__thiscall*)(Actor*);
    auto _ConsumeTotem = (ConsumeTotem)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _ConsumeTotem = (ConsumeTotem)(this->VTable[165]);
        break;
        case MC_VER::v1_18_1_20:
            _ConsumeTotem = (ConsumeTotem)(this->VTable[165]);
        break;
        case MC_VER::v1_18_0_02:
            _ConsumeTotem = (ConsumeTotem)(this->VTable[165]);
        break;
        case MC_VER::v1_17_41_1:
            _ConsumeTotem = (ConsumeTotem)(this->VTable[165]);
        break;
        case MC_VER::v1_17_40_6:
            _ConsumeTotem = (ConsumeTotem)(this->VTable[165]);
        break;
        case MC_VER::v1_17_34_2:
            _ConsumeTotem = (ConsumeTotem)(this->VTable[166]);
        break;
    };

    _ConsumeTotem(this);
};

auto Actor::getEntityTypeId(void) -> uint8_t {
    using GetEntityTypeId = uint8_t (__thiscall*)(Actor*);
    auto _GetEntityTypeId = (GetEntityTypeId)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetEntityTypeId = (GetEntityTypeId)(this->VTable[170]);
        break;
        case MC_VER::v1_18_1_20:
            _GetEntityTypeId = (GetEntityTypeId)(this->VTable[170]);
        break;
        case MC_VER::v1_18_0_02:
            _GetEntityTypeId = (GetEntityTypeId)(this->VTable[170]);
        break;
        case MC_VER::v1_17_41_1:
            _GetEntityTypeId = (GetEntityTypeId)(this->VTable[170]);
        break;
        case MC_VER::v1_17_40_6:
            _GetEntityTypeId = (GetEntityTypeId)(this->VTable[170]);
        break;
        case MC_VER::v1_17_34_2:
            _GetEntityTypeId = (GetEntityTypeId)(this->VTable[171]);
        break;
    };

    return _GetEntityTypeId(this);
};

auto Actor::getSourceUniqueID(void) -> const ActorUniqueID & {
    using GetSourceUniqueID = ActorUniqueID & (__thiscall*)(Actor*);
    auto _GetSourceUniqueID = (GetSourceUniqueID)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetSourceUniqueID = (GetSourceUniqueID)(this->VTable[172]);
        break;
        case MC_VER::v1_18_1_20:
            _GetSourceUniqueID = (GetSourceUniqueID)(this->VTable[172]);
        break;
        case MC_VER::v1_18_0_02:
            _GetSourceUniqueID = (GetSourceUniqueID)(this->VTable[172]);
        break;
        case MC_VER::v1_17_41_1:
            _GetSourceUniqueID = (GetSourceUniqueID)(this->VTable[172]);
        break;
        case MC_VER::v1_17_40_6:
            _GetSourceUniqueID = (GetSourceUniqueID)(this->VTable[172]);
        break;
        case MC_VER::v1_17_34_2:
            _GetSourceUniqueID = (GetSourceUniqueID)(this->VTable[173]);
        break;
    };

    return _GetSourceUniqueID(this);
};

auto Actor::thawFreezeEffect(void) -> void {
    using ThawFreezeEffect = void (__thiscall*)(Actor*);
    auto _ThawFreezeEffect = (ThawFreezeEffect)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _ThawFreezeEffect = (ThawFreezeEffect)(this->VTable[173]);
        break;
        case MC_VER::v1_18_1_20:
            _ThawFreezeEffect = (ThawFreezeEffect)(this->VTable[173]);
        break;
        case MC_VER::v1_18_0_02:
            _ThawFreezeEffect = (ThawFreezeEffect)(this->VTable[173]);
        break;
        case MC_VER::v1_17_41_1:
            _ThawFreezeEffect = (ThawFreezeEffect)(this->VTable[175]);
        break;
        case MC_VER::v1_17_40_6:
            _ThawFreezeEffect = (ThawFreezeEffect)(this->VTable[175]);
        break;
        case MC_VER::v1_17_34_2:
            _ThawFreezeEffect = (ThawFreezeEffect)(this->VTable[176]);
        break;
    };

    _ThawFreezeEffect(this);
};

auto Actor::isWearingLeatherArmor(void) -> bool {
    using IsWearingLeatherArmor = bool (__thiscall*)(Actor*);
    auto _IsWearingLeatherArmor = (IsWearingLeatherArmor)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _IsWearingLeatherArmor = (IsWearingLeatherArmor)(this->VTable[175]);
        break;
        case MC_VER::v1_18_1_20:
            _IsWearingLeatherArmor = (IsWearingLeatherArmor)(this->VTable[175]);
        break;
        case MC_VER::v1_18_0_02:
            _IsWearingLeatherArmor = (IsWearingLeatherArmor)(this->VTable[175]);
        break;
        case MC_VER::v1_17_41_1:
            _IsWearingLeatherArmor = (IsWearingLeatherArmor)(this->VTable[177]);
        break;
        case MC_VER::v1_17_40_6:
            _IsWearingLeatherArmor = (IsWearingLeatherArmor)(this->VTable[177]);
        break;
        case MC_VER::v1_17_34_2:
            _IsWearingLeatherArmor = (IsWearingLeatherArmor)(this->VTable[178]);
        break;
    };

    return _IsWearingLeatherArmor(this);
};

auto Actor::getLiquidAABB(MaterialType materialType) -> AABB<float>* {
    using GetLiquidAABB = AABB<float>* (__thiscall*)(Actor*, MaterialType);
    auto _GetLiquidAABB = (GetLiquidAABB)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetLiquidAABB = (GetLiquidAABB)(this->VTable[176]);
        break;
        case MC_VER::v1_18_1_20:
            _GetLiquidAABB = (GetLiquidAABB)(this->VTable[176]);
        break;
        case MC_VER::v1_18_0_02:
            _GetLiquidAABB = (GetLiquidAABB)(this->VTable[176]);
        break;
        case MC_VER::v1_17_41_1:
            _GetLiquidAABB = (GetLiquidAABB)(this->VTable[178]);
        break;
        case MC_VER::v1_17_40_6:
            _GetLiquidAABB = (GetLiquidAABB)(this->VTable[178]);
        break;
        case MC_VER::v1_17_34_2:
            _GetLiquidAABB = (GetLiquidAABB)(this->VTable[179]);
        break;
    };

    return _GetLiquidAABB(this, materialType);
};

auto Actor::handleInsidePortal(Vec3<int>* blockPos) -> void {
    using HandleInsidePortal = void (__thiscall*)(Actor*, Vec3<int>*);
    auto _HandleInsidePortal = (HandleInsidePortal)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _HandleInsidePortal = (HandleInsidePortal)(this->VTable[177]);
        break;
        case MC_VER::v1_18_1_20:
            _HandleInsidePortal = (HandleInsidePortal)(this->VTable[177]);
        break;
        case MC_VER::v1_18_0_02:
            _HandleInsidePortal = (HandleInsidePortal)(this->VTable[177]);
        break;
        case MC_VER::v1_17_41_1:
            _HandleInsidePortal = (HandleInsidePortal)(this->VTable[179]);
        break;
        case MC_VER::v1_17_40_6:
            _HandleInsidePortal = (HandleInsidePortal)(this->VTable[179]);
        break;
        case MC_VER::v1_17_34_2:
            _HandleInsidePortal = (HandleInsidePortal)(this->VTable[180]);
        break;
    };

    _HandleInsidePortal(this, blockPos);
};

auto Actor::getPortalCooldown(void) -> __int64 {
    using GetPortalCooldown = __int64 (__thiscall*)(Actor*);
    auto _GetPortalCooldown = (GetPortalCooldown)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetPortalCooldown = (GetPortalCooldown)(this->VTable[178]);
        break;
        case MC_VER::v1_18_1_20:
            _GetPortalCooldown = (GetPortalCooldown)(this->VTable[178]);
        break;
        case MC_VER::v1_18_0_02:
            _GetPortalCooldown = (GetPortalCooldown)(this->VTable[178]);
        break;
        case MC_VER::v1_17_41_1:
            _GetPortalCooldown = (GetPortalCooldown)(this->VTable[180]);
        break;
        case MC_VER::v1_17_40_6:
            _GetPortalCooldown = (GetPortalCooldown)(this->VTable[180]);
        break;
        case MC_VER::v1_17_34_2:
            _GetPortalCooldown = (GetPortalCooldown)(this->VTable[181]);
        break;
    };

    return _GetPortalCooldown(this);
};

auto Actor::getDimensionId(void) -> __int64 {
    using GetDimensionId = __int64 (__thiscall*)(Actor*);
    auto _GetDimensionId = (GetDimensionId)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetDimensionId = (GetDimensionId)(this->VTable[180]);
        break;
        case MC_VER::v1_18_1_20:
            _GetDimensionId = (GetDimensionId)(this->VTable[180]);
        break;
        case MC_VER::v1_18_0_02:
            _GetDimensionId = (GetDimensionId)(this->VTable[180]);
        break;
        case MC_VER::v1_17_41_1:
            _GetDimensionId = (GetDimensionId)(this->VTable[182]);
        break;
        case MC_VER::v1_17_40_6:
            _GetDimensionId = (GetDimensionId)(this->VTable[182]);
        break;
        case MC_VER::v1_17_34_2:
            _GetDimensionId = (GetDimensionId)(this->VTable[183]);
        break;
    };

    return _GetDimensionId(this);
};

auto Actor::changeDimension(__int64 dimension) -> void {
    using ChangeDimension = void (__thiscall*)(Actor*, __int64);
    auto _ChangeDimension = (ChangeDimension)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _ChangeDimension = (ChangeDimension)(this->VTable[183]);
        break;
        case MC_VER::v1_18_1_20:
            _ChangeDimension = (ChangeDimension)(this->VTable[183]);
        break;
        case MC_VER::v1_18_0_02:
            _ChangeDimension = (ChangeDimension)(this->VTable[183]);
        break;
        case MC_VER::v1_17_41_1:
            _ChangeDimension = (ChangeDimension)(this->VTable[185]);
        break;
        case MC_VER::v1_17_40_6:
            _ChangeDimension = (ChangeDimension)(this->VTable[185]);
        break;
        case MC_VER::v1_17_34_2:
            _ChangeDimension = (ChangeDimension)(this->VTable[186]);
        break;
    };

    _ChangeDimension(this, dimension);
};

auto Actor::checkFallDamage(float paramA, bool paramB) -> void {
    using CheckFallDamage = void (__thiscall*)(Actor*, float, bool);
    auto _CheckFallDamage = (CheckFallDamage)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _CheckFallDamage = (CheckFallDamage)(this->VTable[185]);
        break;
        case MC_VER::v1_18_1_20:
            _CheckFallDamage = (CheckFallDamage)(this->VTable[185]);
        break;
        case MC_VER::v1_18_0_02:
            _CheckFallDamage = (CheckFallDamage)(this->VTable[185]);
        break;
        case MC_VER::v1_17_41_1:
            _CheckFallDamage = (CheckFallDamage)(this->VTable[187]);
        break;
        case MC_VER::v1_17_40_6:
            _CheckFallDamage = (CheckFallDamage)(this->VTable[187]);
        break;
        case MC_VER::v1_17_34_2:
            _CheckFallDamage = (CheckFallDamage)(this->VTable[188]);
        break;
    };

    _CheckFallDamage(this, paramA, paramB);
};

auto Actor::causeFallDamage(float paramA, float paramB, ActorDamageSource & actorDamageSource) -> void {
    using CauseFallDamage = void (__thiscall*)(Actor*, float, float, ActorDamageSource&);
    auto _CauseFallDamage = (CauseFallDamage)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _CauseFallDamage = (CauseFallDamage)(this->VTable[186]);
        break;
        case MC_VER::v1_18_1_20:
            _CauseFallDamage = (CauseFallDamage)(this->VTable[186]);
        break;
        case MC_VER::v1_18_0_02:
            _CauseFallDamage = (CauseFallDamage)(this->VTable[186]);
        break;
        case MC_VER::v1_17_41_1:
            _CauseFallDamage = (CauseFallDamage)(this->VTable[188]);
        break;
        case MC_VER::v1_17_40_6:
            _CauseFallDamage = (CauseFallDamage)(this->VTable[188]);
        break;
        case MC_VER::v1_17_34_2:
            _CauseFallDamage = (CauseFallDamage)(this->VTable[189]);
        break;
    };

    return _CauseFallDamage(this, paramA, paramB, actorDamageSource);
};

auto Actor::handleFallDistanceOnServer(float paramA, float paramB, bool paramC) -> void {
    using HandleFallDistanceOnServer = void (__thiscall*)(Actor*, float, float, bool);
    auto _HandleFallDistanceOnServer = (HandleFallDistanceOnServer)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _HandleFallDistanceOnServer = (HandleFallDistanceOnServer)(this->VTable[187]);
        break;
        case MC_VER::v1_18_1_20:
            _HandleFallDistanceOnServer = (HandleFallDistanceOnServer)(this->VTable[187]);
        break;
        case MC_VER::v1_18_0_02:
            _HandleFallDistanceOnServer = (HandleFallDistanceOnServer)(this->VTable[187]);
        break;
        case MC_VER::v1_17_41_1:
            _HandleFallDistanceOnServer = (HandleFallDistanceOnServer)(this->VTable[189]);
        break;
        case MC_VER::v1_17_40_6:
            _HandleFallDistanceOnServer = (HandleFallDistanceOnServer)(this->VTable[189]);
        break;
        case MC_VER::v1_17_34_2:
            _HandleFallDistanceOnServer = (HandleFallDistanceOnServer)(this->VTable[190]);
        break;
    };

    _HandleFallDistanceOnServer(this, paramA, paramB, paramC);
};

auto Actor::playSynchronizedSound(LevelSoundEvent levelSoundEvent, Vec3<float>* position, int paramC, bool paramD) -> void {
    using PlaySynchronizedSound = void (__thiscall*)(Actor*, LevelSoundEvent, Vec3<float>*, int, bool);
    auto _PlaySynchronizedSound = (PlaySynchronizedSound)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _PlaySynchronizedSound = (PlaySynchronizedSound)(this->VTable[188]);
        break;
        case MC_VER::v1_18_1_20:
            _PlaySynchronizedSound = (PlaySynchronizedSound)(this->VTable[188]);
        break;
        case MC_VER::v1_18_0_02:
            _PlaySynchronizedSound = (PlaySynchronizedSound)(this->VTable[188]);
        break;
        case MC_VER::v1_17_41_1:
            _PlaySynchronizedSound = (PlaySynchronizedSound)(this->VTable[190]);
        break;
        case MC_VER::v1_17_40_6:
            _PlaySynchronizedSound = (PlaySynchronizedSound)(this->VTable[190]);
        break;
        case MC_VER::v1_17_34_2:
            _PlaySynchronizedSound = (PlaySynchronizedSound)(this->VTable[191]);
        break;
    };

    return _PlaySynchronizedSound(this, levelSoundEvent, position, paramC, paramD);
};

auto Actor::playSynchronizedSound(LevelSoundEvent levelSoundEvent, Vec3<float>* position, Block* block, bool paramD) -> void {
    using PlaySynchronizedSound = void (__thiscall*)(Actor*, LevelSoundEvent, Vec3<float>*, Block*, bool);
    auto _PlaySynchronizedSound = (PlaySynchronizedSound)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _PlaySynchronizedSound = (PlaySynchronizedSound)(this->VTable[189]);
        break;
        case MC_VER::v1_18_1_20:
            _PlaySynchronizedSound = (PlaySynchronizedSound)(this->VTable[189]);
        break;
        case MC_VER::v1_18_0_02:
            _PlaySynchronizedSound = (PlaySynchronizedSound)(this->VTable[189]);
        break;
        case MC_VER::v1_17_41_1:
            _PlaySynchronizedSound = (PlaySynchronizedSound)(this->VTable[191]);
        break;
        case MC_VER::v1_17_40_6:
            _PlaySynchronizedSound = (PlaySynchronizedSound)(this->VTable[191]);
        break;
        case MC_VER::v1_17_34_2:
            _PlaySynchronizedSound = (PlaySynchronizedSound)(this->VTable[192]);
        break;
    };

    _PlaySynchronizedSound(this, levelSoundEvent, position, block, paramD);
};

auto Actor::canAddPassenger(Actor* entity) -> bool {
    using CanAddPassenger = bool (__thiscall*)(Actor*, Actor*);
    auto _CanAddPassenger = (CanAddPassenger)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _CanAddPassenger = (CanAddPassenger)(this->VTable[192]);
        break;
        case MC_VER::v1_18_1_20:
            _CanAddPassenger = (CanAddPassenger)(this->VTable[192]);
        break;
        case MC_VER::v1_18_0_02:
            _CanAddPassenger = (CanAddPassenger)(this->VTable[192]);
        break;
        case MC_VER::v1_17_41_1:
            _CanAddPassenger = (CanAddPassenger)(this->VTable[193]);
        break;
        case MC_VER::v1_17_40_6:
            _CanAddPassenger = (CanAddPassenger)(this->VTable[193]);
        break;
        case MC_VER::v1_17_34_2:
            _CanAddPassenger = (CanAddPassenger)(this->VTable[194]);
        break;
    };

    return _CanAddPassenger(this, entity);
};

auto Actor::tickLeash(void) -> void {
    using TickLeash = void(__thiscall*)(Actor*);
    auto _TickLeash = (TickLeash)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _TickLeash = (TickLeash)(this->VTable[197]);
        break;
        case MC_VER::v1_18_1_20:
            _TickLeash = (TickLeash)(this->VTable[197]);
        break;
        case MC_VER::v1_18_0_02:
            _TickLeash = (TickLeash)(this->VTable[197]);
        break;
        case MC_VER::v1_17_41_1:
            _TickLeash = (TickLeash)(this->VTable[198]);
        break;
        case MC_VER::v1_17_40_6:
            _TickLeash = (TickLeash)(this->VTable[198]);
        break;
        case MC_VER::v1_17_34_2:
            _TickLeash = (TickLeash)(this->VTable[199]);
        break;
    };

    _TickLeash(this);
};

auto Actor::sendMotionPacketIfNeeded(void) -> void {
    using SendMotionPacketIfNeeded = void (__thiscall*)(Actor*);
    auto _SendMotionPacketIfNeeded = (SendMotionPacketIfNeeded)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _SendMotionPacketIfNeeded = (SendMotionPacketIfNeeded)(this->VTable[198]);
        break;
        case MC_VER::v1_18_1_20:
            _SendMotionPacketIfNeeded = (SendMotionPacketIfNeeded)(this->VTable[198]);
        break;
        case MC_VER::v1_18_0_02:
            _SendMotionPacketIfNeeded = (SendMotionPacketIfNeeded)(this->VTable[198]);
        break;
        case MC_VER::v1_17_41_1:
            _SendMotionPacketIfNeeded = (SendMotionPacketIfNeeded)(this->VTable[199]);
        break;
        case MC_VER::v1_17_40_6:
            _SendMotionPacketIfNeeded = (SendMotionPacketIfNeeded)(this->VTable[199]);
        break;
        case MC_VER::v1_17_34_2:
            _SendMotionPacketIfNeeded = (SendMotionPacketIfNeeded)(this->VTable[200]);
        break;
    };

    _SendMotionPacketIfNeeded(this);
};

auto Actor::stopRiding(bool paramA, bool paramB, bool paramC) -> void {
    using StopRiding = void (__thiscall*)(Actor*, bool, bool, bool);
    auto _StopRiding = (StopRiding)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _StopRiding = (StopRiding)(this->VTable[200]);
        break;
        case MC_VER::v1_18_1_20:
            _StopRiding = (StopRiding)(this->VTable[200]);
        break;
        case MC_VER::v1_18_0_02:
            _StopRiding = (StopRiding)(this->VTable[200]);
        break;
        case MC_VER::v1_17_41_1:
            _StopRiding = (StopRiding)(this->VTable[201]);
        break;
        case MC_VER::v1_17_40_6:
            _StopRiding = (StopRiding)(this->VTable[201]);
        break;
        case MC_VER::v1_17_34_2:
            _StopRiding = (StopRiding)(this->VTable[202]);
        break;
    };

    _StopRiding(this, paramA, paramB, paramC);
};

auto Actor::startSwimming(void) -> void {
    using StartSwimming = void (__thiscall*)(Actor*);
    auto _StartSwimming = (StartSwimming)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _StartSwimming = (StartSwimming)(this->VTable[201]);
        break;
        case MC_VER::v1_18_1_20:
            _StartSwimming = (StartSwimming)(this->VTable[201]);
        break;
        case MC_VER::v1_18_0_02:
            _StartSwimming = (StartSwimming)(this->VTable[201]);
        break;
        case MC_VER::v1_17_41_1:
            _StartSwimming = (StartSwimming)(this->VTable[202]);
        break;
        case MC_VER::v1_17_40_6:
            _StartSwimming = (StartSwimming)(this->VTable[202]);
        break;
        case MC_VER::v1_17_34_2:
            _StartSwimming = (StartSwimming)(this->VTable[203]);
        break;
    };

    _StartSwimming(this);
};

auto Actor::stopSwimming(void) -> void {
    using StopSwimming = void (__thiscall*)(Actor*);
    auto _StopSwimming = (StopSwimming)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _StopSwimming = (StopSwimming)(this->VTable[202]);
        break;
        case MC_VER::v1_18_1_20:
            _StopSwimming = (StopSwimming)(this->VTable[202]);
        break;
        case MC_VER::v1_18_0_02:
            _StopSwimming = (StopSwimming)(this->VTable[202]);
        break;
        case MC_VER::v1_17_41_1:
            _StopSwimming = (StopSwimming)(this->VTable[203]);
        break;
        case MC_VER::v1_17_40_6:
            _StopSwimming = (StopSwimming)(this->VTable[203]);
        break;
        case MC_VER::v1_17_34_2:
            _StopSwimming = (StopSwimming)(this->VTable[204]);
        break;
    };

    _StopSwimming(this);
};

auto Actor::getCommandPermissionLevel(void) -> CommandPermissionLevel {
    using GetCommandPermissionLevel = CommandPermissionLevel (__thiscall*)(Actor*);
    auto _GetCommandPermissionLevel = (GetCommandPermissionLevel)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetCommandPermissionLevel = (GetCommandPermissionLevel)(this->VTable[204]);
        break;
        case MC_VER::v1_18_1_20:
            _GetCommandPermissionLevel = (GetCommandPermissionLevel)(this->VTable[204]);
        break;
        case MC_VER::v1_18_0_02:
            _GetCommandPermissionLevel = (GetCommandPermissionLevel)(this->VTable[204]);
        break;
        case MC_VER::v1_17_41_1:
            _GetCommandPermissionLevel = (GetCommandPermissionLevel)(this->VTable[205]);
        break;
        case MC_VER::v1_17_40_6:
            _GetCommandPermissionLevel = (GetCommandPermissionLevel)(this->VTable[205]);
        break;
        case MC_VER::v1_17_34_2:
            _GetCommandPermissionLevel = (GetCommandPermissionLevel)(this->VTable[207]);
        break;
    };

    return _GetCommandPermissionLevel(this);
};

auto Actor::isClientSide(void) -> bool {
    using IsClientSide = bool (__thiscall*)(Actor*);
    auto _IsClientSide = (IsClientSide)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _IsClientSide = (IsClientSide)(this->VTable[205]);
        break;
        case MC_VER::v1_18_1_20:
            _IsClientSide = (IsClientSide)(this->VTable[205]);
        break;
        case MC_VER::v1_18_0_02:
            _IsClientSide = (IsClientSide)(this->VTable[205]);
        break;
        case MC_VER::v1_17_41_1:
            _IsClientSide = (IsClientSide)(this->VTable[206]);
        break;
        case MC_VER::v1_17_40_6:
            _IsClientSide = (IsClientSide)(this->VTable[206]);
        break;
        case MC_VER::v1_17_34_2:
            _IsClientSide = (IsClientSide)(this->VTable[207]);
        break;
    };

    return _IsClientSide(this);
};

auto Actor::getMutableAttribute(Attribute* attribute) -> AttributeInstance* {
    using GetMutableAttribute = AttributeInstance* (__thiscall*)(Actor*, Attribute*);
    auto _GetMutableAttribute = (GetMutableAttribute)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetMutableAttribute = (GetMutableAttribute)(this->VTable[206]);
        break;
        case MC_VER::v1_18_1_20:
            _GetMutableAttribute = (GetMutableAttribute)(this->VTable[206]);
        break;
        case MC_VER::v1_18_0_02:
            _GetMutableAttribute = (GetMutableAttribute)(this->VTable[206]);
        break;
        case MC_VER::v1_17_41_1:
            _GetMutableAttribute = (GetMutableAttribute)(this->VTable[207]);
        break;
        case MC_VER::v1_17_40_6:
            _GetMutableAttribute = (GetMutableAttribute)(this->VTable[207]);
        break;
        case MC_VER::v1_17_34_2:
            _GetMutableAttribute = (GetMutableAttribute)(this->VTable[208]);
        break;
    };

    return _GetMutableAttribute(this, attribute);
};

auto Actor::getAttribute(AttributeInstance* attributeInstance) -> Attribute* {
    using GetAttribute = Attribute* (__thiscall*)(Actor*, AttributeInstance*);
    auto _GetAttribute = (GetAttribute)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetAttribute = (GetAttribute)(this->VTable[207]);
        break;
        case MC_VER::v1_18_1_20:
            _GetAttribute = (GetAttribute)(this->VTable[207]);
        break;
        case MC_VER::v1_18_0_02:
            _GetAttribute = (GetAttribute)(this->VTable[207]);
        break;
        case MC_VER::v1_17_41_1:
            _GetAttribute = (GetAttribute)(this->VTable[208]);
        break;
        case MC_VER::v1_17_40_6:
            _GetAttribute = (GetAttribute)(this->VTable[208]);
        break;
        case MC_VER::v1_17_34_2:
            _GetAttribute = (GetAttribute)(this->VTable[209]);
        break;
    };

    return _GetAttribute(this, attributeInstance);
};

auto Actor::heal(int health) -> void {
    using Heal = void (__thiscall*)(Actor*, int);
    auto _Heal = (Heal)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _Heal = (Heal)(this->VTable[209]);
        break;
        case MC_VER::v1_18_1_20:
            _Heal = (Heal)(this->VTable[209]);
        break;
        case MC_VER::v1_18_0_02:
            _Heal = (Heal)(this->VTable[209]);
        break;
        case MC_VER::v1_17_41_1:
            _Heal = (Heal)(this->VTable[210]);
        break;
        case MC_VER::v1_17_40_6:
            _Heal = (Heal)(this->VTable[210]);
        break;
        case MC_VER::v1_17_34_2:
            _Heal = (Heal)(this->VTable[211]);
        break;
    };

    _Heal(this, health);
};

auto Actor::isInvertedHealAndHarm(void) -> bool {
    using IsInvertedHealAndHarm = bool (__thiscall*)(Actor*);
    auto _IsInvertedHealAndHarm = (IsInvertedHealAndHarm)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _IsInvertedHealAndHarm = (IsInvertedHealAndHarm)(this->VTable[210]);
        break;
        case MC_VER::v1_18_1_20:
            _IsInvertedHealAndHarm = (IsInvertedHealAndHarm)(this->VTable[210]);
        break;
        case MC_VER::v1_18_0_02:
            _IsInvertedHealAndHarm = (IsInvertedHealAndHarm)(this->VTable[210]);
        break;
        case MC_VER::v1_17_41_1:
            _IsInvertedHealAndHarm = (IsInvertedHealAndHarm)(this->VTable[211]);
        break;
        case MC_VER::v1_17_40_6:
            _IsInvertedHealAndHarm = (IsInvertedHealAndHarm)(this->VTable[211]);
        break;
        case MC_VER::v1_17_34_2:
            _IsInvertedHealAndHarm = (IsInvertedHealAndHarm)(this->VTable[212]);
        break;
    };

    return _IsInvertedHealAndHarm(this);
};

auto Actor::canBeAffected(MobEffectInstance* mobEffectInstance) -> bool {
    using CanBeAffected = bool (__thiscall*)(Actor*, MobEffectInstance*);
    auto _CanBeAffected = (CanBeAffected)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _CanBeAffected = (CanBeAffected)(this->VTable[211]);
        break;
        case MC_VER::v1_18_1_20:
            _CanBeAffected = (CanBeAffected)(this->VTable[211]);
        break;
        case MC_VER::v1_18_0_02:
            _CanBeAffected = (CanBeAffected)(this->VTable[211]);
        break;
        case MC_VER::v1_17_41_1:
            _CanBeAffected = (CanBeAffected)(this->VTable[212]);
        break;
        case MC_VER::v1_17_40_6:
            _CanBeAffected = (CanBeAffected)(this->VTable[212]);
        break;
        case MC_VER::v1_17_34_2:
            _CanBeAffected = (CanBeAffected)(this->VTable[213]);
        break;
    };
    
    return _CanBeAffected(this, mobEffectInstance);
};

auto Actor::canBeAffected(int paramA) -> bool {
    using CanBeAffected = bool (__thiscall*)(Actor*, int);
    auto _CanBeAffected = (CanBeAffected)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _CanBeAffected = (CanBeAffected)(this->VTable[212]);
        break;
        case MC_VER::v1_18_1_20:
            _CanBeAffected = (CanBeAffected)(this->VTable[212]);
        break;
        case MC_VER::v1_18_0_02:
            _CanBeAffected = (CanBeAffected)(this->VTable[212]);
        break;
        case MC_VER::v1_17_41_1:
            _CanBeAffected = (CanBeAffected)(this->VTable[213]);
        break;
        case MC_VER::v1_17_40_6:
            _CanBeAffected = (CanBeAffected)(this->VTable[213]);
        break;
        case MC_VER::v1_17_34_2:
            _CanBeAffected = (CanBeAffected)(this->VTable[214]);
        break;
    };
    
    return _CanBeAffected(this, paramA);
};

auto Actor::canBeAffectedByArrow(MobEffectInstance* mobEffectInstance) -> bool {
    using CanBeAffectedByArrow = bool (__thiscall*)(Actor*, MobEffectInstance*);
    auto _CanBeAffectedByArrow = (CanBeAffectedByArrow)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _CanBeAffectedByArrow = (CanBeAffectedByArrow)(this->VTable[213]);
        break;
        case MC_VER::v1_18_1_20:
            _CanBeAffectedByArrow = (CanBeAffectedByArrow)(this->VTable[213]);
        break;
        case MC_VER::v1_18_0_02:
            _CanBeAffectedByArrow = (CanBeAffectedByArrow)(this->VTable[213]);
        break;
        case MC_VER::v1_17_41_1:
            _CanBeAffectedByArrow = (CanBeAffectedByArrow)(this->VTable[214]);
        break;
        case MC_VER::v1_17_40_6:
            _CanBeAffectedByArrow = (CanBeAffectedByArrow)(this->VTable[214]);
        break;
        case MC_VER::v1_17_34_2:
            _CanBeAffectedByArrow = (CanBeAffectedByArrow)(this->VTable[215]);
        break;
    };

    return _CanBeAffectedByArrow(this, mobEffectInstance);
};

auto Actor::getAnimationComponent(void) -> AnimationComponent* {
    using GetAnimationComponent = AnimationComponent* (__thiscall*)(Actor*);
    auto _GetAnimationComponent = (GetAnimationComponent)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetAnimationComponent = (GetAnimationComponent)(this->VTable[217]);
        break;
        case MC_VER::v1_18_1_20:
            _GetAnimationComponent = (GetAnimationComponent)(this->VTable[217]);
        break;
        case MC_VER::v1_18_0_02:
            _GetAnimationComponent = (GetAnimationComponent)(this->VTable[217]);
        break;
        case MC_VER::v1_17_41_1:
            _GetAnimationComponent = (GetAnimationComponent)(this->VTable[218]);
        break;
        case MC_VER::v1_17_40_6:
            _GetAnimationComponent = (GetAnimationComponent)(this->VTable[218]);
        break;
        case MC_VER::v1_17_34_2:
            _GetAnimationComponent = (GetAnimationComponent)(this->VTable[219]);
        break;
    };

    return _GetAnimationComponent(this);
};

auto Actor::openContainerComponent(Player* player) -> void {
    using OpenContainerComponent = void (__thiscall*)(Actor*, Player*);
    auto _OpenContainerComponent = (OpenContainerComponent)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _OpenContainerComponent = (OpenContainerComponent)(this->VTable[218]);
        break;
        case MC_VER::v1_18_1_20:
            _OpenContainerComponent = (OpenContainerComponent)(this->VTable[218]);
        break;
        case MC_VER::v1_18_0_02:
            _OpenContainerComponent = (OpenContainerComponent)(this->VTable[218]);
        break;
        case MC_VER::v1_17_41_1:
            _OpenContainerComponent = (OpenContainerComponent)(this->VTable[219]);
        break;
        case MC_VER::v1_17_40_6:
            _OpenContainerComponent = (OpenContainerComponent)(this->VTable[219]);
        break;
        case MC_VER::v1_17_34_2:
            _OpenContainerComponent = (OpenContainerComponent)(this->VTable[220]);
        break;
    };

    _OpenContainerComponent(this, player);
};

auto Actor::swing(void) -> void {
    using Swing = void (__thiscall*)(Actor*);
    auto _Swing = (Swing)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _Swing = (Swing)(this->VTable[219]);
        break;
        case MC_VER::v1_18_1_20:
            _Swing = (Swing)(this->VTable[219]);
        break;
        case MC_VER::v1_18_0_02:
            _Swing = (Swing)(this->VTable[219]);
        break;
        case MC_VER::v1_17_41_1:
            _Swing = (Swing)(this->VTable[220]);
        break;
        case MC_VER::v1_17_40_6:
            _Swing = (Swing)(this->VTable[220]);
        break;
        case MC_VER::v1_17_34_2:
            _Swing = (Swing)(this->VTable[221]);
        break;
    };

    _Swing(this);
};

auto Actor::useItem(ItemStackBase* itemStackBase, ItemUseMethod itemUseMethod, bool paramC) -> void {
    using UseItem = void (__thiscall*)(Actor*, ItemStackBase*, ItemUseMethod, bool);
    auto _UseItem = (UseItem)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _UseItem = (UseItem)(this->VTable[220]);
        break;
        case MC_VER::v1_18_1_20:
            _UseItem = (UseItem)(this->VTable[220]);
        break;
        case MC_VER::v1_18_0_02:
            _UseItem = (UseItem)(this->VTable[220]);
        break;
        case MC_VER::v1_17_41_1:
            _UseItem = (UseItem)(this->VTable[221]);
        break;
        case MC_VER::v1_17_40_6:
            _UseItem = (UseItem)(this->VTable[221]);
        break;
        case MC_VER::v1_17_34_2:
            _UseItem = (UseItem)(this->VTable[222]);
        break;
    };

    _UseItem(this, itemStackBase, itemUseMethod, paramC);
};

auto Actor::getMapDecorationRotation(void) -> float {
    using GetMapDecorationRotation = float (__thiscall*)(Actor*);
    auto _GetMapDecorationRotation = (GetMapDecorationRotation)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetMapDecorationRotation = (GetMapDecorationRotation)(this->VTable[224]);
        break;
        case MC_VER::v1_18_1_20:
            _GetMapDecorationRotation = (GetMapDecorationRotation)(this->VTable[224]);
        break;
        case MC_VER::v1_18_0_02:
            _GetMapDecorationRotation = (GetMapDecorationRotation)(this->VTable[224]);
        break;
        case MC_VER::v1_17_41_1:
            _GetMapDecorationRotation = (GetMapDecorationRotation)(this->VTable[225]);
        break;
        case MC_VER::v1_17_40_6:
            _GetMapDecorationRotation = (GetMapDecorationRotation)(this->VTable[225]);
        break;
        case MC_VER::v1_17_34_2:
            _GetMapDecorationRotation = (GetMapDecorationRotation)(this->VTable[226]);
        break;
    };

    return _GetMapDecorationRotation(this);
};

auto Actor::getPassengerYRotation(Actor* entity) -> float {
    using GetPassengerYRotation = float (__thiscall*)(Actor*, Actor*);
    auto _GetPassengerYRotation = (GetPassengerYRotation)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetPassengerYRotation = (GetPassengerYRotation)(this->VTable[225]);
        break;
        case MC_VER::v1_18_1_20:
            _GetPassengerYRotation = (GetPassengerYRotation)(this->VTable[225]);
        break;
        case MC_VER::v1_18_0_02:
            _GetPassengerYRotation = (GetPassengerYRotation)(this->VTable[225]);
        break;
        case MC_VER::v1_17_41_1:
            _GetPassengerYRotation = (GetPassengerYRotation)(this->VTable[226]);
        break;
        case MC_VER::v1_17_40_6:
            _GetPassengerYRotation = (GetPassengerYRotation)(this->VTable[226]);
        break;
        case MC_VER::v1_17_34_2:
            _GetPassengerYRotation = (GetPassengerYRotation)(this->VTable[227]);
        break;
    };

    return _GetPassengerYRotation(this, entity);
};

auto Actor::getYHeadRot(void) -> float {
    using GetYHeadRot = float (__thiscall*)(Actor*);
    auto _GetYHeadRot = (GetYHeadRot)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetYHeadRot = (GetYHeadRot)(this->VTable[226]);
        break;
        case MC_VER::v1_18_1_20:
            _GetYHeadRot = (GetYHeadRot)(this->VTable[226]);
        break;
        case MC_VER::v1_18_0_02:
            _GetYHeadRot = (GetYHeadRot)(this->VTable[226]);
        break;
        case MC_VER::v1_17_41_1:
            _GetYHeadRot = (GetYHeadRot)(this->VTable[227]);
        break;
        case MC_VER::v1_17_40_6:
            _GetYHeadRot = (GetYHeadRot)(this->VTable[227]);
        break;
        case MC_VER::v1_17_34_2:
            _GetYHeadRot = (GetYHeadRot)(this->VTable[228]);
        break;
    };

    return _GetYHeadRot(this);
};

auto Actor::isWorldBuilder(void) -> bool {
    using IsWorldBuilder = bool (__thiscall*)(Actor*);
    auto _IsWorldBuilder = (IsWorldBuilder)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _IsWorldBuilder = (IsWorldBuilder)(this->VTable[227]);
        break;
        case MC_VER::v1_18_1_20:
            _IsWorldBuilder = (IsWorldBuilder)(this->VTable[227]);
        break;
        case MC_VER::v1_18_0_02:
            _IsWorldBuilder = (IsWorldBuilder)(this->VTable[227]);
        break;
        case MC_VER::v1_17_41_1:
            _IsWorldBuilder = (IsWorldBuilder)(this->VTable[228]);
        break;
        case MC_VER::v1_17_40_6:
            _IsWorldBuilder = (IsWorldBuilder)(this->VTable[228]);
        break;
        case MC_VER::v1_17_34_2:
            _IsWorldBuilder = (IsWorldBuilder)(this->VTable[229]);
        break;
    };

    return _IsWorldBuilder(this);
};

auto Actor::isInCreativeMode(void) -> bool {
    using IsInCreative = bool (__thiscall*)(Actor*);
    auto _IsInCreative = (IsInCreative)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _IsInCreative = (IsInCreative)(this->VTable[228]);
        break;
        case MC_VER::v1_18_1_20:
            _IsInCreative = (IsInCreative)(this->VTable[228]);
        break;
        case MC_VER::v1_18_0_02:
            _IsInCreative = (IsInCreative)(this->VTable[228]);
        break;
        case MC_VER::v1_17_41_1:
            _IsInCreative = (IsInCreative)(this->VTable[229]);
        break;
        case MC_VER::v1_17_40_6:
            _IsInCreative = (IsInCreative)(this->VTable[229]);
        break;
        case MC_VER::v1_17_34_2:
            _IsInCreative = (IsInCreative)(this->VTable[230]);
        break;
    };

    return _IsInCreative(this);
};

auto Actor::isAdventure(void) -> bool {
    using IsAdventure = bool (__thiscall*)(Actor*);
    auto _IsAdventure = (IsAdventure)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _IsAdventure = (IsAdventure)(this->VTable[229]);
        break;
        case MC_VER::v1_18_1_20:
            _IsAdventure = (IsAdventure)(this->VTable[229]);
        break;
        case MC_VER::v1_18_0_02:
            _IsAdventure = (IsAdventure)(this->VTable[229]);
        break;
        case MC_VER::v1_17_41_1:
            _IsAdventure = (IsAdventure)(this->VTable[230]);
        break;
        case MC_VER::v1_17_40_6:
            _IsAdventure = (IsAdventure)(this->VTable[230]);
        break;
        case MC_VER::v1_17_34_2:
            _IsAdventure = (IsAdventure)(this->VTable[231]);
        break;
    };

    return _IsAdventure(this);
};

auto Actor::addItem(ItemStack* itemStack) -> bool {
    using AddItem = bool (__thiscall*)(Actor*, ItemStack*);
    auto _AddItem = (AddItem)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _AddItem = (AddItem)(this->VTable[230]);
        break;
        case MC_VER::v1_18_1_20:
            _AddItem = (AddItem)(this->VTable[230]);
        break;
        case MC_VER::v1_18_0_02:
            _AddItem = (AddItem)(this->VTable[230]);
        break;
        case MC_VER::v1_17_41_1:
            _AddItem = (AddItem)(this->VTable[231]);
        break;
        case MC_VER::v1_17_40_6:
            _AddItem = (AddItem)(this->VTable[231]);
        break;
        case MC_VER::v1_17_34_2:
            _AddItem = (AddItem)(this->VTable[232]);
        break;
    };

    return _AddItem(this, itemStack);
};

auto Actor::drop(ItemStack* itemStack) -> bool {
    using Drop = bool (__thiscall*)(Actor*, ItemStack*);
    auto _Drop = (Drop)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _Drop = (Drop)(this->VTable[231]);
        break;
        case MC_VER::v1_18_1_20:
            _Drop = (Drop)(this->VTable[231]);
        break;
        case MC_VER::v1_18_0_02:
            _Drop = (Drop)(this->VTable[231]);
        break;
        case MC_VER::v1_17_41_1:
            _Drop = (Drop)(this->VTable[232]);
        break;
        case MC_VER::v1_17_40_6:
            _Drop = (Drop)(this->VTable[232]);
        break;
        case MC_VER::v1_17_34_2:
            _Drop = (Drop)(this->VTable[233]);
        break;
    };

    return _Drop(this, itemStack);
};

auto Actor::getInteraction(Player* player, ActorInteraction* actorInteraction, Vec3<float>* position) -> bool {
    using GetInteraction = bool (__thiscall*)(Actor*, Player*, ActorInteraction*, Vec3<float>*);
    auto _GetInteraction = (GetInteraction)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetInteraction = (GetInteraction)(this->VTable[232]);
        break;
        case MC_VER::v1_18_1_20:
            _GetInteraction = (GetInteraction)(this->VTable[232]);
        break;
        case MC_VER::v1_18_0_02:
            _GetInteraction = (GetInteraction)(this->VTable[232]);
        break;
        case MC_VER::v1_17_41_1:
            _GetInteraction = (GetInteraction)(this->VTable[233]);
        break;
        case MC_VER::v1_17_40_6:
            _GetInteraction = (GetInteraction)(this->VTable[233]);
        break;
        case MC_VER::v1_17_34_2:
            _GetInteraction = (GetInteraction)(this->VTable[234]);
        break;
    };

    return _GetInteraction(this, player, actorInteraction, position);
};

auto Actor::setSize(float width, float height) -> void {
    using SetSize = void (__thiscall*)(Actor*, float, float);
    auto _SetSize = (SetSize)(this->VTable[0]);
    
    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _SetSize = (SetSize)(this->VTable[235]);
        break;
        case MC_VER::v1_18_1_20:
            _SetSize = (SetSize)(this->VTable[235]);
        break;
        case MC_VER::v1_18_0_02:
            _SetSize = (SetSize)(this->VTable[235]);
        break;
        case MC_VER::v1_17_41_1:
            _SetSize = (SetSize)(this->VTable[236]);
        break;
        case MC_VER::v1_17_40_6:
            _SetSize = (SetSize)(this->VTable[236]);
        break;
        case MC_VER::v1_17_34_2:
            _SetSize = (SetSize)(this->VTable[237]);
        break;
    };

    _SetSize(this, width, height);
};

auto Actor::wobble(void) -> void {
    using Wobble = void (__thiscall*)(Actor*);
    auto _Wobble = (Wobble)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _Wobble = (Wobble)(this->VTable[237]);
        break;
        case MC_VER::v1_18_1_20:
            _Wobble = (Wobble)(this->VTable[237]);
        break;
        case MC_VER::v1_18_0_02:
            _Wobble = (Wobble)(this->VTable[237]);
        break;
        case MC_VER::v1_17_41_1:
            _Wobble = (Wobble)(this->VTable[238]);
        break;
        case MC_VER::v1_17_40_6:
            _Wobble = (Wobble)(this->VTable[238]);
        break;
        case MC_VER::v1_17_34_2:
            _Wobble = (Wobble)(this->VTable[239]);
        break;
    };

    _Wobble(this);
};

auto Actor::wasHurt(void) -> bool {
    using WasHurt = bool (__thiscall*)(Actor*);
    auto _WasHurt = (WasHurt)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _WasHurt = (WasHurt)(this->VTable[238]);
        break;
        case MC_VER::v1_18_1_20:
            _WasHurt = (WasHurt)(this->VTable[238]);
        break;
        case MC_VER::v1_18_0_02:
            _WasHurt = (WasHurt)(this->VTable[238]);
        break;
        case MC_VER::v1_17_41_1:
            _WasHurt = (WasHurt)(this->VTable[239]);
        break;
        case MC_VER::v1_17_40_6:
            _WasHurt = (WasHurt)(this->VTable[239]);
        break;
        case MC_VER::v1_17_34_2:
            _WasHurt = (WasHurt)(this->VTable[240]);
        break;
    };

    return _WasHurt(this);
};

auto Actor::startSpinAttack(void) -> void {
    using StartSpinAttack = void (__thiscall*)(Actor*);
    auto _StartSpinAttack = (StartSpinAttack)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _StartSpinAttack = (StartSpinAttack)(this->VTable[239]);
        break;
        case MC_VER::v1_18_1_20:
            _StartSpinAttack = (StartSpinAttack)(this->VTable[239]);
        break;
        case MC_VER::v1_18_0_02:
            _StartSpinAttack = (StartSpinAttack)(this->VTable[239]);
        break;
        case MC_VER::v1_17_41_1:
            _StartSpinAttack = (StartSpinAttack)(this->VTable[240]);
        break;
        case MC_VER::v1_17_40_6:
            _StartSpinAttack = (StartSpinAttack)(this->VTable[240]);
        break;
        case MC_VER::v1_17_34_2:
            _StartSpinAttack = (StartSpinAttack)(this->VTable[241]);
        break;
    };

    _StartSpinAttack(this);
};

auto Actor::setDamageNearbyMobs(bool paramA) -> void {
    using SetDamageNearbyMobs = void (__thiscall*)(Actor*, bool);
    auto _SetDamageNearbyMobs = (SetDamageNearbyMobs)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _SetDamageNearbyMobs = (SetDamageNearbyMobs)(this->VTable[241]);
        break;
        case MC_VER::v1_18_1_20:
            _SetDamageNearbyMobs = (SetDamageNearbyMobs)(this->VTable[241]);
        break;
        case MC_VER::v1_18_0_02:
            _SetDamageNearbyMobs = (SetDamageNearbyMobs)(this->VTable[241]);
        break;
        case MC_VER::v1_17_41_1:
            _SetDamageNearbyMobs = (SetDamageNearbyMobs)(this->VTable[242]);
        break;
        case MC_VER::v1_17_40_6:
            _SetDamageNearbyMobs = (SetDamageNearbyMobs)(this->VTable[242]);
        break;
        case MC_VER::v1_17_34_2:
            _SetDamageNearbyMobs = (SetDamageNearbyMobs)(this->VTable[243]);
        break;
    };

    _SetDamageNearbyMobs(this, paramA);
};

auto Actor::reloadLootTable(EquipmentTableDefinition* equipmentTableDefinition) -> void {
    using ReloadLootTable = void (__thiscall*)(Actor*, EquipmentTableDefinition*);
    auto _ReloadLootTable = (ReloadLootTable)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _ReloadLootTable = (ReloadLootTable)(this->VTable[243]);
        break;
        case MC_VER::v1_18_1_20:
            _ReloadLootTable = (ReloadLootTable)(this->VTable[243]);
        break;
        case MC_VER::v1_18_0_02:
            _ReloadLootTable = (ReloadLootTable)(this->VTable[243]);
        break;
        case MC_VER::v1_17_41_1:
            _ReloadLootTable = (ReloadLootTable)(this->VTable[244]);
        break;
        case MC_VER::v1_17_40_6:
            _ReloadLootTable = (ReloadLootTable)(this->VTable[244]);
        break;
        case MC_VER::v1_17_34_2:
            _ReloadLootTable = (ReloadLootTable)(this->VTable[245]);
        break;
    };

    _ReloadLootTable(this, equipmentTableDefinition);
};

auto Actor::reloadLootTable(void) -> void {
    using ReloadLootTable = void (__thiscall*)(Actor*);
    auto _ReloadLootTable = (ReloadLootTable)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _ReloadLootTable = (ReloadLootTable)(this->VTable[244]);
        break;
        case MC_VER::v1_18_1_20:
            _ReloadLootTable = (ReloadLootTable)(this->VTable[244]);
        break;
        case MC_VER::v1_18_0_02:
            _ReloadLootTable = (ReloadLootTable)(this->VTable[244]);
        break;
        case MC_VER::v1_17_41_1:
            _ReloadLootTable = (ReloadLootTable)(this->VTable[245]);
        break;
        case MC_VER::v1_17_40_6:
            _ReloadLootTable = (ReloadLootTable)(this->VTable[245]);
        break;
        case MC_VER::v1_17_34_2:
            _ReloadLootTable = (ReloadLootTable)(this->VTable[246]);
        break;
    };

    _ReloadLootTable(this);
};

auto Actor::kill(void) -> void {
    using Kill = void (__thiscall*)(Actor*);
    auto _Kill = (Kill)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _Kill = (Kill)(this->VTable[246]);
        break;
        case MC_VER::v1_18_1_20:
            _Kill = (Kill)(this->VTable[246]);
        break;
        case MC_VER::v1_18_0_02:
            _Kill = (Kill)(this->VTable[246]);
        break;
        case MC_VER::v1_17_41_1:
            _Kill = (Kill)(this->VTable[247]);
        break;
        case MC_VER::v1_17_40_6:
            _Kill = (Kill)(this->VTable[247]);
        break;
        case MC_VER::v1_17_34_2:
            _Kill = (Kill)(this->VTable[248]);
        break;
    };

    _Kill(this);
};

auto Actor::die(ActorDamageSource* actorDamageSource) -> void {
    using Die = void (__thiscall*)(Actor*, ActorDamageSource*);
    auto _Die = (Die)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _Die = (Die)(this->VTable[247]);
        break;
        case MC_VER::v1_18_1_20:
            _Die = (Die)(this->VTable[247]);
        break;
        case MC_VER::v1_18_0_02:
            _Die = (Die)(this->VTable[247]);
        break;
        case MC_VER::v1_17_41_1:
            _Die = (Die)(this->VTable[248]);
        break;
        case MC_VER::v1_17_40_6:
            _Die = (Die)(this->VTable[248]);
        break;
        case MC_VER::v1_17_34_2:
            _Die = (Die)(this->VTable[249]);
        break;
    };

    _Die(this, actorDamageSource);
};

auto Actor::shouldDropDeathLoot(void) -> bool {
    using ShouldDropDeathLoot = bool (__thiscall*)(Actor*);
    auto _ShouldDropDeathLoot = (ShouldDropDeathLoot)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _ShouldDropDeathLoot = (ShouldDropDeathLoot)(this->VTable[248]);
        break;
        case MC_VER::v1_18_1_20:
            _ShouldDropDeathLoot = (ShouldDropDeathLoot)(this->VTable[248]);
        break;
        case MC_VER::v1_18_0_02:
            _ShouldDropDeathLoot = (ShouldDropDeathLoot)(this->VTable[248]);
        break;
        case MC_VER::v1_17_41_1:
            _ShouldDropDeathLoot = (ShouldDropDeathLoot)(this->VTable[249]);
        break;
        case MC_VER::v1_17_40_6:
            _ShouldDropDeathLoot = (ShouldDropDeathLoot)(this->VTable[249]);
        break;
        case MC_VER::v1_17_34_2:
            _ShouldDropDeathLoot = (ShouldDropDeathLoot)(this->VTable[250]);
        break;
    };

    return _ShouldDropDeathLoot(this);
};

auto Actor::shouldTick(void) -> bool {
    using ShouldTick = bool (__thiscall*)(Actor*);
    auto _ShouldTick = (ShouldTick)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _ShouldTick = (ShouldTick)(this->VTable[249]);
        break;
        case MC_VER::v1_18_1_20:
            _ShouldTick = (ShouldTick)(this->VTable[249]);
        break;
        case MC_VER::v1_18_0_02:
            _ShouldTick = (ShouldTick)(this->VTable[249]);
        break;
        case MC_VER::v1_17_41_1:
            _ShouldTick = (ShouldTick)(this->VTable[250]);
        break;
        case MC_VER::v1_17_40_6:
            _ShouldTick = (ShouldTick)(this->VTable[250]);
        break;
        case MC_VER::v1_17_34_2:
            _ShouldTick = (ShouldTick)(this->VTable[251]);
        break;
    };

    return _ShouldTick(this);
};

auto Actor::getNextStep(float f) -> float {
    using GetNextStep = float (__thiscall*)(Actor*, float);
    auto _GetNextStep = (GetNextStep)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetNextStep = (GetNextStep)(this->VTable[252]);
        break;
        case MC_VER::v1_18_1_20:
            _GetNextStep = (GetNextStep)(this->VTable[252]);
        break;
        case MC_VER::v1_18_0_02:
            _GetNextStep = (GetNextStep)(this->VTable[252]);
        break;
        case MC_VER::v1_17_41_1:
            _GetNextStep = (GetNextStep)(this->VTable[253]);
        break;
        case MC_VER::v1_17_40_6:
            _GetNextStep = (GetNextStep)(this->VTable[253]);
        break;
        case MC_VER::v1_17_34_2:
            _GetNextStep = (GetNextStep)(this->VTable[254]);
        break;
    };

    return _GetNextStep(this, f);
};

auto Actor::getLootTable(void) -> LootTable* {
    using GetLootTable = LootTable* (__thiscall*)(Actor*);
    auto _GetLootTable = (GetLootTable)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _GetLootTable = (GetLootTable)(this->VTable[253]);
        break;
        case MC_VER::v1_18_1_20:
            _GetLootTable = (GetLootTable)(this->VTable[253]);
        break;
        case MC_VER::v1_18_0_02:
            _GetLootTable = (GetLootTable)(this->VTable[253]);
        break;
        case MC_VER::v1_17_41_1:
            _GetLootTable = (GetLootTable)(this->VTable[254]);
        break;
        case MC_VER::v1_17_40_6:
            _GetLootTable = (GetLootTable)(this->VTable[254]);
        break;
        case MC_VER::v1_17_34_2:
            _GetLootTable = (GetLootTable)(this->VTable[255]);
        break;
    };
    
    return _GetLootTable(this);
};

auto Actor::shouldTryMakeStepSound(void) -> bool {
    using ShouldTryMakeStepSound = bool (__thiscall*)(Actor*);
    auto _ShouldTryMakeStepSound = (ShouldTryMakeStepSound)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _ShouldTryMakeStepSound = (ShouldTryMakeStepSound)(this->VTable[256]);
        break;
        case MC_VER::v1_18_1_20:
            _ShouldTryMakeStepSound = (ShouldTryMakeStepSound)(this->VTable[256]);
        break;
        case MC_VER::v1_18_0_02:
            _ShouldTryMakeStepSound = (ShouldTryMakeStepSound)(this->VTable[256]);
        break;
        case MC_VER::v1_17_41_1:
            _ShouldTryMakeStepSound = (ShouldTryMakeStepSound)(this->VTable[257]);
        break;
        case MC_VER::v1_17_40_6:
            _ShouldTryMakeStepSound = (ShouldTryMakeStepSound)(this->VTable[257]);
        break;
        case MC_VER::v1_17_34_2:
            _ShouldTryMakeStepSound = (ShouldTryMakeStepSound)(this->VTable[257]);
        break;
    };

    return _ShouldTryMakeStepSound(this);
};

auto Actor::markHurt(void) -> void {
    using MarkHurt = void (__thiscall*)(Actor*);
    auto _MarkHurt = (MarkHurt)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _MarkHurt = (MarkHurt)(this->VTable[259]);
        break;
        case MC_VER::v1_18_1_20:
            _MarkHurt = (MarkHurt)(this->VTable[259]);
        break;
        case MC_VER::v1_18_0_02:
            _MarkHurt = (MarkHurt)(this->VTable[259]);
        break;
        case MC_VER::v1_17_41_1:
            _MarkHurt = (MarkHurt)(this->VTable[260]);
        break;
        case MC_VER::v1_17_40_6:
            _MarkHurt = (MarkHurt)(this->VTable[260]);
        break;
        case MC_VER::v1_17_34_2:
            _MarkHurt = (MarkHurt)(this->VTable[260]);
        break;
    };

    _MarkHurt(this);
};

auto Actor::checkInsideBlocks(float f) -> void {
    using CheckInsideBlocks = void (__thiscall*)(Actor*, float);
    auto _CheckInsideBlocks = (CheckInsideBlocks)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _CheckInsideBlocks = (CheckInsideBlocks)(this->VTable[266]);
        break;
        case MC_VER::v1_18_1_20:
            _CheckInsideBlocks = (CheckInsideBlocks)(this->VTable[266]);
        break;
        case MC_VER::v1_18_0_02:
            _CheckInsideBlocks = (CheckInsideBlocks)(this->VTable[266]);
        break;
        case MC_VER::v1_17_41_1:
            _CheckInsideBlocks = (CheckInsideBlocks)(this->VTable[267]);
        break;
        case MC_VER::v1_17_40_6:
            _CheckInsideBlocks = (CheckInsideBlocks)(this->VTable[267]);
        break;
        case MC_VER::v1_17_34_2:
            _CheckInsideBlocks = (CheckInsideBlocks)(this->VTable[267]);
        break;
    };

    _CheckInsideBlocks(this, f);
};

auto Actor::pushOutOfBlocks(Vec3<float>* blockPos) -> void {
    using PushOutOfBlocks = void (__thiscall*)(Actor*, Vec3<float>*);
    auto _PushOutOfBlocks = (PushOutOfBlocks)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _PushOutOfBlocks = (PushOutOfBlocks)(this->VTable[267]);
        break;
        case MC_VER::v1_18_1_20:
            _PushOutOfBlocks = (PushOutOfBlocks)(this->VTable[267]);
        break;
        case MC_VER::v1_18_0_02:
            _PushOutOfBlocks = (PushOutOfBlocks)(this->VTable[267]);
        break;
        case MC_VER::v1_17_41_1:
            _PushOutOfBlocks = (PushOutOfBlocks)(this->VTable[268]);
        break;
        case MC_VER::v1_17_40_6:
            _PushOutOfBlocks = (PushOutOfBlocks)(this->VTable[268]);
        break;
        case MC_VER::v1_17_34_2:
            _PushOutOfBlocks = (PushOutOfBlocks)(this->VTable[268]);
        break;
    };

    _PushOutOfBlocks(this, blockPos);
};

auto Actor::updateWaterState(void) -> void {
    using UpdateWaterState = void (__thiscall*)(Actor*);
    auto _UpdateWaterState = (UpdateWaterState)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _UpdateWaterState = (UpdateWaterState)(this->VTable[268]);
        break;
        case MC_VER::v1_18_1_20:
            _UpdateWaterState = (UpdateWaterState)(this->VTable[268]);
        break;
        case MC_VER::v1_18_0_02:
            _UpdateWaterState = (UpdateWaterState)(this->VTable[268]);
        break;
        case MC_VER::v1_17_41_1:
            _UpdateWaterState = (UpdateWaterState)(this->VTable[269]);
        break;
        case MC_VER::v1_17_40_6:
            _UpdateWaterState = (UpdateWaterState)(this->VTable[269]);
        break;
        case MC_VER::v1_17_34_2:
            _UpdateWaterState = (UpdateWaterState)(this->VTable[269]);
        break;
    };

    _UpdateWaterState(this);
};

auto Actor::doWaterSplashEffect(void) -> void {
    using DoWaterSplashEffect = void (__thiscall*)(Actor*);
    auto _DoWaterSplashEffect = (DoWaterSplashEffect)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _DoWaterSplashEffect = (DoWaterSplashEffect)(this->VTable[269]);
        break;
        case MC_VER::v1_18_1_20:
            _DoWaterSplashEffect = (DoWaterSplashEffect)(this->VTable[269]);
        break;
        case MC_VER::v1_18_0_02:
            _DoWaterSplashEffect = (DoWaterSplashEffect)(this->VTable[269]);
        break;
        case MC_VER::v1_17_41_1:
            _DoWaterSplashEffect = (DoWaterSplashEffect)(this->VTable[270]);
        break;
        case MC_VER::v1_17_40_6:
            _DoWaterSplashEffect = (DoWaterSplashEffect)(this->VTable[270]);
        break;
        case MC_VER::v1_17_34_2:
            _DoWaterSplashEffect = (DoWaterSplashEffect)(this->VTable[270]);
        break;
    };

    _DoWaterSplashEffect(this);
};

auto Actor::spawnTrailBubbles(void) -> void {
    using SpawnTrailBubbles = void (__thiscall*)(Actor*);
    auto _SpawnTrailBubbles = (SpawnTrailBubbles)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _SpawnTrailBubbles = (SpawnTrailBubbles)(this->VTable[270]);
        break;
        case MC_VER::v1_18_1_20:
            _SpawnTrailBubbles = (SpawnTrailBubbles)(this->VTable[270]);
        break;
        case MC_VER::v1_18_0_02:
            _SpawnTrailBubbles = (SpawnTrailBubbles)(this->VTable[270]);
        break;
        case MC_VER::v1_17_41_1:
            _SpawnTrailBubbles = (SpawnTrailBubbles)(this->VTable[271]);
        break;
        case MC_VER::v1_17_40_6:
            _SpawnTrailBubbles = (SpawnTrailBubbles)(this->VTable[271]);
        break;
        case MC_VER::v1_17_34_2:
            _SpawnTrailBubbles = (SpawnTrailBubbles)(this->VTable[271]);
        break;
    };

    _SpawnTrailBubbles(this);
};

auto Actor::updateInsideBlock(void) -> void {
    using UpdateInsideBlock = void (__thiscall*)(Actor*);
    auto _UpdateInsideBlock = (UpdateInsideBlock)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_2_30:
            _UpdateInsideBlock = (UpdateInsideBlock)(this->VTable[271]);
        break;
        case MC_VER::v1_18_1_20:
            _UpdateInsideBlock = (UpdateInsideBlock)(this->VTable[271]);
        break;
        case MC_VER::v1_18_0_02:
            _UpdateInsideBlock = (UpdateInsideBlock)(this->VTable[271]);
        break;
        case MC_VER::v1_17_41_1:
            _UpdateInsideBlock = (UpdateInsideBlock)(this->VTable[272]);
        break;
        case MC_VER::v1_17_40_6:
            _UpdateInsideBlock = (UpdateInsideBlock)(this->VTable[272]);
        break;
        case MC_VER::v1_17_34_2:
            _UpdateInsideBlock = (UpdateInsideBlock)(this->VTable[272]);
        break;
    };

    _UpdateInsideBlock(this);
};