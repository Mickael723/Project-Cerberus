#pragma once

#include "ActionTemplates.h"
#include <vector>

class ActionList {
    private:
     unsigned maxIndex = 0;
     std::vector<Action*> actionVector;

    public:
    //  ~ActionList() {
    //     for (Action* action : actionVector) {
    //         delete action;
    //     }
    //  }
     void push_back(Action *action) {actionVector.push_back(action);
                                     maxIndex++;}
     Action*at(unsigned i) {return actionVector.at(i);}
     void remove(Action *action);
     // getters and setters
     std::vector<Action*> getActionVector() {return actionVector;}
     unsigned getMaxIndex() {return maxIndex;}
     void setMaxIndex(unsigned i) {maxIndex = i;}

};