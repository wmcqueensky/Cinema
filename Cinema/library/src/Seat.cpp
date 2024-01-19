//
// Created by Wojciech Mokwiński on 16/01/2024.
//

#include "Seat.h"

Seat::Seat(int seatNumber, int row) : seatNumber(seatNumber), row(row),booked(false) {}

int Seat::getSeatNumber() const {
    return seatNumber;
}

int Seat::getRow() const {
    return row;
}

bool Seat::isBooked() const {
    return booked;
}

void Seat::bookSeat() {
    booked = true;
}

void Seat::unbookSeat() {
    booked = false;
}
