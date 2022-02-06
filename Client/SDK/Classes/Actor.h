#ifndef CLIENT_SDK_CLASSES_ACTOR
#define CLIENT_SDK_CLASSES_ACTOR

#include "../../Mem/Mem.h"
#include "../../Utils/Utils.h"

#include "BlockSource.h"
#include "Dimension.h"
#include "Level.h"

#include "ItemStack.h"

class Mob;
class Player;

enum LevelSoundEvent;
enum ActorDamageCause;
struct HashedString;
class ItemActor;
struct ActorUniqueID;
enum CommandPermissionLevel;
struct Attribute;
struct AttributeInstance;
struct AnimationComponent;
struct LootTable;

enum EntityType {
    /* Drops */
    
    Dropped_Item = 64,
    Experience_Orb = 69,
    
    /* Blocks */
    
    TNT = 65,
    Falling_Block = 66,
    Moving_Block = 67,
    
    /* Immobile and Projectiles */
    
    Armor_Stand = 61,
    Bottle_Of_Enchanting = 68,
    Eye_Of_Ender = 70,
    Ender_Crystal = 71,
    Fireworks_Rocket = 72,
    Thrown_Trident = 73,
    Shulker_Bullet = 76,
    Fishing_Hook = 77,
    Dragon_Fireball = 79,
    Arrow = 80,
    Snowball = 81,
    Egg = 82,
    Painting = 83,
    Minecart = 84,
    Fireball = 85,
    Splash_Potion = 86,
    Ender_Pearl = 87,
    Leash_Knot = 88,
    Wither_Skull = 89,
    Boat = 90,
    Wither_Skull_Dangerous = 91,
    Lightning_Bolt = 93,
    Small_Fireball = 94,
    Area_Effect_Cloud = 95,
    Hopper_Minecart = 96,
    TNT_Minecart = 97,
    Chest_Minecart = 98,
    Command_Block_Minecart = 100,
    Lingering_Potion = 101,
    Llama_Spit = 102,
    Evocation_Fang = 103,
    Ice_Bomb = 106,
    Balloon = 107,
    
    /* Hostile Mobs */

    Zombie = 32,
    Creeper = 33,
    Skeleton = 34,
    Spider = 35,
    Zombie_Pigman = 36,
    Slime = 37,
    Enderman = 38,
    Silverfish = 39,
    Cave_Spider = 40,
    Ghast = 41,
    Magma_Cube = 42,
    Blaze = 43,
    Zombie_Villager = 44,
    Witch = 45,
    Stray = 46,
    Husk = 47,
    Wither_Skeleton = 48,
    Guardian = 49,
    Elder_Guardian = 50,
    Wither = 52,
    Ender_Dragon = 53,
    Shulker = 54,
    Endermite = 55,
    Vindicator = 57,
    Phantom = 58,
    Ravager = 59,
    Evocation_Villager = 104,
    Vex = 105,
    Drowned = 110,
    Pillager = 114,
    Zombie_Villager_V2 = 116,
    Piglin = 123,
    Hoglin = 124,
    Zoglin = 126,
    Piglin_Brute = 127,

    /* Passive and Neutral Mobs */

    Chicken = 10,
    Cow = 11,
    Pig = 12,
    Sheep = 13,
    Wolf = 14,
    Villager = 15,
    Mooshroom = 16,
    Squid = 17,
    Rabbit = 18,
    Bat = 19,
    Iron_Golem = 20,
    Snow_Golem = 21,
    Ocelot = 22,
    Horse = 23,
    Donkey = 24,
    Mule = 25,
    Skeleton_Horse = 26,
    Zombie_Horse = 27,
    Polar_Bear = 28,
    Llama = 29,
    Parrot = 30,
    Dolphin = 31,
    Turtle = 74,
    Cat = 75,
    Pufferfish = 108,
    Salmon = 109,
    Tropical_Fish = 111,
    Cod = 112,
    Panda = 113,
    Villager_V2 = 115,
    Wandering_Trader = 118,
    Fox = 121,
    Bee = 122,
    Strider = 125,
    Goat = 128,

