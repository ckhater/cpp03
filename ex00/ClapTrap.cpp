#include"ClapTrap.hpp"

ClapTrap::ClapTrap(void){
   std::cout<< "Contructor called"<< std::endl;
   this->attack_damage = 0;
   this->energy_points = 10;
   this->hit_points = 10;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &clp){
   std::cout<< "copy assignement called"<< std::endl;
   this->name = clp.name;
   this->hit_points = clp.hit_points;
   this->attack_damage = clp.attack_damage;
   this->energy_points = clp.energy_points;
   return(*this);
}
ClapTrap::ClapTrap(std::string n)
{
   std::cout<< "Contructor called"<< std::endl;
   this->name = n;
   this->attack_damage = 0;
   this->energy_points = 10;
   this->hit_points = 10;
}
ClapTrap::ClapTrap(ClapTrap const &clp){
   std::cout<< "Copy contructor called"<<std::endl;
   *this = clp;
}
ClapTrap::~ClapTrap(void){
   std::cout<< "Destructor called"<< std::endl;
}
void ClapTrap::beRepaired(unsigned int amount){
   if(this->energy_points > 0)
   {
      this->hit_points = amount;
      this->energy_points--;
      std::cout<< std::endl;
   }
   else
      std::cout<< std::endl;

}
void ClapTrap::takeDamage(unsigned int amount){
            
}
void ClapTrap::attack(const std::string& target){
   if(this->energy_points != 0 && this->hit_points > 0)
   {
      std::cout<< "ClapTrap "<< this->name<< " attacks "<< target<< ", causing "
               << this->attack_damage<< " points of damage!"<< std::endl;
      this->hit_points -= this->attack_damage;
      this->energy_points--;
   }
   else
      std::cout<< "ClapTrap "<< this->name<< " can't attack "
               << target<< std::endl;
            
}