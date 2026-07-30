#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA(void)
{
}

void HumanA::attack(void) const
{
    std::cout << BLUE << this->_name << YELLOW << " attacks with their " << B_PURPLE
              << this->_weapon.getType() << RESET << "\n";
}
