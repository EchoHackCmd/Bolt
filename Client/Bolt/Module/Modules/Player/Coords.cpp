#include "Coords.h"

auto Coords::onRender(RenderUtils* r) -> void {
    if(r == nullptr || !r->canDraw())
        return;
    
    auto instance = r->getCtx()->clientInstance;
    auto guiData = (GuiData*)nullptr;
    auto player = (Player*)nullptr;

    if(instance != nullptr) {
        guiData = instance->getGuiData();
        player = instance->getLocalPlayer();
    };
    
    if(guiData == nullptr || player == nullptr)
        return;
    
    this->applyAlpha();
    
    auto bgColor = Color(22, 22, 22, alpha);
    auto textColor = Color(255, 255, 255, alpha);
    auto outlineColor = Color(52, 159, 235, alpha);

    auto myPos = *player->getPos();
    auto textPos = std::string("X: " + std::to_string((int)myPos.x) + ", Y: " + std::to_string((int)(myPos.y - player->getShadowHeightOffs())) + ", Z: " + std::to_string((int)myPos.z));

    auto res = guiData->scaledRes;
    auto textLen = r->textLen(textPos, 1);

    r->fillRectangle(Vec4<float>(0, res.y - 12.f, textLen + 4, res.y), bgColor);
    r->drawRectangle(Vec4<float>(0, res.y - 12.f, textLen + 4, res.y), outlineColor, 1);
    r->drawString(textPos, 1, Vec2<float>(2, res.y - 11.f), textColor);

    r->getCtx()->flushText(0);
};

auto Coords::applyAlpha(void) -> void {
    float modifier = 0.05f;

    auto decreaseAlpha = [&]() {
        if(alpha > 0.f)
            alpha -= modifier;
        else
            alpha = 0.f;
    };

    auto increaseAlpha = [&]() {
        if(alpha < 1.f)
            alpha += modifier;
        else
            alpha = 1.f;
    };

    auto instance = Minecraft::getClientInstance();

    if(instance == nullptr || instance->getMinecraftGame() == nullptr || !instance->getMinecraftGame()->canUseKeys())
        return decreaseAlpha();
    
    return increaseAlpha();
};