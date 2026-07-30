#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
}

/*
debug message when zombie is destroyed
*/
Zombie::~Zombie(void)
{
    std::cout << BLUE << this->_name << YELLOW << " was destroyed.\n" << RESET;
}

void Zombie::announce(void) const
{
    std::cout << BLUE << this->_name << RED << ": " << YELLOW << "BraiiiiiiinnnzzzZ...\n"
              << RESET;
}
