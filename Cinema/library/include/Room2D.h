//
// Created by Wojciech Mokwiński on 16/01/2024.
//

#ifndef CINEMA_ROOM2D_H
#define CINEMA_ROOM2D_H

#include <string>
#include "Room.h"

class Room2D : public Room {
public:
    Room2D(int roomNumber);

    [[nodiscard]] std::string getRoomDetails() const override;
};

#endif //CINEMA_ROOM2D_H
