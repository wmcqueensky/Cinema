//
// Created by Wojciech Mokwiński on 16/01/2024.
//

#ifndef CINEMA_SEAT_H
#define CINEMA_SEAT_H

class Seat {
private:
    int seatNumber;
    int row;
    bool booked;

public:
    explicit Seat(int seatNumber, int row);

    [[nodiscard]] int getSeatNumber() const;
    [[nodiscard]] int getRow() const;
    [[nodiscard]] bool isBooked() const;
    void bookSeat();
    void unbookSeat();
};

#endif //CINEMA_SEAT_H
