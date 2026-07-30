#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void Harl::debug(void)
{
    std::cout << YELLOW << "[ DEBUG ]\n"
              << B_PURPLE
              << "I love having extra bacon for my "
                 "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n"
              << RESET;
}

void Harl::info(void)
{
    std::cout << YELLOW << "[ INFO ]\n"
              << B_PURPLE
              << "I cannot believe adding extra bacon costs more money. You didn't put enough "
                 "bacon in my burger! If you did, I wouldn't be asking for more!\n"
              << RESET;
}

void Harl::warning(void)
{
    std::cout << YELLOW << "[ WARNING ]\n"
              << B_PURPLE
              << "I think I deserve to have some extra bacon for free. I've been coming for "
                 "years, whereas you started working here just last month.\n"
              << RESET;
}

void Harl::error(void)
{
    std::cout << YELLOW << "[ ERROR ]\n"
              << B_PURPLE << "This is unacceptable! I want to speak to the manager now.\n"
              << RESET;
}

/*
 fall through to print all
*/
void Harl::filter(std::string arg)
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int levelIndex = -1;

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == arg)
        {
            levelIndex = i;
            break;
        }
    }

    switch (levelIndex)
    {
    case 0:
        this->debug();
        // fall through
    case 1:
        this->info();
        // fall through
    case 2:
        this->warning();
        // fall through
    case 3:
        this->error();
        break;
    default:
        std::cout << B_PURPLE << "[ Probably complaining about insignificant problems ]\n"
                  << RESET;
        break;
    }
}
