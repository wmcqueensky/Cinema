//
// Created by Wojciech Mokwiński on 16/01/2024.
//

#include "Room2D.h"

Room2D::Room2D(int roomNumber) : Room(roomNumber) {}

std::string Room2D::getRoomDetails() const {
    return "2D Room Details:\nRoom Number: " + std::to_string(roomNumber) +
           "\nCapacity: " + std::to_string(seats.size()) +
           "\nAvailable Seats: " + std::to_string(getAvailableSeats().size()) +
           "\nMovie: " + (movie ? movie->getMovieName() : "No movie assigned");
}