//
// Created by Wojciech Mokwiński on 16/01/2024.
//

#include <boost/test/unit_test.hpp>
#include "Room2D.h"
#include "Room3D.h"

BOOST_AUTO_TEST_SUITE(RoomTests)

BOOST_AUTO_TEST_CASE(testRoom2DDetails) {
        Room2D room2D(2);
        BOOST_CHECK_EQUAL(room2D.getRoomNumber(), 2);

        BOOST_CHECK_EQUAL(room2D.getCapacity(), 40);
        BOOST_CHECK_EQUAL(room2D.getAvailableSeats().size(), 40);

        std::unique_ptr<Movie> movie = std::make_unique<Movie>("The Matrix", 120, "Action", 15);
        room2D.setMovie(movie);
        BOOST_CHECK_EQUAL(room2D.getMovie()->getMovieName(), "The Matrix");

        std::string expectedDetails = "2D Room Details:\nRoom Number: 2\nCapacity: 40\nAvailable Seats: 40\nMovie: The Matrix";
        BOOST_CHECK_EQUAL(room2D.getRoomDetails(), expectedDetails);
    }

 BOOST_AUTO_TEST_CASE(testRoom3DDetails) {
        Room3D room3D(3);
        BOOST_CHECK_EQUAL(room3D.getRoomNumber(), 3);
        BOOST_CHECK_EQUAL(room3D.getCapacity(), 40);
        BOOST_CHECK_EQUAL(room3D.getAvailableSeats().size(), 40);
        BOOST_CHECK_EQUAL(room3D.getAdditionalFee(), 10);

        std::unique_ptr<Movie> movie = std::make_unique<Movie>("Bruh", 120, "Comedy", 18);
        room3D.setMovie(movie);
        BOOST_CHECK_EQUAL(room3D.getMovie()->getMovieName(), "Bruh");

        std::string expectedDetails = "3D Room Details:\nRoom Number: 3\nCapacity: 40\nAdditional Fee: 10.00\nAvailable Seats: 40\nMovie: Bruh";
        BOOST_CHECK_EQUAL(room3D.getRoomDetails(), expectedDetails);
 }



BOOST_AUTO_TEST_SUITE_END()
