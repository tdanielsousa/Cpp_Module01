#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#define RESET "\033[0m"
#define RED "\033[31m"
#define BLUE "\033[34m"
#define B_PURPLE "\033[1;35m"
#define YELLOW "\033[33m"

#include <iostream>
#include <string>
#include <cstdlib>

class Zombie
{
  private:
    std::string _name;

  public:
    Zombie(void);
    ~Zombie(void);

    void announce(void) const;
    void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif