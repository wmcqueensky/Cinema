//
// Created by Wojciech Mokwiński on 14/01/2024.
//

#ifndef CINEMA_TICKET_H
#define CINEMA_TICKET_H

#include <memory>
#include <string>

class Movie;  // Forward declaration

class Ticket {
private:
    int ticketNumber;
    float price;
    std::string movieName;
    int seatNumber;
    std::unique_ptr<Movie> movie;

public:
    Ticket();
    ~Ticket() = default;

    int getTicketNumber() const;
    void setTicketNumber(int ticketNumber);

    float getPrice() const;
    void setPrice(float price);

    const std::string& getMovieName() const;
    void setMovieName(const std::string& movieName);

    int getSeatNumber() const;
    void setSeatNumber(int seatNumber);

    void createTicket();
    std::string getTicketDetails() const;

    void setMovie(const std::unique_ptr<Movie>& movie);
};

#endif //CINEMA_TICKET_H
