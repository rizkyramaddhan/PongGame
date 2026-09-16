#include <iostream>

#include "Player.hpp"
#include "Zombie.hpp"

Player::Player(std::string name){
    this->name = name;
    this->damage = 10;
    this->hp = 100;
    this->maxHp = 100;
    this->stamina = 100;
    this->maxStamina = 100;
    this->isBleeding = false;
    this->infectionLevel = 0;
    this->alive = true;
};

std::string Player::getName(){
    return this->name;
}
int Player::getHp() const{
    return this->hp;
}
int Player::getMaxHp() const{
    return this->maxHp;
}
int Player::getStamina() const{
    return this->stamina;
}
int Player::getMaxStamina() const{
    return this->maxStamina;
}
bool Player::getIsBleeding() const{
    return this->isBleeding;
}
int Player::getInfectionLevel() const{
    return this->infectionLevel;
}
bool Player::getAlive() const{
    return this->alive;
}


void Player::setName(std::string name) const{
    this->name = name;
}
void Player::setStamina(int stamina) const{
    this->stamina = stamina;
}
void Player::setMaxStamina(int maxStamina) const{
    this->maxStamina = maxStamina;
}
void Player::setHp(int hp) const{
    this->hp = hp;
}
void Player::setMaxHp(int maxHp) const{
    this->maxHp = maxHp;
}
void Player::setIsBleeding(bool isBleeding) const{
    this->isBleeding = isBleeding;
}
void Player::setInfectionLevel(int infectionLevel) const{
    this->infectionLevel = infectionLevel;
}
void Player::setAlive(bool alive) const{
    this->alive = alive;
}

void Player::isAlive(){
    if(this->hp > 0){
        this->alive = true;
    }else{
        this->hp = 0;
        this->alive = false;
    }
}
void Player::takeDamage(int amount){
    this->hp -= amount;
    isAlive();

    if(amount > 15 && !this->isBleeding){
        this->isBleeding = true;
        std::cout << this->name << " mengalami pendarahan!" << std::endl;
    }
}
void Player::attack(Zombie & target){
    target.takeDamage(this->damage);
    target.isAlive();
    std::cout << this->name << " menyerang " << target.getName() << "!" << std::endl;
}
void Player::prosessTurnTick(){
    if(this->isBleeding){
            this->hp -= 5;
            isAlive();
            std::cout << this->name << " Kehilangan 5 HP karena pendarahan!" << std::endl;
    }
}
void Player::healBleeding(){
    if(this->isBleeding){
        this->isBleeding = false;
        std::cout << this->name << " berhasil menghentikan pendarahan!" << std::endl;
    }else{
        std::cout << this->name << " tidak memiliki pendarahan!" << std::endl;
    }
}
void Player::displayStatus(){
    std::cout << "Player Name : " << this->name << std::endl;
    std::cout << "Player HP : " << this->hp << std::endl;
    std::cout << "Player Stamina : " << this->stamina << std::endl;
    std::cout << "Is Bleeding : " << getIsBleeding()  << std::endl;
    std::cout << "Infection Level : " << this->infectionLevel << std::endl;
    std::cout << "Player Alive : " << getAlive() << std::endl;
}