//
// Created by Wojciech Mokwiński on 16/01/2024.
//

#ifndef CINEMA_NORMALTICKET_H
#define CINEMA_NORMALTICKET_H
#include "Ticket.h"

class NormalTicket : public Ticket {
public:
    NormalTicket(int ticketNumber, float price, const std::string& movieName, int seatNumber);

    std::string getTicketDetails() const override;
};

#endif //CINEMA_NORMALTICKET_H
