// Book.cpp

#include <iostream>
#include "Book.h"

void Book::displayInfo() const {
    std::cout << "Book ID: " << bookId << "\n";
    std::cout << "Title: " << title << "\n";
    std::cout << "Author: " << author << "\n";
}