    /* Other */

    Client_Player = 63,
    Shield = 117,
    
    Elder_Guardian_Ghost = 120,
    NPC = 51,
    Agent = 56,
    Tripod_Camera = 62,
    Chalkboard = 78
};

class Actor {
public:
    uintptr_t** VTable;
public:
    auto onGround(void) -> bool*;
    auto getBodyRot(void) -> Vec2<float>*;
    auto getAABB(void) -> AABB<float>*;
    auto isRidingMob(Actor*) -> bool;
    
    auto getFlightSpeed(void) -> float;
    auto setFlightSpeed(float) -> void;

    auto isFlying(void) -> bool;
    auto setFlyState(bool) -> void;

    auto getMotion() -> Vec3<float>;
    auto setMotion(Vec3<float>) -> void;
    auto setMotion(float, float, float) -> void;
    auto setMotion(float) -> void;

    auto setPos(Vec3<float>) -> void;

    auto _getDimensionId(void) -> int;

    auto getRuntimeID(void) -> __int64;
    auto getXboxGamertag(void) -> std::string;
public:
    auto getRegionConst(void) -> BlockSource*;
    auto getDimension(void) -> Dimension*;
    auto getLevel(void) -> Level*;
public:
    auto isPassenger(Actor*) -> bool;
    auto getFirstPassenger(void) -> Actor*;
public:
    auto isPlayerType(void) -> bool;
    auto isHostileType(void) -> bool;
    auto isNotMob(void) -> bool;
    auto getEntityType(void) -> std::string;
public:
    auto outOfWorld(void) -> bool;
    
    auto _serverInitItemStackIds(void) -> void;
    auto _doInitialMove(void) -> void;

