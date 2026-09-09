#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
    private :
        std::string name;
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
        int getHp();
        int getMaxHp();
        int getStamina();
        int getMaxStamina();
        bool getIsBleeding();
        int getInfectionLevel();
        bool getAlive();

        // Setters
        void setName(std::string name);
        void setHp(int hp);
        void setMaxHp(int maxHp);
        void setStamina(int stamina);
        void setMaxStamina(int maxStamina);
        void setIsBleeding(bool isBleeding);
        void setInfectionLevel(int infectionLevel);
        void setAlive(bool alive);

        void isAlive();
        void takeDamage(int amount);
        void prosessTurnTick();
        void healBleeding();
        void displayStatus();

};

#endif