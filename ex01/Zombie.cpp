#include "Zombie.hpp"

/*
create object zombie w var name
*/
Zombie::Zombie(void) : _name("")
{
}

Zombie::~Zombie(void)
{
    std::cout << BLUE << this->_name << B_PURPLE << " was destroyed.\n" << RESET;
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}

void Zombie::announce(void) const
{
    std::cout << BLUE << this->_name << RED << ": " << YELLOW << "BraiiiiiiinnnzzzZ...\n"
              << RESET;
}
