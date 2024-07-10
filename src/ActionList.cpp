#include "../header/ActionList.h"

void ActionList::remove(std::string actionName) {
    for (auto it = actionVector.begin(); it != actionVector.end(); ++it) {
        if ((*it)->getName() == actionName) {
            actionVector.erase(it);
            maxIndex--;
            return;
        }
    }
}