# 0x15-file_io

## Description
This directory contains C programs and code examples related to file input and output (I/O) operations. It demonstrates how to work with files in the C programming language, including reading from and writing to files. The programs here cover basic file operations, such as opening, reading, writing, and closing files.

## Table of Contents
* [Files](#files)
* [Usage](#usage)
* [Examples](#examples)
* [Compilation](#compilation)
* [Author](#author)

## Files
* `0-read_textfile.c` - A C program that reads and prints the contents of a text file to the standard output.
* `1-create_file.c` - A C program that creates a new file or truncates an existing file.
* `2-append_text_to_file.c` - A C program that appends text to the end of a file.
* `3-cp.c` - A C program that copies the content of one file to another file.
* `100-elf_header.c` - A C program that displays the ELF header of an ELF file.

## Usage
These C programs can be used to perform various file I/O operations from the command line. To use a specific program, compile it using a C compiler and run it with appropriate command-line arguments.

## Examples
Here are some examples of how to use the programs in this directory:

```bash
$ gcc -Wall -Werror -Wextra -pedantic 0-read_textfile.c -o read_textfile
$ ./read_textfile example.txt
```

This command reads and prints the contents of the "example.txt" file.

```bash
$ gcc -Wall -Werror -Wextra -pedantic 1-create_file.c -o create_file
$ ./create_file my_new_file "This is the content of my new file."
```

This command creates a new file named "my_new_file" with the provided content.

## Compilation
To compile these C programs, you can use a C compiler like GCC. Make sure to include the necessary flags and specify the source file and output executable name. For example:

```bash
$ gcc -Wall -Werror -Wextra -pedantic 0-read_textfile.c -o read_textfile
```

This command compiles the "0-read_textfile.c" source file into an executable named "read_textfile."


