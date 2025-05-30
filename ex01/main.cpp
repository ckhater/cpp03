#include"ScavTrap.hpp"

int main()
{
    ClapTrap pl("wiwi");

    pl.attack("wowo");
    pl.takeDamage(20);
    pl.beRepaired(10);
    pl.takeDamage(30);
}