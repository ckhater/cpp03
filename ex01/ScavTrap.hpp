#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include"ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    private:
        std::string name;
        int hit_points;
        int energy_points;
        int attack_damage;
    public:
        ScavTrap(std::string n);
        ScavTrap &operator=(ScavTrap const &clp);
        ScavTrap(ScavTrap const &clp);
        ~ScavTrap(void);
        void guardGate();

};

#endif