#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include"FragTrap.hpp"
#include"ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap{
    private:
        std::string name;
    public:
    DiamondTrap(std::string n);
    DiamondTrap(DiamondTrap const &dmn);
    DiamondTrap &operator=(DiamondTrap const &dmn);
    ~DiamondTrap(void);
    void whoAmI();
};

#endif