#include "../header/ActionList.h"

void ActionList::remove(Action *action) {
    for (auto it = actionVector.begin(); it != actionVector.end(); ++it) {
        if (*it == action) {
            actionVector.erase(it);
            maxIndex--;
            return;
        }
    }
}