//
// Created by Wojciech Mokwiński on 16/01/2024.
//

#include <boost/test/unit_test.hpp>
#include "NormalTicket.h"
#include "ReducedTicket.h"

BOOST_AUTO_TEST_SUITE(TicketTests)

BOOST_AUTO_TEST_CASE(NormalTicketDetails) {
        NormalTicket normalTicket(1, 20.0, "MovieName", 5);

        BOOST_CHECK_EQUAL(normalTicket.getTicketNumber(), 1);
        BOOST_CHECK_CLOSE(normalTicket.getPrice(), 20.0, 0.001);
        BOOST_CHECK_EQUAL(normalTicket.getMovieName(), "MovieName");
        BOOST_CHECK_EQUAL(normalTicket.getSeatNumber(), 5);

        BOOST_CHECK_EQUAL(normalTicket.getTicketDetails(),
        "Ticket Details \nTicket Number: 1\nPrice: 20.00\nMovie Name: MovieName\nSeat Number: 5");
}

BOOST_AUTO_TEST_CASE(ReducedTicketDetails) {
        ReducedTicket reducedTicket(2, 30.0, "MovieName2", 8, 0.1);  // 10% discount

        BOOST_CHECK_EQUAL(reducedTicket.getTicketNumber(), 2);
        BOOST_CHECK_CLOSE(reducedTicket.getPrice(), 27.0, 0.001);
        BOOST_CHECK_EQUAL(reducedTicket.getMovieName(), "MovieName2");
        BOOST_CHECK_EQUAL(reducedTicket.getSeatNumber(), 8);
        BOOST_CHECK_CLOSE(reducedTicket.getDiscount(), 0.1, 0.001);

        BOOST_CHECK_EQUAL(reducedTicket.getTicketDetails(),
        "Ticket Details \nTicket Number: 2\nPrice: 27.00\nDiscount: 0.10\nMovie Name: MovieName2\nSeat Number: 8");
}

BOOST_AUTO_TEST_SUITE_END()
