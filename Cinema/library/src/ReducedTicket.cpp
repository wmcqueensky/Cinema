//
// Created by Wojciech Mokwiński on 16/01/2024.
//

#include "ReducedTicket.h"
#include <sstream>
#include <iomanip>

ReducedTicket::ReducedTicket(int ticketNumber, float price, const std::string& movieName, int seatNumber, float discount)
        : Ticket(ticketNumber, price, movieName, seatNumber), discount(discount) {
    this->price -= this->price * discount;
    this->price = std::round(this->price * 100.0) / 100.0;
}

std::string ReducedTicket::getTicketDetails() const {
    std::ostringstream stream;
    stream << std::fixed << std::setprecision(2);

    stream << "Ticket Details "
           << "\nTicket Number: " << ticketNumber
           << "\nPrice: " << price
           << "\nDiscount: " << getDiscount()
           << "\nMovie Name: " << movieName
           << "\nSeat Number: " << seatNumber;

    return stream.str();
}

float ReducedTicket::getDiscount() const {
    return discount;
}
