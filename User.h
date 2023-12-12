// User.h

#ifndef USER_H
#define USER_H

#include <string>

class User {
public:
    User(int id, const std::string& username) : userId(id), username(username) {}

    void displayInfo() const;

private:
    int userId;
    std::string username;
};

#endif
