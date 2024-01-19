//
// Created by Wojciech Mokwiński on 18/01/2024.
//

#ifndef CINEMA_SNACK_H
#define CINEMA_SNACK_H

#include <string>

class Snack {
private:
    std::string snackName;
    float price;

public:
    Snack(const std::string& snackName, float price);

    std::string getSnackName() const;
    void setSnackName(const std::string& snackName);

    float getPrice() const;
    void setPrice(float price);
};

#endif //CINEMA_SNACK_H
