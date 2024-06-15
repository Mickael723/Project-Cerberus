#pragma once

class ActionTimer {
    private:
     int timerSpeed = 0;
     int maxProgress = 0;
     int timerProgress = 0;
    public:
     ActionTimer(int ts = 0, int mp = 0) {timerSpeed = ts, maxProgress = mp;}
     bool readyToAct() {return timerProgress == maxProgress;}
     void progressBar();
     void pauseBar();
     void setTimerSpeed(int ts) {timerSpeed = ts;}
     void setMaxProgress(int ms) {maxProgress = ms;}
     void setTimerProgress(int tp) {timerProgress = tp;}
     int getTimerSpeed() {return timerSpeed;}
     int getMaxProgress() {return maxProgress;}
     int getTimerProgress() {return timerProgress;}

};