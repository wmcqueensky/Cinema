//
// Created by Wojciech Mokwiński on 16/01/2024.
//

#ifndef CINEMA_MOVIE_H
#define CINEMA_MOVIE_H

#include <string>

class Movie {
private:
    std::string movieName;
    int duration;
    std::string genre;
    int ageRestriction;

public:
    Movie(std::string movieName, int duration, std::string genre, int ageRestriction);

    std::string getMovieName() const;
    int getDuration() const;
    std::string getGenre() const;
    int getAgeRestriction() const;
    std::string getMovieDetails() const;
};

#endif //CINEMA_MOVIE_H
