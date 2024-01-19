#include <iostream>
#include "NormalTicket.h"

int main() {
    NormalTicket normalTicket(1, 20.0, "MovieName", 5);
    std::cout << normalTicket.getTicketDetails();
    return 0;
}
