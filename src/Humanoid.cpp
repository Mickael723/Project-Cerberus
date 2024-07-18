#include "../header/Combatant.h"

void Combatant::updateIsAlive() {
    if (checkIsAlive() == false) {setIsAlive(false);}
    else {setIsAlive(true);}
}

