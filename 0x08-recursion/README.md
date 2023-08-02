# 0x08-recursion

This directory contains C programs that demonstrate the concept of recursion in programming. Recursion is a programming technique where a function calls itself to solve a problem. It is a powerful and elegant way to solve complex problems that can be broken down into smaller, similar sub-problems.

## Files

Here is a list of the files in this directory and a brief description of each:

1. **0-puts_recursion.c**: A C program that contains a function `void _puts_recursion(char *s)` that prints a string, followed by a new line, using recursion.

2. **1-print_rev_recursion.c**: A C program that contains a function `void _print_rev_recursion(char *s)` that prints a string in reverse, using recursion.

3. **2-strlen_recursion.c**: A C program that contains a function `int _strlen_recursion(char *s)` that returns the length of a string, using recursion.

4. **3-factorial.c**: A C program that contains a function `int factorial(int n)` that returns the factorial of a given number using recursion. The factorial of a non-negative integer n is the product of all positive integers less than or equal to n.

5. **4-pow_recursion.c**: A C program that contains a function `int _pow_recursion(int x, int y)` that returns the value of `x` raised to the power of `y`, using recursion.

6. **5-sqrt_recursion.c**: A C program that contains a function `int _sqrt_recursion(int n)` that returns the natural square root of a number, using recursion. If the number does not have a natural square root, the function returns -1.

7. **6-is_prime_number.c**: A C program that contains a function `int is_prime_number(int n)` that checks if a number is a prime number or not, using recursion.

8. **7-is_palindrome.c**: A C program that contains a function `int is_palindrome(char *s)` that checks if a string is a palindrome, using recursion. A palindrome is a word, phrase, number, or other sequence of characters that reads the same forward and backward.

## Usage

To compile any of the C files, use a C compiler like `gcc`. For example:

```bash
gcc -Wall -Wextra -Werror -pedantic 0-puts_recursion.c -o puts_recursion
```

Replace `0-puts_recursion.c` with the desired C file.

To run the compiled program, use:

```bash
./puts_recursion
```

Replace `puts_recursion` with the name of the compiled file.

## Examples

Here are a few examples of how to use the functions in these files:

```c
#include <stdio.h>

void example_puts_recursion()
{
    char *str = "Hello, recursion!";
    _puts_recursion(str);
}

void example_print_rev_recursion()
{
    char *str = "Hello, recursion!";
    _print_rev_recursion(str);
}

void example_factorial()
{
    int n = 5;
    int result = factorial(n);
    printf("Factorial of %d is %d\n", n, result);
}

void example_pow_recursion()
{
    int x = 2;
    int y = 5;
    int result = _pow_recursion(x, y);
    printf("%d raised to the power of %d is %d\n", x, y, result);
}

void example_sqrt_recursion()
{
    int n = 25;
    int result = _sqrt_recursion(n);
    printf("The square root of %d is %d\n", n, result);
}

void example_is_prime_number()
{
    int n = 7;
    if (is_prime_number(n))
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);
}

void example_is_palindrome()
{
    char *str = "racecar";
    if (is_palindrome(str))
        printf("%s is a palindrome\n", str);
    else
        printf("%s is not a palindrome\n", str);
}
```

Note: Remember to include the necessary headers and function prototypes in your own C files.

