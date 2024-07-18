#pragma once

enum EffectType {BLOCKING, ATTACK_UP, ATTACK_DOWN, DEFENSE_UP, DEFENSE_DOWN};

class CombatantEffects{
    private:
     bool isBlocking = false;
     bool isAttackBuff = false;
     bool isAttackDebuff = false;
     bool isDefenseBuff = false;
     bool isDefenseDebuff = false;

    public:
     
     void setBlock(const bool b) {isBlocking = b;}
     void setAttackBuff(const bool b) {isAttackBuff = b;}
     void setAttackDebuff(const bool b) {isAttackDebuff = b;}
     void setDefenseBuff(const bool b) {isDefenseBuff = b;}
     void setDefenseDebuff(const bool b) {isDefenseDebuff = b;}

     bool checkBlocking() const {return isBlocking;}
     bool checkAttackBuff() const {return isAttackBuff;}
     bool checkAttackDebuff() const {return isAttackDebuff;}
     bool checkDefenseBuff() const {return isDefenseBuff;}
     bool checkDefenseDebuff() const {return isDefenseDebuff;}
};