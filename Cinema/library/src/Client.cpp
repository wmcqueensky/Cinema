//
// Created by Wojciech Mokwiński on 18/01/2024.
//

#include "Client.h"

Client::Client(int clientId, const std::string& firstName, const std::string& lastName, const std::string& password,
               const std::string& email, unsigned age)
        : clientId(clientId), firstName(firstName), lastName(lastName), password(password), email(email), age(age) {}

int Client::getClientId() const {
    return clientId;
}

std::string Client::getName() const {
    return firstName + " " + lastName;
}

std::string Client::getEmail() const {
    return email;
}

unsigned Client::getAge() const {
    return age;
}

std::unique_ptr<Ticket> Client::bookTicket(const std::string& movieName, const std::unique_ptr<Room>& room, int seatNumber) {
//    std::unique_ptr<Ticket> newTicket = std::make_unique<Ticket>(movieName, room, seatNumber);
//    tickets.push_back(std::move(newTicket));
//    return tickets.back(); // Return the booked ticket
}

void Client::cancelTicket(std::unique_ptr<Ticket>& ticket) {
    // Remove the canceled ticket from the client's tickets vector
//    auto it = std::remove_if(tickets.begin(), tickets.end(),
//                             [&ticket](const std::unique_ptr<Ticket>& t) { return t.get() == ticket.get(); });
//    tickets.erase(it, tickets.end());
    // The Ticket object is automatically deleted when it goes out of scope
}
