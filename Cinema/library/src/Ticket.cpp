//
// Created by Wojciech Mokwiński on 14/01/2024.
//

#include "Ticket.h"

Ticket::Ticket(int ticketNumber, float price, const std::string& movieName, int seatNumber)
        : ticketNumber(ticketNumber), price(price), movieName(movieName), seatNumber(seatNumber) {}

int Ticket::getTicketNumber() const {
    return ticketNumber;
}

float Ticket::getPrice() const {
    return price;
}

const std::string& Ticket::getMovieName() const {
    return movieName;
}

int Ticket::getSeatNumber() const {
    return seatNumber;
}

