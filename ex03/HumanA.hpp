#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

/*
& reference, since the Weapon exists from creation
until destruction, never changes and cannot be NULL
*/
class HumanA
{
  private:
    std::string _name;
    Weapon& _weapon;

  public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA(void);

    void attack(void) const;
};

#endif