#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include"ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    public:
        ScavTrap(std::string n);
        ScavTrap &operator=(ScavTrap const &clp);
        ScavTrap(ScavTrap const &clp);
        ~ScavTrap(void);
        void guardGate();

};

#endif