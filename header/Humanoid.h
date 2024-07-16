#pragma once

#include "Entity.h"
#include "HumanoidEffects.h"
#include "BattleStats.h"
#include "ActionList.h"
#include "ActionTimer.h"

class Humanoid : public Entity{
    private:
     int healthPoints;
     int maxHealthPoints;
     bool inBattle = false;
     bool isAlive = false;
     HumanoidEffects personalEffects;
     BattleStats personalStats;
     ActionList personalActionList;
     ActionTimer* personalTimer = nullptr;
    public:
     Humanoid(std::string name = "", int id = -1, int hp = 0, int maxHp = 0) : Entity(name,id), healthPoints(hp), maxHealthPoints(maxHp) {}
     bool checkIsAlive() {return healthPoints > 0;}
     void updateIsAlive(); // updates the boolean value of isAlive based on checkIsAlive
     void constructPersonalTimer(int timerSpeed, int timerDrain, int maxProgress); // constructs personalTimer based on inBattle
     void constructDefaultPersonaltimer();
     void destroyPersonalTimer(); // destroys personalTimer and sets it to nullptr based on inBattle
     HumanoidEffects& configurePersonalEffects() {return personalEffects;}
     // getters and setters
     void setHealthPoints(int hp) {healthPoints = hp;}
     void setMaxHealthPoints(int maxHp) {maxHealthPoints = maxHp;}
     void setInBattle(bool tf) {inBattle = tf;}
     void setIsAlive(bool tf) {isAlive = tf;}
     void setPersonalTimer(ActionTimer* at) {personalTimer = at;}
     void setPersonalActionList(ActionList actionList) {personalActionList = actionList;}

     int getHealthPoints() const {return healthPoints;}
     int getMaxHealthPoints() const {return maxHealthPoints;}
     bool getInBattle() const {return inBattle;}
     bool getIsAlive() const {return isAlive;}
     ActionList getPersonalActionList() {return personalActionList;}
     ActionTimer* getPersonalTimer() const {return personalTimer;}
     HumanoidEffects getPersonalEffects() const {return personalEffects;}
     BattleStats getPersonalStats() const {return personalStats;}
};