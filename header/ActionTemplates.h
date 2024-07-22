#pragma once

#include "Action.h"

class AttackAction : public Action {
    private:
     int attackPotency;
    public:
     AttackAction(std::string name = "", const int id = -1, std::string description = "", const int staminaCost = -1, const int attackPotency = -1) 
     : Action(name, id, ATTACK, description, staminaCost), attackPotency(attackPotency) {}
     bool operator==(const AttackAction& other) const {
        return getID() == other.getID();
     }
     void setAttackPotency(const int ap) {attackPotency = ap;}
     int getAttackPotency() {return attackPotency;}

};

class AttackBuffAction : public Action {
    private:
     double buffPotency;
    public:
     AttackBuffAction(std::string name = "", const int id = -1, std::string description = "", const int staminaCost = -1, const double buffPotency = -1)
     : Action(name, id, BUFF, description, staminaCost), buffPotency(buffPotency) {}
     bool operator==(const AttackBuffAction& other) const {
        return getID() == other.getID();
     }
     void setBuffPotency(const double bp) {buffPotency = bp;}
     double getBuffPotency() const {return buffPotency;}
     
};

class DefenseBuffAction : public Action {
    private:
     double buffPotency;
    public:
     DefenseBuffAction(std::string name = "", const int id = -1, std::string description = "", const int staminaCost = -1, const double buffPotency = -1)
     : Action(name, id, BUFF, description, staminaCost), buffPotency(buffPotency) {}
     bool operator==(const DefenseBuffAction& other) const {
        return getID() == other.getID();
     }
     void setBuffPotency(const double bp) {buffPotency = bp;}
     double getBuffPotency() const {return buffPotency;}
     
};

class AttackDebuffAction : public Action {
    private:
     double debuffPotency;
    public:
     AttackDebuffAction(std::string name = "", const int id = -1, std::string description = "", const int staminaCost = -1, const double debuffPotency = -1)
     : Action(name, id, DEBUFF, description, staminaCost), debuffPotency(debuffPotency) {}
     bool operator==(const AttackDebuffAction& other) const {
        return getID() == other.getID();
     }
     void setDebuffPotency(const double dp) {debuffPotency = dp;}
     double getDebuffPotency() const {return debuffPotency;}
     
};

class DefenseDebuffAction : public Action {
    private:
     double debuffPotency;
    public:
     DefenseDebuffAction(std::string name = "", const int id = -1, std::string description = "", const int staminaCost = -1, const double debuffPotency = -1)
     : Action(name, id, DEBUFF, description, staminaCost), debuffPotency(debuffPotency) {}
     bool operator==(const DefenseDebuffAction& other) const {
        return getID() == other.getID();
     }
     void setDebuffPotency(const double dp) {debuffPotency = dp;}
     double getDebuffPotency() const {return debuffPotency;}
     
};

class HealAction : public Action {
    private:
     int healPotency;
    public:
     HealAction(std::string name = "", const int id = -1, std::string description = "", const int staminaCost = -1, const int healPotency = -1) 
     : Action(name, id, ATTACK, description, staminaCost), healPotency(healPotency) {}
     bool operator==(const HealAction& other) const {
        return getID() == other.getID();
     }
     void setHealPotency(const int hp) {healPotency = hp;}
     int getHealPotency() {return healPotency;}
};