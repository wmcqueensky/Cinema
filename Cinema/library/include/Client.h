//
// Created by Wojciech Mokwiński on 18/01/2024.
//

#ifndef CINEMA_CLIENT_H
#define CINEMA_CLIENT_H

#include <string>
#include "Ticket.h"
#include "Room.h"

class Client {
private:
    int clientId;
    std::vector<std::unique_ptr<Ticket>> tickets;
    std::string firstName;
    std::string lastName;
    std::string password;
    std::string email;
    unsigned age;

public:
    Client(int clientId, const std::string& firstName, const std::string& lastName, const std::string& password,
           const std::string& email, unsigned age);

    int getClientId() const;
    std::string getName() const;
    std::string getEmail() const;
    unsigned getAge() const;

    std::unique_ptr<Ticket> bookTicket(const std::string& movieName, const std::unique_ptr<Room>& room, int seatNumber);
    void cancelTicket(std::unique_ptr<Ticket>& ticket);
};

#endif //CINEMA_CLIENT_H
