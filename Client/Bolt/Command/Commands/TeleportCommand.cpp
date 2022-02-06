#include "TeleportCommand.h"

#include "../../Manager/Manager.h"
#include "../../../Client.h"

auto TeleportCommand::onCommand(std::string message, std::vector<std::string> args) -> void {
    try {
        auto instance = Minecraft::getClientInstance();
        auto player = (instance != nullptr ? instance->getLocalPlayer() : nullptr);
        auto pos = (player != nullptr ? *player->getPos() : Vec3<float>(0, 0, 0));

        if(player == nullptr)
            return;
        
        for(auto I = 1; I < args.size(); I++) {
            auto arg = args.at(I);
            if(arg.rfind("~") == 0) {
                args.at(I).erase(0, 1);
                args.at(I) = std::string(std::to_string((I == 1 ? pos.x : I == 2 ? pos.y : pos.z) + (arg.length() > 1 ? std::stof(args.at(I)) : 0)));
            };
        };
        
        player->setPos(Vec3<float>(std::stof(args.at(1)), std::stof(args.at(2)), std::stof(args.at(3))));

        auto manager = this->getManager();
        auto msg = std::string("Teleported, X: " + args.at(1) + ", Y: " + args.at(2) + ", Z: " + args.at(3));
        
        if(manager != nullptr)
            manager->addNotif(msg);
        else
            this->reply(msg);

    } catch(std::exception e) {
        this->reply(std::string("Invalid usage, example: " + this->getManager()->cmdPrefix + this->name + " 75 255 120"));
        this->reply(std::string("Invalid usage, example: " + this->getManager()->cmdPrefix + this->name + " ~ ~2 ~24"));
    };
};