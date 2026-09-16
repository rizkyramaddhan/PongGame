#include <iostream>

#include "Zombie.hpp"
#include "Player.hpp"

// CONSTRUCTOR
Zombie::Zombie(std::string name, std::string type, int maxHp, int damage){
    this->name = name;
    this->type = type;
    this->hp = maxHp;
    this->maxHp = maxHp;
    this->damage = damage;
}

// GETTER
std::string Zombie::getName(){
    return this->name;
}
std::string Zombie::getType(){
    return this->type;
}
int Zombie::getHp(){
    return this->hp;
}
int Zombie::getMaxHp(){
    return this->maxHp;
}
int Zombie::getDamage(){
    return this->damage;
}
int Zombie::getAlive(){
    return this->alive;
}

// SETTER
void Zombie::setName(std::string name){
    this->name = name;
}
void Zombie::setType(std::string type){
    this->type = type;
}
void Zombie::setHp(int hp){
    this->hp = hp;
}
void Zombie::setMaxHp(int maxHp){
    this->maxHp = maxHp;
}
void Zombie::setDamage(int damage){
    this->damage = damage;
}
void Zombie::setAlive(bool alive){
    this->alive = alive;
}

// Main Function
void Zombie::isAlive(){
    if(this->hp > 0){
        setAlive(true);
    }else{
        setHp(0);
        setAlive(false);
    }
}
void Zombie::displayStatus(){
    std::cout << "Zombie Name : " << getName() << std::endl;
    std::cout << "Zombie Type : " << getType() << std::endl;
    std::cout << "Zombie HP : " << getHp() << " / " << getMaxHp() << std::endl;
    std::cout << "Zombie Damage : " << getDamage() << std::endl;
    std::cout << "Zombie Alive : " << getAlive() << std::endl;
}
void Zombie::attack(Player & target){
    target.takeDamage(this->getDamage());
    target.isAlive();
    std::cout << this->getName() << " menyerang " << target.getName() << "!" << std::endl;
}
void Zombie::takeDamage(int amount){
    this->hp -= amount;
    isAlive();
}


