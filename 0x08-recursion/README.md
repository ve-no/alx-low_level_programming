# Recursion Exercises

Welcome to the **Recursion Exercises**! In this project, you will delve into the world of recursion, a powerful technique in programming. Recursion involves solving problems by breaking them down into smaller, similar subproblems. Through these exercises, you'll gain a solid understanding of recursion and its applications.

## Table of Contents

- [Recursion Exercises](#recursion-exercises)
	- [Table of Contents](#table-of-contents)
	- [Introduction](#introduction)
	- [Learning Objectives](#learning-objectives)
	- [Copyright and Plagiarism](#copyright-and-plagiarism)
	- [Requirements](#requirements)
- [Recursion Exercises](#recursion-exercises-1)
	- [Tasks](#tasks)
		- [Task 0: She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget](#task-0-she-locked-away-a-secret-deep-inside-herself-something-she-once-knew-to-be-true-but-chose-to-forget)
		- [Task 1: Why is it so important to dream? Because, in my dreams we are together](#task-1-why-is-it-so-important-to-dream-because-in-my-dreams-we-are-together)
		- [Task 2: Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange](#task-2-dreams-feel-real-while-were-in-them-its-only-when-we-wake-up-that-we-realize-something-was-actually-strange)
		- [Task 3: You mustn't be afraid to dream a little bigger, darling](#task-3-you-mustnt-be-afraid-to-dream-a-little-bigger-darling)
		- [Task 4: Once an idea has taken hold of the brain it's almost impossible to eradicate](#task-4-once-an-idea-has-taken-hold-of-the-brain-its-almost-impossible-to-eradicate)

## Introduction

Welcome to the Recursion Exercises! Recursion is a technique where a function calls itself to solve a problem. It's an important concept in programming and can be used to solve various problems more elegantly.

## Learning Objectives

By completing these exercises, you'll be able to:

- Explain the concept of recursion
- Implement recursive functions in C
- Solve problems using recursion
- Understand when recursion is appropriate and when it isn't

## Copyright and Plagiarism

Please note that plagiarism is strictly forbidden. You must solve the tasks yourself to meet the learning objectives of this project. Do not copy and paste solutions from external sources.

## Requirements

- Allowed editors: vi, vim, emacs
- Code will be compiled on Ubuntu 20.04 LTS using gcc with specific options.
- Your code should adhere to the Betty style.
- No global variables are allowed.
- Each file should contain no more than 5 functions.
- Use `_putchar` for output.
- Prototypes of all functions, including `_putchar`, should be included in `main.h`.
- You are not allowed to use loops or static variables.

# Recursion Exercises

Welcome to the **Recursion Exercises**! In this project, you will delve into the world of recursion, a powerful technique in programming. Recursion involves solving problems by breaking them down into smaller, similar subproblems. Through these exercises, you'll gain a solid understanding of recursion and its applications.

## Tasks

### Task 0: She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget

Write a function that prints a string, followed by a new line.

```c
void _puts_recursion(char *s);

Example usage:
_puts_recursion("Puts with recursion");

### Task 1: Why is it so important to dream? Because, in my dreams we are together

Write a function that prints a string in reverse.
```c
void _print_rev_recursion(char *s);

Example usage:
_print_rev_recursion("\nColton Walker");

### Task 2: Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange
Write a function that returns the length of a string.
```c
int _strlen_recursion(char *s);
Example usage:
int n = _strlen_recursion("Corbin Coleman");

### Task 3: You mustn't be afraid to dream a little bigger, darling
Write a function that returns the factorial of a given number.
```c
int factorial(int n);
Example usage:
int result = factorial(5);
### Task 4: Once an idea has taken hold of the brain it's almost impossible to eradicate

Write a function that returns the value of x raised to the power of y.

int _pow_recursion(int x, int y);
