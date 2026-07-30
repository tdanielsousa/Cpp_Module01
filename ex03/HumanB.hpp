#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

/*
Pointer to a Weapon since the field is not set at
creation time, and the weapon can be NULL.
*/
class HumanB
{
  private:
    std::string _name;
    Weapon* _weapon;

  public:
    HumanB(std::string name);
    ~HumanB(void);

    void setWeapon(Weapon& weapon);
    void attack(void) const;
};

#endif