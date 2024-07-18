#pragma once

#include "Action.h"

class AttackAction : public Action {
    private:
     int attackPotency;
    public:
     AttackAction(std::string name = "", const int id = -1, std::string description = "", const int staminaCost = -1, const int attackPotency = -1) 
     : Action(name, id, ATTACK, description, staminaCost), attackPotency(attackPotency) {}
     void setAttackPotency(const int ap) {attackPotency = ap;}
     int getAttackPotency() {return attackPotency;}

};

class AttackBuffAction : public Action {
    private:
     double buffPotency;
    public:
     AttackBuffAction(std::string name = "", const int id = -1, std::string description = "", const int staminaCost = -1, const double buffPotency = -1)
     : Action(name, id, BUFF, description, staminaCost), buffPotency(buffPotency) {}

     void setBuffPotency(const double bp) {buffPotency = bp;}
     double getBuffPotency() const {return buffPotency;}
     
};

class DefenseBuffAction : public Action {
    private:
     double buffPotency;
    public:
     DefenseBuffAction(std::string name = "", const int id = -1, std::string description = "", const int staminaCost = -1, const double buffPotency = -1)
     : Action(name, id, BUFF, description, staminaCost), buffPotency(buffPotency) {}

     void setBuffPotency(const double bp) {buffPotency = bp;}
     double getBuffPotency() const {return buffPotency;}
     
};

class AttackDebuffAction : public Action {
    private:
     double debuffPotency;
    public:
     AttackDebuffAction(std::string name = "", const int id = -1, std::string description = "", const int staminaCost = -1, const double debuffPotency = -1)
     : Action(name, id, DEBUFF, description, staminaCost), debuffPotency(debuffPotency) {}

     void setDebuffPotency(const double dp) {debuffPotency = dp;}
     double getDebuffPotency() const {return debuffPotency;}
     
};

class DefenseDebuffAction : public Action {
    private:
     double debuffPotency;
    public:
     DefenseDebuffAction(std::string name = "", const int id = -1, std::string description = "", const int staminaCost = -1, const double debuffPotency = -1)
     : Action(name, id, DEBUFF, description, staminaCost), debuffPotency(debuffPotency) {}

     void setDebuffPotency(const double dp) {debuffPotency = dp;}
     double getDebuffPotency() const {return debuffPotency;}
     
};

class HealAction : public Action {
    private:
     int healPotency;
    public:
     HealAction(std::string name = "", const int id = -1, std::string description = "", const int staminaCost = -1, const int healPotency = -1) 
     : Action(name, id, ATTACK, description, staminaCost), healPotency(healPotency) {}
     void setHealPotency(const int hp) {healPotency = hp;}
     int getHealPotency() {return healPotency;}
};