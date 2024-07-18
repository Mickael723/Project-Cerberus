#pragma once

class BattleStats {
    private:
     double strength = 0.0;
     double armor = 0.0;

    public:
     void setstrength(const double s) {strength = s;}
     void setarmour(const double ar) {armor = ar;}

     double getstrength() const {return strength;}
     double getarmour() const {return armor;}
};