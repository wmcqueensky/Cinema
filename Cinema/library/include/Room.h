//
// Created by Wojciech Mokwiński on 16/01/2024.
//

#ifndef CINEMA_ROOM_H
#define CINEMA_ROOM_H

#include <vector>
#include <memory>
#include "Seat.h"
#include "Movie.h"

class Room {
protected:
    int roomNumber;
    std::vector<std::unique_ptr<Seat>> seats;
    std::unique_ptr<Movie> movie;

public:
    explicit Room(int roomNumber);

    [[nodiscard]] int getRoomNumber() const;
    [[nodiscard]] int getCapacity() const;
    [[nodiscard]] std::unique_ptr<Movie> getMovie() const;
    [[nodiscard]] std::vector<Seat*> getAvailableSeats() const;
    [[nodiscard]] virtual std::string getRoomDetails() const = 0;
    void setMovie(const std::unique_ptr<Movie>& movie);
};

#endif //CINEMA_ROOM_H
