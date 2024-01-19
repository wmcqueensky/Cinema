//
// Created by Wojciech Mokwiński on 16/01/2024.
//

#include "Movie.h"

#include <utility>

Movie::Movie(std::string movieName, int duration, std::string genre, int ageRestriction)
        : movieName(std::move(movieName)), duration(duration), genre(std::move(genre)), ageRestriction(ageRestriction) {}

std::string Movie::getMovieName() const {
    return movieName;
}

int Movie::getDuration() const {
    return duration;
}

std::string Movie::getGenre() const {
    return genre;
}

int Movie::getAgeRestriction() const {
    return ageRestriction;
}

std::string Movie::getMovieDetails() const {
    return "Movie Details:\n"
           "Movie Name: " + movieName + "\n"
                                        "Duration: " + std::to_string(duration) + " minutes\n"
                                                                                  "Genre: " + genre + "\n"
                                                                                                      "Age Restriction: " + std::to_string(ageRestriction) + "+";
}
