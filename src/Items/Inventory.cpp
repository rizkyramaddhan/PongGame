#include "Inventory.hpp"

Inventory::Inventory(){
    this->equipedIndex = -1;
}

void Inventory::addWeapon(const Weapon & weapon){
    this->inventory.push_back(weapon);
    std::cout << "[Inventory] " << weapon.getName() << " di tambahkan ke inventory." << std::endl;
    
    if(equipedIndex == -1){
        equipedIndex = 0;
    }
}

void Inventory::displayInventory() const{
    std::cout << "==========Inventory==========" << std::endl;
    if(this->inventory.empty()){
        std::cout << "Inventory Kosong" << std::endl;
        return;
    }

    for(int i = 0; i < this->inventory.size(); i++){
        std::cout << "[" << this->inventory[i].getName() << "] ";
        if(i == this->equipedIndex){
            std::cout << "Equiped" << std::endl;
        }else{
            std::cout << std::endl;
        }
    }

    std::cout << "==============================" << std::endl;
}

bool Inventory::equipWeapon(int index){
    if(index >= 0 && index < (int)this->inventory.size()){
        this->equipedIndex = index;
        std::cout << "[EQUIP] Menggunakan " << inventory[equipedIndex].getName() << std::endl;
        return true;
    }
    std::cout << "[EQUIP] Tidak ada senjata di inventory" << std::endl;
    return false;
}

Weapon * Inventory::getEquippedWeapon(){
    if (equipedIndex >= 0 && equipedIndex < (int)this->inventory.size()){
        return &inventory[equipedIndex];
    }
    return nullptr;
}

