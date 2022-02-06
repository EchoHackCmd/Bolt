#include "NameTags.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"
#include "../../../Client/Client.h"

auto NameTags::onRender(RenderUtils* r) -> void {
    if(r == nullptr || !r->canDraw())
        return;
    
    auto instance = Minecraft::getClientInstance();
    auto player = (Player*)(instance != nullptr ? instance->getLocalPlayer() : nullptr);
    auto mcGame = (MinecraftGame*)(instance != nullptr ? instance->getMinecraftGame() : nullptr);

    if(player == nullptr || mcGame == nullptr)
        return;
    
    auto myPos = *player->getPos();
    auto playerRuntimeId = player->getRuntimeID();

    for(auto [runtimeId, entity] : this->getManager()->getEntityMap()) {
        if(playerRuntimeId == runtimeId)
            continue;
        
        if(entity->isNotMob())
            continue;
        
        auto isPlayer = entity->isPlayerType();
        
        auto pos = *entity->getPos();
        auto gamertag = (isPlayer ? entity->getXboxGamertag() : entity->getEntityType());

        pos.y += 1.3f;

        auto screenCoords = r->gameToScreenPos(pos);

        if(screenCoords.x <= 0 || screenCoords.y <= 0)
            continue;
        
        if(gamertag.length() <= 0)
            continue;

        auto dX = pos.x - myPos.x;
        auto dY = pos.y - myPos.y;
        auto dZ = pos.z - myPos.z;

        auto dist = sqrt(dX * dX + dY * dY + dZ * dZ);

        if(dist >= 200)
            continue;
        
        auto alpha = (mcGame->canUseKeys() ? 1.f : 0.f);
        
        auto outlineColor = (isPlayer ? Color(52, 159, 235, alpha) : entity->isHostileType() ? Color(191, 47, 42, alpha) : Color(42, 191, 82, alpha));
        auto textColor = Color(30, 200, 200, alpha);
        auto bgColor = Color(25, 25, 25, (alpha > 0.f ? alpha - 0.6f : alpha));
        
        auto text = std::string(gamertag + " || " + std::to_string((int)dist));
        auto textSize = fmax(0.6f, 3.f / dist);

        auto textWidth = r->textLen(text, textSize);
        auto textHeight = 10.f * textSize;

        auto textPos = screenCoords;
        auto rectPos = Vec4<float>();
        
        textPos.y -= textHeight;
        textPos.x -= (textWidth / 2.f);

        r->drawString(text, textSize, textPos, textColor);

        rectPos.x = textPos.x - 1.f * textSize;
        rectPos.y = textPos.y - 1.f * textSize;
        rectPos.z = textPos.x + textWidth + 1.f * textSize;
        rectPos.w = textPos.y + textHeight + 2.f * textSize;
		
        Vec4<float> subRectPos = rectPos;
        subRectPos.y = subRectPos.w - 1.f * textSize;

        r->fillRectangle(rectPos, bgColor);
        r->drawRectangle(subRectPos, outlineColor, 1);
    };
    r->getCtx()->flushText(0);
};
