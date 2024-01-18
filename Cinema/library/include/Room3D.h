//
// Created by Wojciech Mokwiński on 16/01/2024.
//

#ifndef CINEMA_ROOM3D_H
#define CINEMA_ROOM3D_H

#include <string>
#include "Room.h"

class Room3D : public Room {
private:
    float additionalFee;
public:
    Room3D(int roomNumber);

    [[nodiscard]] std::string getRoomDetails() const override;
    [[nodiscard]] float getAdditionalFee() const;
};

#endif //CINEMA_ROOM3D_H
