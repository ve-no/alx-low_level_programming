# String Manipulation Tasks

This repository contains solutions for various string manipulation tasks in the C programming language.

## Task 0: `_strcat`

In this task, you need to implement a function `_strcat` that concatenates two strings. It takes two parameters: `char *dest` (destination string) and `char *src` (source string). The function appends the content of `src` to `dest`, overwriting the null terminator of `dest`, and then adds a new null terminator. It returns a pointer to the resulting concatenated string.

## Task 1: `_strncat`

This task is similar to Task 0, but with a limitation on the number of characters to concatenate. The function `_strncat` takes an additional parameter `int n`, which specifies the maximum number of characters to append from `src` to `dest`. If `src` is longer than `n`, only the first `n` characters from `src` should be appended.

## Task 2: `_strncpy`

In this task, you need to implement a function `_strncpy` that copies a specified number of characters from the source string to the destination string. It takes parameters `char *dest`, `char *src`, and `int n`. The function should copy at most `n` characters from `src` to `dest`. If `src` has fewer than `n` characters, the remaining characters in `dest` should be filled with null bytes.

## Task 3: `_strcmp`

This task requires you to implement a function `_strcmp` that compares two strings. It takes two parameters: `char *s1` and `char *s2`. The function should return an integer that indicates the lexicographical comparison between the two strings. A positive value indicates `s1` is greater, a negative value indicates `s2` is greater, and 0 indicates both strings are equal.

## Task 4: `reverse_array`

Here, you need to implement a function `reverse_array` that reverses the content of an array of integers. The function takes parameters `int *a` (array of integers) and `int n` (number of elements in the array). It should modify the array in-place, so that the elements are reversed.

## Task 5: `string_toupper`

In this task, you are required to implement a function `string_toupper` that converts all lowercase letters in a string to uppercase. The function takes a single parameter `char *` and returns a pointer to the modified string.

## Task 6: `cap_string`

Here, you need to implement a function `cap_string` that capitalizes the first letter of each word in a string. Words are separated by various punctuation characters and whitespace. The function takes a single parameter `char *` and returns a pointer to the modified string.

## Task 7: `leet`

In this task, you need to implement a function `leet` that encodes a string into "leet speak" (also known as "1337 speak"). The function should replace specific letters with corresponding digits or symbols as specified in the task description.

For each task, you'll need to create a `.c` file with the corresponding function implementation and include it in your repository. You can also create this `README.md` file to provide an overview of the tasks and include the content you've shared here.
