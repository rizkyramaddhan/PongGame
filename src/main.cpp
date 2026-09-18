#include <iostream>

#include "./Entities/Player.hpp"
#include "./Entities/Zombie.hpp"
#include "./Items/Weapon.hpp"

int main(){
    Weapon M4A1 = Weapon("M4A1", 50, 100);
    M4A1.setAmmo(30);
    if(M4A1.use() == true) std::cout << "M4A1 used\n";
    std::cin.get();
    return 0;
}