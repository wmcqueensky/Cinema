//
// Created by Wojciech Mokwiński on 14/01/2024.
//

#ifndef CINEMA_TICKET_H
#define CINEMA_TICKET_H
#include <string>

class Ticket {
protected:
    int ticketNumber;
    float price;
    std::string movieName;
    int seatNumber;

public:
    Ticket(int ticketNumber, float price, std::string  movieName, int seatNumber);
    virtual ~Ticket() = default;

    [[nodiscard]] int getTicketNumber() const;
    [[nodiscard]] float getPrice() const;
    [[nodiscard]] const std::string& getMovieName() const;
    [[nodiscard]] int getSeatNumber() const;

    [[nodiscard]] virtual std::string getTicketDetails() const = 0;
};

#endif //CINEMA_TICKET_H
