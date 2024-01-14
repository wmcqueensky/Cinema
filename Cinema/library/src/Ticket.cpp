//
// Created by Wojciech Mokwiński on 14/01/2024.
//

#include "Ticket.h"

//Ticket::Ticket() : ticketNumber(0), price(0.0), seatNumber(0) {}

int Ticket::getTicketNumber() const {
    return ticketNumber;
}

void Ticket::setTicketNumber(int ticketNumber) {
    this->ticketNumber = ticketNumber;
}

float Ticket::getPrice() const {
    return price;
}

void Ticket::setPrice(float price) {
    this->price = price;
}

const std::string& Ticket::getMovieName() const {
    return movieName;
}

void Ticket::setMovieName(const std::string& movieName) {
    this->movieName = movieName;
}

int Ticket::getSeatNumber() const {
    return seatNumber;
}

void Ticket::setSeatNumber(int seatNumber) {
    this->seatNumber = seatNumber;
}

void Ticket::createTicket() {
    // Implementation for creating a ticket
}

std::string Ticket::getTicketDetails() const {
    // Implementation for getting ticket details
    return "";
}

//void Ticket::setMovie(const std::unique_ptr<Movie>& movie) {
//    this->movie = std::move(movie);
//}
