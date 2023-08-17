# 0x10-variadic_functions

This directory contains C programs that demonstrate the usage of variadic functions in the context of the C programming language.

## Files

- **0-sum_them_all.c:** This program defines a function `sum_them_all` that takes a variable number of arguments and returns the sum of all the arguments.

- **1-print_numbers.c:** This program defines a function `print_numbers` that takes a separator string and a number of integer arguments. It prints the integers separated by the provided separator.

- **2-print_strings.c:** This program defines a function `print_strings` that takes a separator string and a number of string arguments. It prints the strings separated by the provided separator.

- **3-print_all.c:** This program defines a function `print_all` that takes a format string and a variable number of arguments with different data types (`char`, `int`, `float`, `char *`). It prints each argument based on the specified format.

- **100-hello_holberton.asm:** This assembly program prints "Hello, Holberton" using the `printf` function from the standard C library. It demonstrates a simple usage of variadic functions in assembly language.

## How to Use

1. Compile the C programs using an ANSI C compiler, such as `gcc`:
   ```
   gcc -Wall -Werror -Wextra -pedantic <filename.c> -o <output>
   ```

2. Run the compiled executable:
   ```
   ./<output>
   ```

3. Follow program instructions to see the output based on the specific functionality of each program.
