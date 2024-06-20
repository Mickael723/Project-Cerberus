#include <string>

class Entity {
    private:
     std::string name;
     int id;
    public:
     Entity(std::string n = "", int i = -1) {name = n, id = i;}
     void setName(std::string n) {name = n;}
     void setID(int i) {id = i;}
     std::string getName() {return name;}
     int getID() {return id;}
};