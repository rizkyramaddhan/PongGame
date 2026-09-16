#include <iostream>

#include "Core/Player.hpp"
#include "Core/Zombie.hpp"

int main(){
    Player player = Player("player");
    Zombie zombie = Zombie("zombie", "normal", 100, 10);
    while(zombie.getAlive() == true && player.getAlive() == true){
        player.attack(zombie);
        zombie.attack(player);
        player.prosessTurnTick();
        if(player.getIsBleeding() == true){
            player.healBleeding();
        }
    }
    std::cin.get();
    return 0;
}