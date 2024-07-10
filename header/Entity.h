#pragma once

#include <string>

class Entity {
    private:
     std::string name;
     int id;
    public:
     Entity(const std::string& n = "", const int i = -1) : name(n), id(i) {}
     void setName(const std::string& n) {name = n;}
     void setID(const int i) {id = i;}
     std::string getName() {return name;}
     int getID() {return id;}
};