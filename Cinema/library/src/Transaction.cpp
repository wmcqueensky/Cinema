//
// Created by Wojciech Mokwiński on 18/01/2024.
//

#include "Transaction.h"
#include <random>

Transaction::Transaction(std::shared_ptr<Client> client)
        : client(std::move(client)) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 10000);
    transactionNumber = dis(gen);
}

std::shared_ptr<Client> Transaction::getClient() const {
    return client;
}

void Transaction::addTicket(std::shared_ptr<Ticket> ticket) {
    tickets.push_back(ticket);
}

void Transaction::addSnack(std::shared_ptr<Snack> snack) {
    snacks.push_back(snack);
}

float Transaction::getTotalAmount() const {
    float totalAmount = 0.0;

    for (const auto& ticket : tickets) {
        totalAmount += ticket->getPrice();
    }

    for (const auto& snack : snacks) {
        totalAmount += snack->getPrice();
    }

    return totalAmount;
}

int Transaction::getTransactionNumber() const {
    return transactionNumber;
}