// Book.h

#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
public:
    Book(int id, const std::string& title, const std::string& author)
        : bookId(id), title(title), author(author) {}

    void displayInfo() const;

private:
    int bookId;
    std::string title;
    std::string author;
};

#endif
