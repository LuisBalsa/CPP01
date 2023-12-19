# C++ Module 01 Project README

## Project Overview

This project is part of the C++ Module 01 at Code 42 school, focusing on fundamental C++ concepts, memory management, and practical application through a series of exercises. The summary provides an overview of the subject and the exercises completed.

## Subject Overview

The subject introduces C++ as a general-purpose programming language, emphasizing Object-Oriented Programming (OOP). The guidelines include compiling with specific flags, adhering to naming conventions, and avoiding certain libraries. Key topics covered are memory allocation, pointers, references, and the use of the switch statement.

## Building and Running

### Compilation Instructions

The project includes a `Makefile` in each exercise directory. To build the project, navigate to the desired exercise directory and run:

```bash
make
```

This command compiles the source files and creates the executable specified in the `Makefile`.

### Running the Program

After compilation, run the executable:

```bash
./executable_name
```

Replace `executable_name` with the appropriate name specified in the `Makefile`.

## Exercise Details

### Exercise 00: Zombie Class and Functions

#### Files:

- `Zombie.hpp`: Defines a `Zombie` class with a constructor, destructor, and an `announce` method.
- `Zombie.cpp`: Implements the `Zombie` class methods.
- `newZombie.cpp`: Defines a function `newZombie` that creates a new `Zombie` with a given name.
- `randomChump.cpp`: Defines a function `randomChump` that creates a temporary `Zombie` with a given name and announces it.
- `main.cpp`: Demonstrates the usage of the `Zombie` class, `newZombie`, and `randomChump`.

#### Execution:

1. **Zombie Class Creation:**
   - The `Zombie` class is defined with a constructor, destructor, and an `announce` method.
2. **Zombie Creation and Announcement:**
   - `newZombie` creates a `Zombie` with a specified name.
   - `randomChump` creates a temporary `Zombie` and announces it.
3. **Memory Allocation:**
   - Understanding the difference between stack and heap allocation for zombies.

### Exercise 01: Zombie Horde

#### Files:

- `zombieHorde.cpp`: Defines a function `zombieHorde` that creates an array of `Zombie` objects with names based on a given prefix and index.
- `main.cpp`: Takes user input for the number of zombies to create, creates a zombie horde, and announces each zombie.

#### Execution:

1. **Zombie Horde Creation:**
   - `zombieHorde` creates an array of `Zombie` objects with specified names.
2. **Horde Announcement:**
   - Each zombie in the horde announces itself.
3. **Testing and Deallocation:**
   - Testing the created horde and checking for memory leaks upon deallocation.

### Exercise 02: Memory Manipulation

#### Files:

- `main.cpp`: Declares a string, a string pointer, and a string reference. Prints their memory addresses and values.

#### Execution:

1. **Memory Addresses and Values:**
   - Declares a string, a string pointer, and a string reference.
   - Prints the memory addresses and values of these variables.

### Exercise 03: Classes and References

#### Files:

- `Weapon.hpp`: Defines a `Weapon` class with methods to get and set the weapon type.
- `Weapon.cpp`: Implements the `Weapon` class methods.
- `HumanA.hpp`: Declares a `HumanA` class with a constructor, destructor, and an `attack` method.
- `HumanA.cpp`: Implements the `HumanA` class methods.
- `HumanB.hpp`: Declares a `HumanB` class with a constructor, destructor, `attack` method, and a `setWeapon` method.
- `HumanB.cpp`: Implements the `HumanB` class methods.
- `main.cpp`: Demonstrates the usage of `HumanA` and `HumanB` classes with a `Weapon` object.

#### Execution:

1. **Weapon Class:**
   - `Weapon` class with methods to get and set the weapon type.
2. **HumanA and HumanB Classes:**
   - `HumanA` class with a `Weapon` in its constructor.
   - `HumanB` class may not always have a `Weapon`.
3. **Attack Function:**
   - `attack` function in both classes displays the attack with the weapon type.
4. **Testing:**
   - Tests demonstrate the correct implementation of classes and their interactions.

### Exercise 04: Sed is for losers

#### Files:

- `main.cpp`: Takes three parameters (filename, s1, s2) and replaces occurrences of s1 with s2 in the file.

#### Execution:

1. **String Replacement:**
   - Opens a file, replaces occurrences of s1 with s2, and creates a new file with the modified content.
2. **File Manipulation:**
   - Handles file manipulations without using C file functions.
3. **Error Handling:**
   - Proper handling of unexpected inputs and errors.
4. **Testing:**
   - Create and turn in your own tests to ensure the program works as expected.

### Exercise 05: Polymorphism and Menu

#### Files:

- `Harl.hpp`: Declares a `Harl` class with methods to complain at different levels.
- `Harl.cpp`: Implements the `Harl` class methods.
- `main.cpp`: Defines a menu-driven program that allows the user to select a complaint level and see Harl's complaints.

#### Execution:

1. **Harl Class:**
   - `Harl` class with different complaint levels using pointers to member functions.
2. **Menu-Driven Program:**
   - User selects a complaint level, and Harl's complaints are displayed accordingly.
3. **Pointers to Member Functions:**
   - Demonstrates the use of pointers to member functions.

### Exercise 06: Command-Line Filtering

#### Files:

- `Harl.hpp`: Same as in ex05.
- `Harl.cpp`: Same as in ex05.
- `main.cpp`: Takes a complaint level as a command-line argument and filters Harl's complaints accordingly.

#### Execution:

1. **Command-Line Filtering:**
   - Program takes a complaint level as a command-line argument.
   - Displays messages from this level and above.
2. **Switch Statement:**
   - Utilizes the switch statement for effective message filtering.
3. **Testing:**
   - Create and turn in tests to show that Harl complains according to the specified log level.

