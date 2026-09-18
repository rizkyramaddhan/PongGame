#include <iostream>

#include "./Entities/Player.hpp"
#include "./Entities/Zombie.hpp"
#include "./Items/Weapon.hpp"
#include "./Items/Inventory.hpp"

int main(){
    Player player = Player("Player");
    Weapon M4A1 = Weapon("M4A1", 50, 100);
    Weapon AK47 = Weapon("AK47", 50, 100);
    Weapon Dagger = Weapon("Dagger", 50, 100);
    Inventory inventory = Inventory();
    player.getInventory().addWeapon(M4A1);
    player.getInventory().displayInventory();
    std::cin.get();
    return 0;
}