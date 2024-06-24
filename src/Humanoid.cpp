#include "../header/Humanoid.h"

void Humanoid::updateIsAlive() {
    if (checkIsAlive() == false) {setIsAlive(false);}
    else {setIsAlive(true);}
}

void Humanoid::constructDefaultPersonaltimer() {
    constructPersonalTimer(1000, 500, 10);
}

void Humanoid::constructPersonalTimer(int timerSpeed, int timerDrain, int maxProgress) {
    if (getInBattle() == true) {
        personalTimer = new ActionTimer(timerSpeed, timerDrain, maxProgress);
    }
}

void Humanoid::destroyPersonalTimer() {
    if (getInBattle() == false && personalTimer != nullptr) {
        delete personalTimer;
        personalTimer = nullptr;
    }
}

