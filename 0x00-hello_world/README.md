# 0x00-hello_world

Welcome to the 0x00-hello_world project! This project serves as an introduction to C programming and the basics of compilation. It focuses on printing text to the standard output and getting familiar with the development environment.

## Table of Contents

- [Introduction](#introduction)
- [Project Files](#project-files)
- [Getting Started](#getting-started)
- [Compilation](#compilation)
- [Contributing](#contributing)
- [License](#license)

## Introduction

The 0x00-hello_world project is designed to help you get started with C programming. It provides a set of tasks to introduce you to the basic concepts and syntax of the language. Through these tasks, you will learn how to print text using the `printf` function and how to compile C code using a C compiler.

The project aims to familiarize you with the development environment and help you understand the compilation process. It serves as a foundation for subsequent projects in the ALX Low-Level Programming curriculum.

## Project Files

The project files for 0x00-hello_world include:

- **0-preprocessor**: A script that runs a C file through the preprocessor and saves the result to another file.
- **1-compiler**: A script that compiles a C file but does not link it.
- **2-assembler**: A script that generates the assembly code of a C file and saves it to another file.
- **3-name**: A script that compiles a C file and creates an executable named `cisfun`.
- **4-puts.c**: A C program that prints a string using the `puts` function.
- **5-printf.c**: A C program that prints a string using the `printf` function.
- **6-size.c**: A C program that prints the size of various data types.

## Getting Started

To get started with the 0x00-hello_world project, follow these steps:

1. Clone this repository to your local machine using `git clone`.
2. Navigate to the `0x00-hello_world` directory.
3. Read the README file to understand the tasks and requirements.
4. Open the project files using a text editor or an integrated development environment (IDE).
5. Complete the tasks as instructed in each file.
6. Test your code and ensure it produces the expected output.

Make sure you have a C compiler installed on your machine, such as `gcc`, to compile and run the code.

## Compilation

To compile a C file, you can use the `gcc` command followed by the name of the file. For example, to compile `main.c`, you would run:

```
gcc -Wall -Werror -Wextra -pedantic main.c
```

The compiler will generate an executable file named `a.out` by default. You can run the executable by executing the following command:

```
./a.out
```

You can also specify a custom name for the output file using the `-o` option:

```
gcc -Wall -Werror -Wextra -pedantic main.c -o my_program
```

This will generate an executable named `my_program`, which you can run using:

```
./my_program
```

## Contributing

Contributions to the 0x00-hello_world project are always welcome. If you have any improvements, bug fixes, or new ideas, feel free to submit a pull request.

To contribute to the project, follow these steps:

1. Fork the repository.
2. Create a new branch for your contribution.
3. Make your changes and commit them with descriptive messages.
4. Push your changes to your forked repository.
5. Submit a pull request, explaining the changes you have made.

We appreciate your effort and time in contributing to this project.

## License

This project is open-source and is licensed under the [MIT License](https://opensource.org/licenses/MIT). Feel free to use, modify, and distribute the code as permitted by the license.

Please note that this project is intended for educational purposes and should not be used for production purposes without appropriate review and testing.

Happy coding!
