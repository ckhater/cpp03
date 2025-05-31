#include"DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string n):ClapTrap(n + "clap_name"){
    std::cout<< "DiamondTrap parametrized contructor called"<< std::endl;
};

DiamondTrap::~DiamondTrap(void){
    std::cout<< "DiamondTrap Destructor called"<< std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &dmn)
{
    std::cout<< "DiamondTrap copy contructor called"<< std::endl;
    *this = dmn;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &dmn)
{
    std::cout<< "DiamondTrap copy assignement called"<< std::endl;
    this->name = dmn.name;
    this->
}