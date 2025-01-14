#ifndef _PHOTON_PROTOCOL_HANDLER_H
#define _PHOTON_PROTOCOL_HANDLER_H

#include <stddef.h>
#include <stdint.h>

class PhotonNetworkLayer;

class PhotonPacketHandler {
    public:
        virtual void handle(PhotonNetworkLayer *instance, uint8_t *buffer, size_t buffer_length) = 0;
};

#endif //_PHOTON_PROTOCOL_HANDLER_H