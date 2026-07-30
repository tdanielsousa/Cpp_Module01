#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

/*
create local var club and create a wep

HumanA needs a weapon at creation because it uses a reference (Weapon&)
and references must always exist (cannot be NULL)

HumanB uses a pointer (Weapon*) which means it can start without a weapon
 (NULL) and be set later
*/
int main(void)
{
    {
        std::cout << RED << "**** Test 1 ****\n" << RESET;
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        std::cout << RED << "**** Test 2 ****\n" << RESET;
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return 0;
}
