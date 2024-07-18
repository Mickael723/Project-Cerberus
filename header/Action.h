#pragma once
#include "Combatant.h"

enum ACTION_CATEGORY {ATTACK, DEFEND, BUFF, DEBUFF, HEAL, UNKNOWN};

class Combatant;

class Action : public Entity {
    private:
     ACTION_CATEGORY actionCategory;
     std::string description;
     int staminaCost;
    public:
     virtual void performAction(Combatant& target) = 0;
     //getters and setters
     Action(const std::string& name = "", const int id = -1, const ACTION_CATEGORY actionCategory = UNKNOWN, const std::string& description = "", const int staminaCost = -1) 
     : Entity(name, id), actionCategory(actionCategory), description(description), staminaCost(staminaCost) {}
     void setActionCategory(ACTION_CATEGORY actionCategory) {this->actionCategory = actionCategory;}
     void setDescription(std::string description) {this->description = description;}
     void setStaminaCost(const int staminaCost) {this->staminaCost = staminaCost;}

     ACTION_CATEGORY getActionCategory() {return actionCategory;}
     std::string getDescription() {return description;}
     int getStaminaCost() const {return staminaCost;}

};