    auto reset(void) -> void;
    auto getOnDeathExperience(void) -> __int64;
    auto getOwnerEntityType(void) -> uint8_t;
    auto remove(void) -> void;
    auto setPos(Vec3<float>*) -> void;
    auto getPos(void) -> Vec3<float>*;
    auto getPosOld(void) -> Vec3<float>*;
    auto getPosExtrapolated(float) -> Vec3<float>*;
    auto getAttachPos(enum ActorLocation, float) -> Vec3<float>*;
    auto getFiringPos(void) -> Vec3<float>*;
    auto setRot(Vec2<float>*) -> void;
    auto move(struct IActorMovementProxy*, Vec3<float>*) -> void;
    auto move(Vec3<float>*) -> void;
    auto getInterpolatedRidingPosition(float) -> Vec3<float>*;
    auto getInterpolatedBodyRot(float) -> float;
    auto getYawSpeedInDegreesPerSecond(void) -> float;
    auto getInterpolatedWalkAnimSpeed(float) -> float;
    auto getWorldPosition(void) -> Vec3<float>*;
    auto updateEntityInside(void) -> void;
    auto updateEntityInside(AABB<float>*) -> void;
    auto isFireImmune(void) -> bool;
    auto blockedByShield(struct ActorDamageSource*, Actor*) -> void;
    auto teleportTo(Vec3<float>*, bool, int, int) -> void;
    auto tryTeleportTo(Vec3<float>*, bool, bool, int, int) -> void;
    auto chorusFruitTeleport(Vec3<float>*) -> void;
    auto lerpMotion(Vec3<float>*) -> void;
    auto tryCreateAddActorPacket(void) -> __int64;
    auto normalTick(void) -> void;
    auto baseTick(void) -> void;
    auto rideTick(void) -> void;
    auto positionPassenger(Actor*) -> void;
    auto startRiding(Actor*) -> bool;
    auto addPassenger(Actor*) -> void;
    auto flagPassengerToRemove(Actor*) -> void;
    auto intersects(Vec3<float>*, Vec3<float>*) -> bool;
    auto isInWall(void) -> bool;
    auto isInvisible(void) -> bool;
    auto canShowNameTag(void) -> bool;
    auto setNameTagVisible(bool) -> void;
    auto getNameTag(void) -> std::string;
    auto getFormattedNameTag(void) -> std::string;
    auto filterFormattedNameTag(struct UIProfanityContext*);
    auto setNameTag(std::string) -> void;
    auto setScoreTag(std::string) -> void;
    auto getScoreTag(void) -> std::string;
    auto isInWater(void) -> bool;
    auto hasEnteredWater(void) -> bool;
    auto isInLava(void) -> bool;
    auto isUnderLiquid(enum MaterialType) -> bool;
    auto isOverWater(void) -> bool;
    auto setBlockMovementSlowdownMultiplier(Vec3<float>*) -> void;
    auto resetBlockMovementSlowdownMultiplier(void) -> void;
    auto getShadowHeightOffs(void) -> float;
    auto getShadowRadiusOffs(void) -> float;
    auto getHeadLookVector(float) -> Vec3<float>*;
    auto canSee(Vec3<float>*) -> bool;
    auto canSee(Actor*) -> bool;
    auto isSkyLit(float) -> bool;
    auto getBrightness(float) -> float;
    auto isImmobile(void) -> bool;
    auto isSilent(void) -> bool;
    auto isSleeping(void) -> bool;
    auto setSleeping(bool) -> void;
    auto setSneaking(bool) -> void;
    auto isAlive(void) -> bool;
    auto isOnFire(void) -> bool;
    auto isOnHotBlock(void) -> bool;
    auto isAffectedByWaterBottle(void) -> bool;
    auto canAttack(Actor*, bool) -> bool;
    auto setTarget(Actor*) -> void;
    auto isValidTarget(Actor*) -> bool;
    auto attack(Actor*, enum ActorDamageCause) -> bool;
    auto performRangedAttack(Actor*, float) -> void;
    auto getEquipmentCount(void) -> __int64;
    auto setOwner(ActorUniqueID&) -> void;
    auto setSitting(bool) -> void;
    auto getInventorySize(void) -> __int64;
    auto getEquipSlots(void) -> __int64;
    auto getChestSlots(void) -> __int64;
    auto setStanding(bool) -> void;
    auto canPowerJump(void) -> bool;
    auto setCanPowerJump(bool) -> void;
    auto isJumping(void) -> bool;
    auto isEnchanted(void) -> bool;
    auto shouldRender(void) -> bool;
    auto playAmbientSound(void) -> void;
    auto getAmbientSound(void) -> LevelSoundEvent;
    auto isInvulnerableTo(struct ActorDamageSource*) -> bool;
    auto getBlockDamageCause(class Block*) -> ActorDamageCause;
    auto actuallyHurt(int, struct ActorDamageSource*, bool) -> void;
    auto animateHurt(void) -> void;
    auto doFireHurt(int) -> bool;
    auto feed(int) -> void;
    auto handleEntityEvent(enum ActorEvent, int) -> void;
    auto getPickRadius(void) -> float;
    auto getActorRendererId(void) -> HashedString*;
    auto spawnAtLocation(class ItemStack*, float) -> ItemActor*;
    auto spawnAtLocation(class Block*, int, float) -> ItemActor*;
    auto spawnAtLocation(class Block*, int) -> ItemActor*;
    auto spawnAtLocation(int, int, float) -> ItemActor*;
    auto spawnAtLocation(int, int) -> ItemActor*;
    auto despawn(void) -> void;
    auto killed(Actor*) -> void;
    auto setArmorSlot(int, ItemStack*) -> void;
    auto getArmor(int) -> ItemStack*;
    auto getAllArmor(void) -> std::vector<ItemStack*>;
    auto getModelScale(void) -> float;
    auto getEquippedSlot(int) -> ItemStack*;
    auto getCarriedItem(void) -> ItemStack*;
    auto setCarriedItem(ItemStack*) -> void;
    auto setOffHandSlot(ItemStack*) -> void;
    auto getEquippedTotem(void) -> ItemStack*;
    auto consumeTotem(void) -> void;
    auto getEntityTypeId(void) -> uint8_t;
    auto getSourceUniqueID(void) -> const ActorUniqueID &;
    auto thawFreezeEffect(void) -> void;
    auto isWearingLeatherArmor(void) -> bool;
    auto getLiquidAABB(MaterialType) -> AABB<float>*;
    auto handleInsidePortal(Vec3<int>*) -> void;
    auto getPortalCooldown(void) -> __int64;
    auto getDimensionId(void) -> __int64;
    auto changeDimension(__int64) -> void;
    auto checkFallDamage(float, bool) -> void;
    auto causeFallDamage(float, float, struct ActorDamageSource &) -> void;
    auto handleFallDistanceOnServer(float, float, bool) -> void;
    auto playSynchronizedSound(LevelSoundEvent, Vec3<float>*, int, bool) -> void;
    auto playSynchronizedSound(LevelSoundEvent, Vec3<float>*, Block*, bool) -> void;
    auto canAddPassenger(Actor*) -> bool;
    auto tickLeash(void) -> void;
    auto sendMotionPacketIfNeeded(void) -> void;
    auto stopRiding(bool, bool, bool) -> void;
    auto startSwimming(void) -> void;
    auto stopSwimming(void) -> void;
    auto getCommandPermissionLevel(void) -> CommandPermissionLevel;
    auto isClientSide(void) -> bool;
    auto getMutableAttribute(Attribute*) -> AttributeInstance*;
    auto getAttribute(AttributeInstance*) -> Attribute*;
    auto heal(int) -> void;
    auto isInvertedHealAndHarm(void) -> bool;
    auto canBeAffected(struct MobEffectInstance*) -> bool;
    auto canBeAffected(int) -> bool;
    auto canBeAffectedByArrow(MobEffectInstance*) -> bool;
    auto getAnimationComponent(void) -> AnimationComponent*;
    auto openContainerComponent(Player*) -> void;
    auto swing(void) -> void;
    auto useItem(class ItemStackBase*, enum ItemUseMethod, bool) -> void;
    auto getMapDecorationRotation(void) -> float;
    auto getPassengerYRotation(Actor*) -> float;
    auto getYHeadRot(void) -> float;
    auto isWorldBuilder(void) -> bool;
    auto isInCreativeMode(void) -> bool;
    auto isAdventure(void) -> bool;
    auto addItem(ItemStack*) -> bool;
    auto drop(ItemStack*) -> bool;
    auto getInteraction(Player*, struct ActorInteraction*, Vec3<float>*) -> bool;
    auto setSize(float, float) -> void;
    auto wobble(void) -> void;
    auto wasHurt(void) -> bool;
    auto startSpinAttack(void) -> void;
    auto setDamageNearbyMobs(bool) -> void;
    auto reloadLootTable(struct EquipmentTableDefinition*) -> void;
    auto reloadLootTable(void) -> void;
    auto kill(void) -> void;
    auto die(ActorDamageSource*) -> void;
    auto shouldDropDeathLoot(void) -> bool;
    auto shouldTick(void) -> bool;
    auto getNextStep(float) -> float;
    auto getLootTable(void) -> LootTable*;
    auto shouldTryMakeStepSound(void) -> bool;
    auto markHurt(void) -> void;
    auto checkInsideBlocks(float) -> void;
    auto pushOutOfBlocks(Vec3<float>*) -> void;
    auto updateWaterState(void) -> void;
    auto doWaterSplashEffect(void) -> void;
    auto spawnTrailBubbles(void) -> void;
    auto updateInsideBlock(void) -> void;
};

#endif /* CLIENT_SDK_CLASSES_ACTOR */
