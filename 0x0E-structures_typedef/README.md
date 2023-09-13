# 0x0E. C - Structures, typedef

Welcome to the "0x0E. C - Structures, typedef" project! In this project, you will learn about structures and how to use typedef in C.

## Project Details

- Author: Julien Barbier
- Weight: 1
- Project Start: Sep 11, 2023 4:00 AM
- Project End: Sep 12, 2023 4:00 AM
- Checker Release: Sep 11, 2023 10:00 AM
- Auto Review: Will be launched at the deadline

## Resources

Before you start, make sure to read or watch the following resources:

- [0x0d. Structures.pdf](0x0d. Structures.pdf)
- [struct (C programming language)](https://en.cppreference.com/w/c/language/struct)
- Documentation: [structures](https://en.cppreference.com/w/c/language/struct)
- [0x0d. Typedef and structures.pdf](0x0d. Typedef and structures.pdf)
- [typedef](https://en.cppreference.com/w/c/language/typedef)
- "Programming in C" by Stephen Kochan - Chapter 8, Working with Structures p163-189
- [The Lost Art of C Structure Packing (Advanced - not mandatory)](https://www.catb.org/esr/structure-packing/)

## Learning Objectives

By the end of this project, you should be able to explain the following concepts without using external resources:

### General

- What structures are, when, why, and how to use them
- How to use typedef

## Copyright & Plagiarism

- You are required to come up with solutions for the tasks on your own to meet the learning objectives.
- Copying and pasting someone else's work is not allowed.
- You are not allowed to publish any content of this project.
- Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements

### General

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are printf, malloc, free, and exit.
- Don't forget to push your header file
- All your header files should be include guarded

## Quiz Questions

You've completed the quiz successfully! Keep going!

## Tasks

### Task 0: Poppy

Define a new type `struct dog` with the following elements:

- `name`, type = `char *`
- `age`, type = `float`
- `owner`, type = `char *`

Example usage:
```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
```


### Task 1: A dog is the only thing on earth that loves you more than you love yourself


Write a function `init_dog` that initializes a variable of type `struct dog`:

```c
void init_dog(struct dog *d, char *name, float age, char *owner);

```

Example usage:

```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}

```

### Task 2: A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

Write a function `print_dog` that prints a `struct dog`:
```c
void print_dog(struct dog *d);
```

Format:
```Makefile
Name: Poppy
Age: 3.500000
Owner: Bob
```
If an element of d is NULL, print (nil) instead of that element. If d is NULL, print nothing.

Example usage:
```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}
```
### Task 3: Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read

Define a new type 	 as a new name for the type `struct dog`.

Example usage:
```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog_t my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
```

### Task 4: A door is what a dog is perpetually on the wrong side of

Write a function `new_dog` that creates a new dog:
```c
dog_t *new_dog(char *name, float age, char *owner);
```

You have to store a copy of `name` and `owner`. Return NULL if the function fails.

Example usage:
```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
```

### Task 5: How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg

Write a function `free_dog` that frees dogs:

```c
void free_dog(dog_t *d);
```

Example usage:
```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}

```

## Contact

If you have any questions or suggestions regarding this project, feel free to get in touch with me:

- **Name:** Your Name
- **GitHub:** [Your GitHub Profile](https://github.com/yourusername)
- **Email:** your.email@example.com

Feel free to open an issue in this repository if you encounter any problems or have ideas for improvement.
