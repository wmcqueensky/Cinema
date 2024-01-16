//
// Created by Wojciech Mokwiński on 16/01/2024.
//

#include "NormalTicket.h"

NormalTicket::NormalTicket(int ticketNumber, float price, const std::string& movieName, int seatNumber)
        : Ticket(ticketNumber, price, movieName, seatNumber) {}

std::string NormalTicket::getTicketDetails() const {
    return std::string("Ticket Details: ") +
           "\nTicket Number: " + std::to_string(ticketNumber) +
           "\nPrice: " + std::to_string(price) +
           "\nMovie Name: " + movieName +
           "\nSeat Number: " + std::to_string(seatNumber);
}
