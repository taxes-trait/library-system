// User.cpp

#include <iostream>
#include "User.h"

void User::displayInfo() const {
    std::cout << "User ID: " << userId << "\n";
    std::cout << "Username: " << username << "\n";
}
