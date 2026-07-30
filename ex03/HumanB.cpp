#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB(void)
{
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}

void HumanB::attack(void) const
{
    if (this->_weapon != NULL)
    {
        std::cout << BLUE << this->_name << YELLOW << " attacks with their " << B_PURPLE
                  << this->_weapon->getType() << RESET << "\n";
    }
    else
    {
        std::cout << RED << "Error: " << BLUE << this->_name << YELLOW
                  << " has no weapon to attack with!\n"
                  << RESET;
    }
}
