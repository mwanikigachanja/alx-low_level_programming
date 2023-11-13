# Dynamic Libraries (0x18-dynamic_libraries)

## Overview

This folder contains a collection of C programs that demonstrate the usage of dynamic libraries in the C programming language. Dynamic libraries, also known as shared libraries, are compiled binaries that can be loaded into a program at runtime, offering modularity and flexibility.

## Files

1. **libholberton.so** - This is a dynamic library containing various utility functions that can be used by other programs.

2. **100-operations.so** - A dynamic library with mathematical operations that can be utilized by programs using dynamic linking.

## How to Compile

To compile the programs in this folder, use the provided `Makefile`. Simply run the following command:

```bash
make all
```

This will generate the executable files for each program.

## How to Use

### Running Programs

To run a program that uses dynamic libraries, use the following syntax:

```bash
LD_PRELOAD=./<library_name>.so ./<executable_name>
```

Replace `<library_name>` with the name of the dynamic library and `<executable_name>` with the name of the compiled program.

### Example:

```bash
LD_PRELOAD=./libholberton.so ./program
```

## File Descriptions

### libholberton.so

This dynamic library provides various utility functions, such as string manipulation and printing.

### 100-operations.so

A dynamic library containing mathematical operations like addition, subtraction, multiplication, and division.

## Author

This code was written by [Your Name]. Feel free to contact me with any questions or feedback.

**Note:** Make sure to replace "[Your Name]" in the Author section with your actual name or preferred alias.
