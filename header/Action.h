#pragma once
#include "Entity.h"

enum ACTION_CATEGORY {TECHNIQUE, FINISHER, REVERSAL, SUPER, UNKNOWN};

class Action : public Entity {
    private:
     ACTION_CATEGORY actionCategory;
     std::string description;
    public:
     virtual void performAction() = 0;
     //getters and setters
     Action(std::string name = "", int id = -1, ACTION_CATEGORY actionCategory = UNKNOWN, std::string description = "") 
     : Entity(name, id), actionCategory(actionCategory), description(description) {}
     void setActionCategory(ACTION_CATEGORY actionCategory) {this->actionCategory = actionCategory;}
     void setDescription(std::string description) {this->description = description;}
     ACTION_CATEGORY getActionCategory() {return actionCategory;}
     std::string getDescription() {return description;}

};