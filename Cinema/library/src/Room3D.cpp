//
// Created by Wojciech Mokwiński on 16/01/2024.
//

#include "Room3D.h"
#include <sstream>
#include <iomanip>

Room3D::Room3D(int roomNumber) : Room(roomNumber) {
    additionalFee = 10;
}

std::string Room3D::getRoomDetails() const {
    std::ostringstream stream;
    stream << std::fixed << std::setprecision(2);

    stream << "3D Room Details:"
           << "\nRoom Number: " << roomNumber
           << "\nCapacity: " << seats.size()
           << "\nAdditional Fee: " << additionalFee
           << "\nAvailable Seats: " << getAvailableSeats().size()
           << "\nMovie: " << (movie ? movie->getMovieName() : "No movie assigned");

    return stream.str();
}

float Room3D::getAdditionalFee() const {
    return additionalFee;
}