//
// Created by Wojciech Mokwiński on 18/01/2024.
//

#ifndef CINEMA_TRANSACTION_H
#define CINEMA_TRANSACTION_H

#include "Client.h"
#include "Ticket.h"
#include "Snack.h"

#include "Client.h"
#include "Ticket.h"
#include "Snack.h"

class Transaction {
private:
    std::shared_ptr<Client> client;
    std::vector<std::shared_ptr<Ticket>> tickets;
    std::vector<std::shared_ptr<Snack>> snacks;
    int transactionNumber;

public:
    Transaction(std::shared_ptr<Client> client);

    std::shared_ptr<Client> getClient() const;
    void addTicket(std::shared_ptr<Ticket> ticket);
    void addSnack(std::shared_ptr<Snack> snack);
    float getTotalAmount() const;
    int getTransactionNumber() const;
};

#endif //CINEMA_TRANSACTION_H
