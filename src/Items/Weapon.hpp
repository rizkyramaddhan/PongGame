#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
    private :
        std::string name;
        int damage;
        int noiseLevel;
        int ammo;

    public :

        Weapon(std::string name, int damage, int noiseLevel);

        std::string getName() const;
        int getDamage() const;
        int getNoiseLevel() const;
        int getAmmo() const;

        void setName(std::string name);
        void setDamage(int damage);
        void setNoiseLevel(int noiseLevel);
        void setAmmo(int ammo);

        bool use();
        
};

#endif