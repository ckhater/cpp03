#include"ScavTrap.hpp"

ScavTrap::ScavTrap(void){
    std::cout<< "ScavTrap constructor called"<< std::endl;
}

ScavTrap::ScavTrap(std::string n){
    std::cout<< "ScavTrap parametrized contructor called"<< std::endl;
    this->name = n;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &scav){
    std::cout<< "ScavTrap copy assignement called"<< std::endl;
    this->name = scav.name;
    this->hit_points = scav.hit_points;
    this->attack_damage = scav.attack_damage;
    this->energy_points = scav.energy_points;
    return *this;
}

ScavTrap::ScavTrap(ScavTrap const &scav){
    std::cout<< "ScavTrap copy contructor called"<< std::endl;
    *this = scav;
}

ScavTrap::~ScavTrap(void){
    std::cout<< "ScavTrap destructor called"<< std::endl;
}

void ScavTrap::guardGate(){
    std::cout<< "Scavtrap "<< this->name<< " is in Gate keeper mode"<< std::endl;
}