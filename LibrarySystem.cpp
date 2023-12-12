// LibrarySystem.cpp

#include "Book.h"
#include "Author.h"
#include "User.h"

int main() {
    // Create books
    Book book1(1, "The C++ Programming Language", "Bjarne Stroustrup");
    Book book2(2, "Effective C++", "Scott Meyers");

    // Create authors
    Author author1(101, "Bjarne Stroustrup");
    Author author2(102, "Scott Meyers");

    // Create users
    User user1(1001, "Alice");
    User user2(1002, "Bob");

    // Display book information
    std::cout << "Book Information:\n";
    book1.displayInfo();
    std::cout << "\n";
    book2.displayInfo();

    // Display author information
    std::cout << "\nAuthor Information:\n";
    author1.displayInfo();
    std::cout << "\n";
    author2.displayInfo();

    // Display user information
    std::cout << "\nUser Information:\n";
    user1.displayInfo();
    std::cout << "\n";
    user2.displayInfo();

    return 0;
}
