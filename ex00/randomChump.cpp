#include "Zombie.hpp"

/*
on the STACK as a local var
announces itself immediately because it auto destroys when func ends
no delete required
*/
void randomChump(std::string name)
{
    Zombie stackZombie(name);

    stackZombie.announce();
}
