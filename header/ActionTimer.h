#pragma once

class ActionTimer {
    private:
     int timerSpeed = 0; //milliseconds
     int timerDrain = 0; //milliseconds
     int maxProgress = 0;
     int timerProgress = 0;
     bool timerStopped = false;
     bool actionTaken = false;
    public:
     ActionTimer(int ts = 0, int td = 0, int mp = 0) {timerSpeed = ts, timerDrain = td, maxProgress = mp;}
     bool readyToAct() {return timerProgress == maxProgress;}
     void progressBar();
     void drainBar();
     void pauseBar();
     void resetBar();
     void setTimerSpeed(const int ts) {timerSpeed = ts;}
     void setTimerDrain(const int td) {timerDrain = td;}
     void setMaxProgress(const int ms) {maxProgress = ms;}
     void setTimerProgress(const int tp) {timerProgress = tp;}
     void setTimerStopped(const bool t) {timerStopped = t;}
     void setActionTaken(const bool t) {actionTaken = t;}
     const int getTimerSpeed() {return timerSpeed;}
     const int getTimerDrain() {return timerDrain;}
     const int getMaxProgress() {return maxProgress;}
     const int getTimerProgress() {return timerProgress;}
     const bool getTimerStopped() {return timerStopped;}
     const bool getActionTaken() {return actionTaken;}

};