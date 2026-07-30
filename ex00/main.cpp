#include "Zombie.hpp"

/*
Default test cases
*/
static void defaultTests(void)
{
    std::cout << B_PURPLE << "*** No parameters added, running default tests ***\n" << RESET;

    std::cout << RED << "==== Test 1: Stack allocation (randomChump) ====\n" << RESET;

    randomChump("ChumpOnStack");

    std::cout << RED << "\n==== Test 2: Heap allocation (newZombie) ====\n" << RESET;

    Zombie* heapZombie = newZombie("HeapWalker");

    if (heapZombie != NULL)
    {
        std::cout << B_BLUE << "Heap zombie surviving outside function scope: \n" << RESET;

        heapZombie->announce();

        std::cout << RED << "\n==== Manual deallocation of Heap Zombie ====\n" << RESET;

        delete heapZombie;
    }
}

/*
Custom args: ./zombie <HeapName> <StackName>
*/
static void argTest(std::string heapName, std::string stackName)
{
    std::cout << RED << "==== Custom test: Stack allocation ====" << RESET << "\n";

    randomChump(stackName);

    std::cout << "\n" << RED << "==== Custom test: Heap allocation ====" << RESET << "\n";

    Zombie* customHeapZombie = newZombie(heapName);

    if (customHeapZombie != NULL)
    {
        std::cout << B_BLUE << "Heap zombie surviving outside function scope: \n" << RESET;

        customHeapZombie->announce();

        std::cout << "\n" << RED << "==== Manual deallocation ====" << RESET << "\n";

        delete customHeapZombie;
    }
}

int main(int argc, char** argv)
{
    if (argc == 1)
    {
        defaultTests();
    }
    else if (argc == 3)
    {
        std::string heapName = argv[1];
        std::string stackName = argv[2];
        argTest(heapName, stackName);
    }
    else
    {
        std::cout << RED << "Usage Error!" << YELLOW
                  << "\nRun with no arguments for default tests:\n  " << argv[0]
                  << "\nOr use 2 parameters <HeapZombieName> <StackZombieName>:\n  " << argv[0]
                  << " HeapZombie StackZombie\n"
                  << RESET;
        return 1;
    }

    return 0;
}
