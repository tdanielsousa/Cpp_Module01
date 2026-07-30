#include "Zombie.hpp"

/*
create array of N zombies
return 1 spot of array
(like c the pointer isnt incremented)
*/
Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
    {
        return NULL;
    }

    Zombie* horde = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        horde[i].setName(name);
    }

    return horde;
}
