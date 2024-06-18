#include "../header/ActionTimer.h"
#include <chrono>
#include <thread>

void ActionTimer::progressBar() {
    while(!readyToAct() && !getTimerStopped()) {
        timerProgress++;
        std::this_thread::sleep_for(std::chrono::milliseconds(timerSpeed));
    }

}

void ActionTimer::pauseBar() {
    setTimerStopped(true);
}

void ActionTimer::drainBar() {
    while(timerProgress != 0 && !getTimerStopped()) {
        timerProgress--;
        std::this_thread::sleep_for(std::chrono::milliseconds(timerDrain));
    }
}

void ActionTimer::resetBar() {
    timerProgress = 0;
}