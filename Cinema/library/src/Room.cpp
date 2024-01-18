//
// Created by Wojciech Mokwiński on 16/01/2024.
//

#include "Room.h"

Room::Room(int roomNumber) : roomNumber(roomNumber) {
    int seatNumber = 1;
    for (int row = 1; row <= 5; ++row) {
        for (int seatInRow = 1; seatInRow <= 8; ++seatInRow) {
            seats.push_back(std::make_unique<Seat>(seatNumber++, row));
        }
    }
}

int Room::getRoomNumber() const {
    return roomNumber;
}

int Room::getCapacity() const {
    return seats.size();
}

void Room::setMovie(const std::unique_ptr<Movie>& movie) {
    this->movie = std::make_unique<Movie>(*movie);
}

std::unique_ptr<Movie> Room::getMovie() const {
    return movie ? std::make_unique<Movie>(*movie) : nullptr;
}

std::vector<Seat*> Room::getAvailableSeats() const {
    std::vector<Seat*> availableSeats;
    for (const auto& seat : seats) {
        if (!seat->isBooked()) {
            availableSeats.push_back(seat.get());
        }
    }
    return availableSeats;
}