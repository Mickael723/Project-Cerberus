#pragma once

#include "Action.h"
#include "Humanoid.h"

class AttackAction : public Action {
    private:
     int attackPotency;
     int staminaCost;
    public:
     AttackAction(std::string name = "", const int id = -1, std::string description = "", const int attackPotency = -1, const int staminaCost = -1) 
     : Action(name, id, ATTACK, description), attackPotency(attackPotency), staminaCost(staminaCost) {}
     virtual void performAction(Humanoid& target) override;
     void damageTarget(Humanoid& target);

     void setAttackPotency(const int ap) {attackPotency = ap;}
     void setStaminaCost(const int sc) {staminaCost = sc;}
     int getAttackPotency() {return attackPotency;}
     int getStaminaCost() {return staminaCost;}

};

class BuffAction : public Action {

};