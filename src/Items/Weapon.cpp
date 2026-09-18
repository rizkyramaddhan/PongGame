#include "Weapon.hpp"

Weapon::Weapon(std::string name, int damage, int noiseLevel){
    this->name = name;
    this->damage = damage;
    this->noiseLevel = noiseLevel;
    this->ammo = 0;
}

std::string Weapon::getName() const{
    return this->name;
}
int Weapon::getDamage() const{
    return this->damage;
}
int Weapon::getNoiseLevel() const{
    return this->noiseLevel;
}
int Weapon::getAmmo() const{
    return this->ammo;
}

void Weapon::setName(std::string name){
    this->name = name;
}
void Weapon::setDamage(int damage){
    this->damage = damage;
}
void Weapon::setNoiseLevel(int noiseLevel){
    this->noiseLevel = noiseLevel;
}
void Weapon::setAmmo(int ammo){
    this->ammo = ammo;
}

bool Weapon::use(){
    if(this->ammo > 0){
        this->ammo -= 1;
        return true;
    }else{
        return false;
    }
}




