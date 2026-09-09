#include <iostream>

#include "Player.hpp"
#include "Zombie.hpp"

int main(){
    Player Udin = Player("udin");
    Zombie zombie = Zombie("zombie", "Normal", 100, 10);
    Udin.displayStatus();
    Udin.takeDamage(110);
    Udin.displayStatus();
    std::cin.get();
    return 0;
}