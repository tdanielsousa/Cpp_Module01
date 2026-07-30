#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#define RESET "\033[0m"
#define RED "\033[31m"
#define BLUE "\033[34m"
#define B_BLUE "\033[1;34m"
#define B_PURPLE "\033[1;35m"
#define YELLOW "\033[33m"

#include <iostream>
#include <string>

class Zombie
{
  private:
    std::string _name;

  public:
    Zombie(std::string name);
    ~Zombie(void);

    void announce(void) const;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif