#ifndef CLIENT_SDK_CLASSES_PACKET
#define CLIENT_SDK_CLASSES_PACKET

#include "../../Mem/Mem.h"
#include "../../Utils/Utils.h"

class Packet {
public:
    uintptr_t** VTable;
public:
    auto getName(void) -> std::string;
};

#endif /* CLIENT_SDK_CLASSES_PACKET */