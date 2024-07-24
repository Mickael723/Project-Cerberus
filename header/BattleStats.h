#pragma once

class BattleStats {
    private:
     double strength;
     double armor;
     int level;

     double modifiedStrengthMultiplier = 0;
     double modifiedArmorMultiplier = 0;
    
    public:
     BattleStats(const double strength = 0, const double armor = 0, const int level = 0) : strength(strength), armor(armor), level(level) {} 
     void setStrength(const double s) {strength = s;}
     void setArmor(const double ar) {armor = ar;}
     void setLevel(const int l) {level = l;}
     void setModifiedStrengthMultiplier(const double ms) {modifiedStrengthMultiplier = ms;}
     void setModifiedArmorMultiplier(const double ma) {modifiedArmorMultiplier = ma;}

     double getStrength() const {return strength;}
     double getArmor() const {return armor;}
     int getLevel() const {return level;}
     double getModifiedStrengthMultiplier() const {return modifiedStrengthMultiplier;}
     double getModifiedArmorMultiplier() const {return modifiedArmorMultiplier;}
};