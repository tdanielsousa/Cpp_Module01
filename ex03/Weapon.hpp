/*
HumanA uses a Reference (Weapon&)
HumanA is always armed throughout its entire lifetime a
reference  guarantees the weapon will always exist

HumanB uses a Pointer (Weapon*)
HumanB is created without a weapon and can be armed later using setWeapon()
A pointer can be NULL (unarmed state) and can be changed to
 point to a different Weapon later in the program
bcause HumanB might not have a weapon at creation time a pointer is required

*/

#ifndef WEAPON_HPP
#define WEAPON_HPP

#define RESET "\033[0m"
#define RED "\033[31m"
#define BLUE "\033[34m"
#define B_PURPLE "\033[1;35m"
#define YELLOW "\033[33m"

#include <string>

class Weapon
{
  private:
    std::string _type;

  public:
    Weapon(std::string type);
    ~Weapon(void);

    const std::string& getType(void) const;
    void setType(std::string type);
};

#endif