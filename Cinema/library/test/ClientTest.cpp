//
// Created by Wojciech Mokwiński on 18/01/2024.
//

#include <boost/test/unit_test.hpp>
#include "Client.h"

BOOST_AUTO_TEST_SUITE(ClientTests)

    BOOST_AUTO_TEST_CASE(testClientConstructorAndAccessors) {
        Client client(1, "John", "Doe", "password123", "john.doe@example.com", 25);

        BOOST_CHECK_EQUAL(client.getClientId(), 1);
        BOOST_CHECK_EQUAL(client.getName(), "John Doe");
        BOOST_CHECK_EQUAL(client.getEmail(), "john.doe@example.com");
        BOOST_CHECK_EQUAL(client.getAge(), 25);
    }

BOOST_AUTO_TEST_SUITE_END()
