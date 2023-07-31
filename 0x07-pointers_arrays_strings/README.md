# 0x07-pointers_arrays_strings

This repository contains C programs that demonstrate the use of pointers, arrays, and strings. Each program serves as an example of how to work with these concepts in C programming language.

## List of Programs

1. **0-reset_to_98.c**: This program showcases how to modify the value of an integer using a pointer. It defines a function `void reset_to_98(int *n)` that takes a pointer to an integer as a parameter and updates the value to 98.

2. **1-swap.c**: This program demonstrates how to swap the values of two integers using pointers. The function `void swap_int(int *a, int *b)` is defined, which takes two integer pointers as parameters and swaps their values.

3. **2-strlen.c**: This program calculates the length of a string using pointers. It defines a function `int _strlen(char *s)` that takes a pointer to a string as a parameter and returns its length (excluding the null terminator).

4. **3-puts.c**: The program implements its version of the `puts` function, which prints a string to the standard output. The function `void _puts(char *str)` takes a pointer to a string and prints it, followed by a newline.

5. **4-print_rev.c**: This program prints a string in reverse order. It defines the function `void print_rev(char *s)` that takes a pointer to a string as a parameter and prints the string in reverse, followed by a newline.

6. **5-rev_string.c**: The program reverses a string in place by using pointers. The function `void rev_string(char *s)` takes a pointer to a string and modifies it to be in reverse order.

7. **6-puts2.c**: This program prints every other character of a string. The function `void puts2(char *str)` takes a pointer to a string as a parameter and prints only the characters with even indices, followed by a newline.

8. **7-puts_half.c**: The program prints the second half of a string. The function `void puts_half(char *str)` takes a pointer to a string as a parameter and prints the second half of the string, followed by a newline.

9. **8-print_array.c**: This program prints elements of an integer array. The function `void print_array(int *a, int n)` takes a pointer to an integer array and the number of elements as parameters, then prints the array elements.

10. **9-strcpy.c**: The program implements its version of the `strcpy` function. It defines a function `char *_strcpy(char *dest, char *src)` that copies the string pointed to by `src` (including the null terminator) to the buffer pointed to by `dest`.

11. **100-atoi.c**: This program converts a string to an integer. The function `int _atoi(char *s)` takes a pointer to a string as a parameter and returns the integer value represented by the string.

12. **101-keygen.c**: The program generates a random valid password for the 101-crackme executable. It defines a function `int main(void)` that generates a password based on specific criteria.

## How to Use

To compile any of the C programs, use a C compiler such as GCC (GNU Compiler Collection) or any other compatible compiler.

For example, to compile `0-reset_to_98.c`, use the following command:

```
gcc -Wall -Wextra -Werror -pedantic 0-reset_to_98.c -o reset_to_98
```

Replace `0-reset_to_98.c` with the desired program filename.

After successful compilation, execute the program by running:

```
./reset_to_98
```

Replace `reset_to_98` with the appropriate executable name.

## Requirements

- C compiler (e.g., GCC) compatible with C89/C90 standard.
- POSIX-compliant operating system (for certain functions).
- Standard C libraries (e.g., stdio.h, string.h).

## Authors

These C programs were written by [Your Name]. Feel free to contact me if you have any questions or suggestions.

## License

This repository is open-sourced under the [MIT License](LICENSE). Feel free to use, modify, and distribute the code as needed.
