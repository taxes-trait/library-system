// Author.h

#ifndef AUTHOR_H
#define AUTHOR_H

#include <string>

class Author {
public:
    Author(int id, const std::string& name) : authorId(id), name(name) {}

    void displayInfo() const;

private:
    int authorId;
    std::string name;
};

#endif
