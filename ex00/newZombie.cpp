#include "Zombie.hpp"

/*
on the HEAP using new
object will survive outside of this func scope
until deallocated using delete
*/
Zombie* newZombie(std::string name)
{
    Zombie* heapZombie = new Zombie(name);

    return heapZombie;
}
