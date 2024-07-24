#pragma once

#include "Entity.h"
#include "CombatantEffects.h"
#include "BattleStats.h"
#include "ActionList.h"

class Combatant : public Entity{
    private:
     int healthPoints;
     int maxHealthPoints;
     int staminaPoints;
     int maxStaminaPoints;
     bool inBattle = false;
     bool isAlive = false;
     CombatantEffects personalEffects;
     BattleStats personalStats;
     ActionList personalActionList;

    public:
     Combatant(std::string name = "", int id = -1, int maxHp = 0, int maxStam = 0) : Entity(name,id), healthPoints(maxHp), maxHealthPoints(maxHp), staminaPoints(maxStam), maxStaminaPoints(maxStam) {}
     bool checkIsAlive() {return healthPoints > 0;}
     void updateIsAlive(); // updates the boolean value of isAlive based on checkIsAlive
     CombatantEffects& configurePersonalEffects() {return personalEffects;}
     BattleStats& configureBattleStats() {return personalStats;}
     
     // getters and setters
     void setHealthPoints(int hp) {healthPoints = hp;}
     void setMaxHealthPoints(int maxHp) {maxHealthPoints = maxHp;}
     void setStaminaPoints(int stam) {staminaPoints = stam;}
     void setMaxStaminaPoints(int maxStam) {maxStaminaPoints = maxStam;}
     void setInBattle(bool tf) {inBattle = tf;}
     void setIsAlive(bool tf) {isAlive = tf;}
     void setPersonalActionList(ActionList actionList) {personalActionList = actionList;}

     int getHealthPoints() const {return healthPoints;}
     int getMaxHealthPoints() const {return maxHealthPoints;}
     int getStaminaPoints() const {return staminaPoints;}
     int getMaxStaminaPoints() const {return maxStaminaPoints;}
     bool getInBattle() const {return inBattle;}
     bool getIsAlive() const {return isAlive;}
     ActionList getPersonalActionList() {return personalActionList;}
     CombatantEffects getPersonalEffects() const {return personalEffects;}
     BattleStats getPersonalStats() const {return personalStats;}
};