//
// Created by Wojciech Mokwiński on 18/01/2024.
//

#include <boost/test/unit_test.hpp>
#include "Client.h"
#include "Transaction.h"
#include "ReducedTicket.h"
#include "NormalTicket.h"

BOOST_AUTO_TEST_SUITE(TransactionTests)

    BOOST_AUTO_TEST_CASE(testTransactionInitialization) {
        std::shared_ptr<Client> client = std::make_shared<Client>(1, "John", "Doe", "password", "john.doe@example.com", 25);
        Transaction transaction(client);

        BOOST_CHECK_EQUAL(transaction.getClient()->getClientId(), client->getClientId());
        BOOST_CHECK_EQUAL(transaction.getTotalAmount(), 0.0);
        BOOST_CHECK_NO_THROW(transaction.getTransactionNumber());
    }

    BOOST_AUTO_TEST_CASE(testAddTicketAndSnack) {
        std::shared_ptr<Client> client = std::make_shared<Client>(1, "John", "Doe", "password", "john.doe@example.com", 25);
        Transaction transaction(client);

        std::shared_ptr<Ticket> reducedTicket = std::make_shared<ReducedTicket>(1, 10.0, "Movie1", 1, 0.1);  // Provide proper arguments
        std::shared_ptr<Ticket> normalTicket = std::make_shared<NormalTicket>(2, 15.0, "Movie2", 2);  // Provide proper arguments
        std::shared_ptr<Snack> snack = std::make_shared<Snack>("Popcorn", 5.0);

        transaction.addTicket(reducedTicket);
        transaction.addTicket(normalTicket);
        transaction.addSnack(snack);

        float expectedTotalAmount = reducedTicket->getPrice() + normalTicket->getPrice() + snack->getPrice();
        BOOST_CHECK_EQUAL(transaction.getTotalAmount(), expectedTotalAmount);
    }

BOOST_AUTO_TEST_SUITE_END()