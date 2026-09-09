#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include "Player.hpp"

class Zombie{
    private :
        std::string name;
        std::string type;
        int hp;
        int maxHp;
        int damage;
        bool alive;

    public :
        Zombie(std::string name, std::string type, int maxHp, int damage);

        std::string getName();
        std::string getType();
        int getHp();
        int getMaxHp();
        int getDamage();
        int getAlive();

        void setName(std::string name);
        void setType(std::string type);
        void setHp(int hp);
        void setMaxHp(int maxHp);
        void setDamage(int damage);
        void setAlive(bool alive);

        void displayStatus();
        void attack(Player & target);
        void takeDamage(int amount);
        void isAlive();

    
};

#endif