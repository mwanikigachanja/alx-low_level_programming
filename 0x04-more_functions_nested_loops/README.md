# 0x04-more_functions_nested_loops

Welcome to the **0x04-more_functions_nested_loops** repository! This repository contains C programs that focus on utilizing more functions and nested loops. These programs are part of the larger curriculum to help you become proficient in C programming.

## Table of Contents

1. [Description](#description)
2. [List of Functions](#list-of-functions)
3. [Requirements](#requirements)
4. [How to Use](#how-to-use)
5. [Files](#files)
6. [Getting Started](#getting-started)
7. [Contributing](#contributing)
8. [License](#license)

## Description

In this repository, you will find C programs that explore more complex functions and nested loops. These programs will help you understand how to write functions to perform specific tasks and how to use nested loops effectively to solve various problems.

## List of Functions

The following is a list of the C functions included in this repository:

1. `int _isupper(int c);`
2. `int _isdigit(int c);`
3. `int mul(int a, int b);`
4. `void print_numbers(void);`
5. `void print_most_numbers(void);`
6. `void more_numbers(void);`
7. `void print_line(int n);`
8. `void print_diagonal(int n);`
9. `void print_square(int size);`
10. `void print_triangle(int size);`

Each function is implemented in a separate C file with corresponding test files to check the functionality of the functions.

## Requirements

To use or test the C programs in this repository, you need to have the following installed on your system:

- GCC or any C compiler
- Make (optional but recommended for easy compilation)

## How to Use

Follow the steps below to use the programs in this repository:

1. Clone the repository to your local machine

2. Navigate to the repository directory:

```
cd 0x04-more_functions_nested_loops
```

3. To compile the C programs, use the following commands:

```
gcc -Wall -Werror -Wextra -pedantic <filename.c> -o <output_filename>
```

Replace `<filename.c>` with the name of the C file you want to compile and `<output_filename>` with your desired name for the compiled output.

4. Run the compiled program:

```
./<output_filename>
```

Replace `<output_filename>` with the name you used during the compilation.

5. To clean the repository and remove the compiled output, use:

```
make clean
```

## Files

The repository is organized as follows:

```
0x04-more_functions_nested_loops/
|-- 0-isupper.c
|-- 1-isdigit.c
|-- 2-mul.c
|-- 3-print_numbers.c
|-- 4-print_most_numbers.c
|-- 5-more_numbers.c
|-- 6-print_line.c
|-- 7-print_diagonal.c
|-- 8-print_square.c
|-- 9-print_triangle.c
|-- main.h
|-- main.c (for testing the functions)
|-- ... (other test files)
|-- Makefile
|-- README.md
```

## Getting Started

If you are new to C programming or need a refresher, you can start by reading the content of the C files one by one. Each file contains the implementation of a specific function with comments explaining the purpose and logic of the function.

## Contributing

If you want to contribute to this repository, you can:

1. Fork the repository.
2. Create a new branch for your changes.
3. Make the necessary changes and commit them.
4. Push your changes to your fork.
5. Submit a pull request to the original repository.

Your contributions are greatly appreciated!

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

Happy coding!
