#pragma once
#include "Humanoid.h"

enum ACTION_CATEGORY {ATTACK, DEFEND, BUFF, DEBUFF, SPECIAL, UNKNOWN};

class Action : public Entity {
    private:
     ACTION_CATEGORY actionCategory;
     std::string description;
    public:
     virtual void performAction(Humanoid& target) = 0;
     //getters and setters
     Action(const std::string& name = "", const int id = -1, const ACTION_CATEGORY actionCategory = UNKNOWN, const std::string& description = "") 
     : Entity(name, id), actionCategory(actionCategory), description(description) {}
     void setActionCategory(ACTION_CATEGORY actionCategory) {this->actionCategory = actionCategory;}
     void setDescription(std::string description) {this->description = description;}
     ACTION_CATEGORY getActionCategory() {return actionCategory;}
     std::string getDescription() {return description;}

};