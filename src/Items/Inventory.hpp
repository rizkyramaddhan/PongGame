#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include <iostream>
#include "Weapon.hpp"

class Inventory{
    private :
        std::vector<Weapon> inventory;
        int equipedIndex;

    public :
        Inventory();

        void addWeapon(const Weapon & weapon);
        void displayInventory() const;
        bool equipWeapon(int index);

        Weapon* getEquippedWeapon();


};

#endif