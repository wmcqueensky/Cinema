//
// Created by Wojciech Mokwiński on 16/01/2024.
//

#include <boost/test/unit_test.hpp>
#include "Movie.h"

BOOST_AUTO_TEST_SUITE(MovieTests)

    BOOST_AUTO_TEST_CASE(testMovieConstructorAndAccessors) {
        Movie movie("Inception", 148, "Sci-Fi", 12);

        BOOST_CHECK_EQUAL(movie.getMovieName(), "Inception");
        BOOST_CHECK_EQUAL(movie.getDuration(), 148);
        BOOST_CHECK_EQUAL(movie.getGenre(), "Sci-Fi");
        BOOST_CHECK_EQUAL(movie.getAgeRestriction(), 12);
    }

    BOOST_AUTO_TEST_CASE(testMovieDetails) {
        Movie movie("The Shawshank Redemption", 142, "Drama", 16);

        std::string expectedDetails =
                "Movie Details:\n"
                "Movie Name: The Shawshank Redemption\n"
                "Duration: 142 minutes\n"
                "Genre: Drama\n"
                "Age Restriction: 16+";

        BOOST_CHECK_EQUAL(movie.getMovieDetails(), expectedDetails);
    }

BOOST_AUTO_TEST_SUITE_END()