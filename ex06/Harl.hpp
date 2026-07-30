#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

#define YELLOW "\033[33m"
#define B_PURPLE "\033[1;35m"
#define RED "\033[31m"
#define RESET "\033[0m"

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

    void filter(std::string arg);
};

#endif