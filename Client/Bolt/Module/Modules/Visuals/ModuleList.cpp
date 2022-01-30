#include "ModuleList.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"
#include "../../../Client/Client.h"

struct compare {
    inline bool operator()(const std::string& first,
            const std::string& second) const
    {
        return first.size() < second.size();
    }
};

class ModuleListTextData {
public:
    ModuleListTextData(Module* mod, float xOff, float textLen) {
        this->mod = mod;
        this->xOff = xOff;
        this->textLen = textLen;
    };
public:
    Module* mod;
    float xOff = 0.f;
    float textLen = 0.f;
    float animModifier = 1.f;
public:
    auto updateXOff(float resX) -> void {
        if(this->mod == nullptr)
            return;
        
        if(this->xOff < (resX - this->textLen) || this->xOff > resX)
            this->xOff = (this->mod->isEnabled ? resX - this->textLen : resX);
        
        if(this->mod->isEnabled && this->xOff > (resX - this->textLen))
            this->xOff -= this->animModifier;
        else
            if(!this->mod->isEnabled && this->xOff < resX)
                this->xOff += this->animModifier;
    };
};

std::map<std::string, ModuleListTextData*> moduleListTextMap = std::map<std::string, ModuleListTextData*>();

auto ModuleList::onRender(RenderUtils* r) -> void {
    if(r == nullptr || !r->canDraw())
        return;
    
    this->applyAlpha();

    auto ctx = r->getCtx();
    auto manager = this->getManager();

    if(ctx == nullptr || ctx->clientInstance == nullptr || manager == nullptr)
        return;
    
    auto instance = ctx->clientInstance;
    auto guiData = instance->getGuiData();

    auto res = guiData->scaledRes;

    auto outlineColor = Color(52, 159, 235, alpha);
    auto textColor = Color(30, 200, 200, alpha);
    auto bgColor = Color(23, 23, 23, alpha);

    std::vector<std::string> moduleNames = std::vector<std::string>();

    for(auto c : manager->getCategories()) {
        for(auto m : c->getModules()) {
            moduleNames.push_back(m->name);
        };
    };

    compare c;
    std::sort(moduleNames.begin(), moduleNames.end(), c);

    int I = 0;
    for(auto moduleName : moduleNames) {
        auto curr = moduleListTextMap[moduleName];

        if(curr == nullptr) {
            moduleListTextMap[moduleName] = new ModuleListTextData(manager->getModule(moduleName), res.x, r->textLen(moduleName, 1));
            curr = moduleListTextMap[moduleName];
        };

        curr->updateXOff(res.x);

        if(curr->xOff >= res.x)
            continue;
        
        auto rectPos = Vec4<float>((curr->xOff < res.x ? curr->xOff - 5 : curr->xOff), I * 13, res.x, I * 13 + 13);
        
        r->fillRectangle(rectPos, bgColor);
        r->drawRectangle(rectPos, outlineColor, 1);
        r->drawString(moduleName, 1, Vec2<float>(rectPos.x + 3.f, rectPos.y + 2), textColor);

        I++;
    };

    r->getCtx()->flushText(0);
};

auto ModuleList::applyAlpha(void) -> void {
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