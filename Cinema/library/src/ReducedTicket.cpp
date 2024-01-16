//
// Created by Wojciech Mokwiński on 16/01/2024.
//

#include "ReducedTicket.h"

ReducedTicket::ReducedTicket(int ticketNumber, float price, const std::string& movieName, int seatNumber, float discount)
        : Ticket(ticketNumber, price, movieName, seatNumber), discount(discount) {
    this->price -= this->price * discount;
}

std::string ReducedTicket::getTicketDetails() const {
    return std::string("Ticket Details: ") +
    "\nTicket Number: " + std::to_string(ticketNumber) +
    "\nPrice: " + std::to_string(price) +
    "\nDiscount: " + std::to_string(getDiscount()) +
    "\nMovie Name: " + movieName +
    "\nSeat Number: " + std::to_string(seatNumber);
}

float ReducedTicket::getDiscount() const {
    return discount;
}
