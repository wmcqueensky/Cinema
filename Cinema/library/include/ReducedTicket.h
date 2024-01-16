//
// Created by Wojciech Mokwiński on 16/01/2024.
//

#ifndef CINEMA_REDUCEDTICKET_H
#define CINEMA_REDUCEDTICKET_H
#include "Ticket.h"

class ReducedTicket : public Ticket {
private:
    float discount;

public:
    ReducedTicket(int ticketNumber, float price, const std::string& movieName, int seatNumber, float discount);

    std::string getTicketDetails() const override;
    float getDiscount() const;
};

#endif //CINEMA_REDUCEDTICKET_H
