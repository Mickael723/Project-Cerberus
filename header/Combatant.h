#pragma once

#include "Entity.h"
#include "CombatantEffects.h"
#include "BattleStats.h"
#include "ActionList.h"

class Combatant : public Entity{
    private:
     int healthPoints;
     int maxHealthPoints;
     bool inBattle = false;
     bool isAlive = false;
     CombatantEffects personalEffects;
     BattleStats personalStats;
     ActionList personalActionList;

    public:
     Combatant(std::string name = "", int id = -1, int hp = 0, int maxHp = 0) : Entity(name,id), healthPoints(hp), maxHealthPoints(maxHp) {}
     bool checkIsAlive() {return healthPoints > 0;}
     void updateIsAlive(); // updates the boolean value of isAlive based on checkIsAlive
     CombatantEffects& configurePersonalEffects() {return personalEffects;}
     // These are hold overs vvvvv
    //  void constructPersonalTimer(int timerSpeed, int timerDrain, int maxProgress); // constructs personalTimer based on inBattle
    //  void constructDefaultPersonaltimer();
    //  void destroyPersonalTimer(); // destroys personalTimer and sets it to nullptr based on inBattle
     
     // getters and setters
     void setHealthPoints(int hp) {healthPoints = hp;}
     void setMaxHealthPoints(int maxHp) {maxHealthPoints = maxHp;}
     void setInBattle(bool tf) {inBattle = tf;}
     void setIsAlive(bool tf) {isAlive = tf;}
     void setPersonalActionList(ActionList actionList) {personalActionList = actionList;}

     int getHealthPoints() const {return healthPoints;}
     int getMaxHealthPoints() const {return maxHealthPoints;}
     bool getInBattle() const {return inBattle;}
     bool getIsAlive() const {return isAlive;}
     ActionList getPersonalActionList() {return personalActionList;}
     CombatantEffects getPersonalEffects() const {return personalEffects;}
     BattleStats getPersonalStats() const {return personalStats;}
};