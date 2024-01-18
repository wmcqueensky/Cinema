//
// Created by Wojciech Mokwiński on 16/01/2024.
//

#include <boost/test/unit_test.hpp>
#include "Seat.h"

BOOST_AUTO_TEST_SUITE(SeatTests)

BOOST_AUTO_TEST_CASE(testSeatConstructorAndAccessors) {
        Seat seat(1, 2);

        BOOST_CHECK_EQUAL(seat.getSeatNumber(), 1);
        BOOST_CHECK_EQUAL(seat.getRow(), 2);
        BOOST_CHECK_EQUAL(seat.isBooked(), false);
}

BOOST_AUTO_TEST_CASE(testBookSeat) {
        Seat seat(2, 2);

        BOOST_CHECK_EQUAL(seat.isBooked(), false);

        seat.bookSeat();

        BOOST_CHECK_EQUAL(seat.isBooked(), true);
}

BOOST_AUTO_TEST_CASE(testUnbookSeat) {
        Seat seat(3, 2);

        seat.bookSeat();
        BOOST_CHECK_EQUAL(seat.isBooked(), true);

        seat.unbookSeat();

        BOOST_CHECK_EQUAL(seat.isBooked(), false);
}

    BOOST_AUTO_TEST_CASE(testMultipleSeatsOnSameRow) {
        Seat seat1(1, 3);
        Seat seat2(2, 3);
        Seat seat3(3, 3);

        BOOST_CHECK_EQUAL(seat1.getRow(), 3);
        BOOST_CHECK_EQUAL(seat2.getRow(), 3);
        BOOST_CHECK_EQUAL(seat3.getRow(), 3);

        BOOST_CHECK_EQUAL(seat1.isBooked(), false);
        BOOST_CHECK_EQUAL(seat2.isBooked(), false);
        BOOST_CHECK_EQUAL(seat3.isBooked(), false);
    }

BOOST_AUTO_TEST_SUITE_END()