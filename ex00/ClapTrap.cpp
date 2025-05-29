#include"ClapTrap.hpp"

ClapTrap::ClapTrap(void){
   std::cout<< "Contructor called"<< std::endl;
}
ClapTrap & ClapTrap::operator=(ClapTrap const &clp){
   std::cout<< "copy assignement called"<< std::endl;
   this->name = clp.name;
   this->hit_points = clp.hit_points;
   this->attack_damage = clp.attack_damage;
   this->energy_points = clp.energy_points;
   return(*this);
}
ClapTrap::ClapTrap(ClapTrap const &clp){
   std::cout<< "Copy contructor called"<<std::endl;
   *this = clp;
}
ClapTrap::~ClapTrap(void){
            
}
void ClapTrap::beRepaired(unsigned int amount){
            
}
void ClapTrap::takeDamage(unsigned int amount){
            
}
void ClapTrap::attack(const std::string& target){
            
}