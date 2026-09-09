#include <iostream>

#include "Player.hpp"

Player::Player(std::string name){
    this->name = name;
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
int Player::getHp(){
    return this->hp;
}
int Player::getMaxHp(){
    return this->maxHp;
}
int Player::getStamina(){
    return this->stamina;
}
int Player::getMaxStamina(){
    return this->maxStamina;
}
bool Player::getIsBleeding(){
    return this->isBleeding;
}
int Player::getInfectionLevel(){
    return this->infectionLevel;
}
bool Player::getAlive(){
    return this->alive;
}


void Player::setName(std::string name){
    this->name = name;
}
void Player::setStamina(int stamina){
    this->stamina = stamina;
}
void Player::setMaxStamina(int maxStamina){
    this->maxStamina = maxStamina;
}
void Player::setHp(int hp){
    this->hp = hp;
}
void Player::setMaxHp(int maxHp){
    this->maxHp = maxHp;
}
void Player::setIsBleeding(bool isBleeding){
    this->isBleeding = isBleeding;
}
void Player::setInfectionLevel(int infectionLevel){
    this->infectionLevel = infectionLevel;
}
void Player::setAlive(bool alive){
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
    std::cout << "Is Bleeding : " << (getIsBleeding() == "true") ? "Yes" : "No"  << std::endl;
    std::cout << "Infection Level : " << this->infectionLevel << std::endl;
    std::cout << "Player Alive : " << getAlive() << std::endl;
}