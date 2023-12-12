// Author.cpp

#include <iostream>
#include "Author.h"

void Author::displayInfo() const {
    std::cout << "Author ID: " << authorId << "\n";
    std::cout << "Name: " << name << "\n";
}
