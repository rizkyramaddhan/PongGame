#ifndef PLAYER_H
#define PLAYER_H

#include <string>

#include "../Items/Inventory.hpp"

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
        Inventory inventory;

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
        void setName(std::string name) ;
        void setHp(int hp) ;
        void setMaxHp(int maxHp) ;
        void setStamina(int stamina) ;
        void setMaxStamina(int maxStamina) ;
        void setIsBleeding(bool isBleeding) ;
        void setInfectionLevel(int infectionLevel) ;
        void setAlive(bool alive) ;

        void isAlive();
        void takeDamage(int amount);
        void attack(Zombie & target);
        void prosessTurnTick();
        void healBleeding();
        void displayStatus();
        Inventory & getInventory();

};

#endif