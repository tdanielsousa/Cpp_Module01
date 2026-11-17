# CPP Module 01

The second module of the 42 C++ series, focused on memory management and a few of C++'s more distinctive features.

It covers dynamic allocation with `new` / `delete`, stack vs heap, pointers vs references, pointers to member functions, and file stream manipulation, all compiled with `-Wall -Wextra -Werror -std=c++98`.

> Note: This module is graded with the C++98 standard, and every allocation must be freed. Nothing may leak, and the exercises are checked with tools like `valgrind`.
---

<div align="center">
    <br>
    <a href="https://github.com/tdanielsousa/42_School/blob/main/Subjects/cpp01_subject.pdf" target="_blank">
        <img src="https://img.shields.io/badge/View%20Subject-PDF-red?style=for-the-badge&logo=adobe-acrobat-reader&logoColor=white" alt="Subject PDF" height="40">
    </a>
    <p><i>Click on the button above to see the subject's pdf.</i></p>

</div>

---

##  Module Architecture & Concepts

Each exercise lives in its own folder with its own `Makefile`. The first ones focus on where objects live in memory, and the later ones on references, files and member function pointers.

### Technical Specifications
* **Language:** C++98.
* **Compiler:** `c++` with `-Wall -Wextra -Werror -std=c++98`.
* **Memory:** `new` / `delete` (and `new[]` / `delete[]`), with no leaks.
* **Concepts:** Stack vs heap, pointers vs references, pointers to member functions, `switch`, file streams.
* **Restrictions:** No `printf`, `malloc` or `free`, and no STL containers.

---

##  Exercises

### ex00: BraiiiiiiinnnzzzZ
A `Zombie` class that can announce itself, created either on the stack or on the heap.

* **`Zombie` class:** Has a name, an `announce()` member function, and a destructor that prints a message when the zombie is destroyed.
* **`newZombie(name)`:** Allocates a zombie on the **heap** and returns it, so the caller must `delete` it.
* **`randomChump(name)`:** Creates a zombie on the **stack**, makes it announce itself, and lets it be destroyed automatically.
* **Concepts:** Stack vs heap allocation, object lifetime, constructors and destructors.

### ex01: Moar brainz!
Creates a whole horde of zombies at once.

* **`zombieHorde(N, name)`:** Allocates `N` zombies in a **single allocation**, gives all of them the same name and returns a pointer to the first one.
* **Cleanup:** The horde is released with `delete[]`, and the program checks that every zombie announces itself.
* **Concepts:** Array allocation with `new[]`, default constructors, `delete[]`.

### ex02: HI THIS IS BRAIN
A short exercise to understand how references and pointers relate.

* **Program:** Creates a string with the value `HI THIS IS BRAIN`, plus a pointer (`stringPTR`) and a reference (`stringREF`) to it.
* **Output:** Prints the memory address of the string, the address held by the pointer and the address held by the reference, followed by the three values.
* **Concepts:** Pointers vs references, memory addresses.

### ex03: Unnecessary violence
Two classes that fight with a weapon, but handle it differently.

* **`Weapon` class:** Has a `type` string, with `getType()` (returns a `const` reference) and `setType()`.
* **`HumanA`:** Takes the weapon in its constructor and stores a **reference**, so it is always armed.
* **`HumanB`:** Stores a **pointer** and gets its weapon through `setWeapon()`, so it may have none.
* **`attack()`:** Prints `<name> attacks with their <weapon type>`, and the output follows the weapon if its type changes.
* **Concepts:** When to use a pointer and when to use a reference.

### ex04: Sed is for losers
A small file replacement program, like a simplified `sed`.

* **Usage:** `./replace <filename> <s1> <s2>`.
* **Behavior:** Copies the content of `<filename>` into `<filename>.replace`, replacing every occurrence of `s1` with `s2`.
* **Restrictions:** Uses `std::ifstream` and `std::ofstream`, and cannot use `std::string::replace`.
* **Error handling:** Handles invalid arguments, missing files and empty strings.
* **Concepts:** File streams, string manipulation (`find`, `substr`), error handling.

### ex05: Harl 2.0
A `Harl` class that complains at different levels, without a chain of `if` / `else if`.

* **Member functions (private):** `debug()`, `info()`, `warning()` and `error()`, each printing its own message.
* **`complain(level)`:** Receives the level as a string and calls the matching function through an array of **pointers to member functions**.
* **Concepts:** Pointers to member functions, avoiding conditional forests.

### ex06: Harl filter
Makes Harl react to a log level, ignoring anything less important.

* **Usage:** `./harlFilter <level>`.
* **Behavior:** Displays the messages from the given level and from all the levels above it (for example, `WARNING` also shows `ERROR`).
* **Invalid level:** Prints `[ Probably complaining about insignificant problems ]`.
* **Restrictions:** Must use a `switch` statement.
* **Concepts:** `switch` with fall-through, mapping strings to levels.

---

## Installation & Run Steps

### 1. System Prerequisites
Make sure you have a C++ compiler and `make` installed. On Debian/Ubuntu:

    sudo apt-get install make clang

### 2. Compile an Exercise
Go into the folder of the exercise and run `make`:

    cd ex01
    make

### 3. Run It
Each exercise generates its own executable:

    ./zombie
    ./brain
    ./violence
    ./replace file.txt "old" "new"
    ./harl
    ./harlFilter WARNING

---

## Testing

To check for leaks, run each program with `valgrind`:

    valgrind --leak-check=full ./zombie

Ex04 and ex06 are best checked by hand with different arguments (empty strings, missing files, invalid levels).

---

## References

* **[C++ reference](https://en.cppreference.com/)**
* **[cplusplus.com tutorial](https://cplusplus.com/doc/tutorial/)**
* **[Learn C++](https://www.learncpp.com/)**

---

## AI Usage Declaration

AI tools were used to assist with:

* **Documentation Support:** Structuring and writing this README file.

---
