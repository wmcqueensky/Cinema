//
// Created by Wojciech Mokwiński on 18/01/2024.
//

#include "Snack.h"

Snack::Snack(const std::string& snackName, float price) : snackName(snackName), price(price) {}

std::string Snack::getSnackName() const {
    return snackName;
}

void Snack::setSnackName(const std::string& snackName) {
    this->snackName = snackName;
}

float Snack::getPrice() const {
    return price;
}

void Snack::setPrice(float price) {
    this->price = price;
}
