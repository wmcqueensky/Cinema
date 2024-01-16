//
// Created by Wojciech Mokwiński on 16/01/2024.
//

#include "NormalTicket.h"
#include <iomanip>
#include <sstream>


NormalTicket::NormalTicket(int ticketNumber, float price, const std::string& movieName, int seatNumber)
        : Ticket(ticketNumber, price, movieName, seatNumber) {

}

std::string NormalTicket::getTicketDetails() const {
    std::ostringstream stream;
    stream << std::fixed << std::setprecision(2);

    stream << "Ticket Details "
           << "\nTicket Number: " << ticketNumber
           << "\nPrice: " << price
           << "\nMovie Name: " << movieName
           << "\nSeat Number: " << seatNumber;

    return stream.str();
}
