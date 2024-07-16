#pragma once

class BattleStats {
    private:
     double attackStrength = 0.0;
     double incomingDefense = 0.0;
    public:
     void setAttackStrength(const double as) {attackStrength = as;}
     void setIncomingDefense(const double idf) {incomingDefense = idf;}

     double getAttackStrength() const {return attackStrength;}
     double getIncomingDefense() const {return incomingDefense;}
};