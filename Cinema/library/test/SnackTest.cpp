//
// Created by Wojciech Mokwiński on 18/01/2024.
//

#include <boost/test/unit_test.hpp>
#include "Snack.h"

BOOST_AUTO_TEST_SUITE(SnackTests)

    BOOST_AUTO_TEST_CASE(testSnackInitialization) {
        Snack snack("Chips", 2.5);

        BOOST_CHECK_EQUAL(snack.getSnackName(), "Chips");
        BOOST_CHECK_CLOSE(snack.getPrice(), 2.5, 0.0001);
    }

    BOOST_AUTO_TEST_CASE(testSetSnackName) {
        Snack snack("Soda", 1.75);
        snack.setSnackName("Cola");

        BOOST_CHECK_EQUAL(snack.getSnackName(), "Cola");
    }

    BOOST_AUTO_TEST_CASE(testSetPrice) {
        Snack snack("Popcorn", 3.0);
        snack.setPrice(3.5);

        BOOST_CHECK_CLOSE(snack.getPrice(), 3.5, 0.0001);
    }

BOOST_AUTO_TEST_SUITE_END()
