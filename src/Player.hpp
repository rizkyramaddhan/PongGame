#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Zombie;

class Player {
    private :
        std::string name;
        int damage;
        int hp;
        int maxHp;
        int stamina;
        int maxStamina;
        bool isBleeding;
        int infectionLevel;
        bool alive;

    public :
        // Constructor
        Player(std::string name);

        // Getters & Status Check
        std::string getName();
        int getHp() const;
        int getMaxHp() const;
        int getStamina() const;
        int getMaxStamina() const;
        bool getIsBleeding() const;
        int getInfectionLevel() const;
        bool getAlive() const;

        // Setters
        void setName(std::string name) const;
        void setHp(int hp) const;
        void setMaxHp(int maxHp) const;
        void setStamina(int stamina) const;
        void setMaxStamina(int maxStamina) const;
        void setIsBleeding(bool isBleeding) const;
        void setInfectionLevel(int infectionLevel) const;
        void setAlive(bool alive) const;

        void isAlive();
        void takeDamage(int amount);
        void attack(Zombie & target);
        void prosessTurnTick();
        void healBleeding();
        void displayStatus();

};

#endif