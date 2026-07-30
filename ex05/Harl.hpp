#ifndef HARL_HPP
#define HARL_HPP

#define RED "\033[31m"
#define YELLOW "\033[33m"
#define PURPLE "\033[35m"
#define B_PURPLE "\033[1;35m"
#define RESET "\033[0m"
#define BLUE "\033[34m"

#include <iostream>
#include <string>

class Harl
{
  private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

  public:
    Harl(void);
    ~Harl(void);

    void complain(std::string arg);
};

#endif