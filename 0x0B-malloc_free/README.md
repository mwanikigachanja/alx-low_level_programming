```markdown
# 0x0B-malloc_free

This directory contains C programs that demonstrate the usage of dynamic memory allocation using the `malloc` function and memory deallocation using the `free` function. Dynamic memory allocation allows programs to allocate memory during runtime, enabling more flexible memory management.

## Files

Here's a list of the files in this directory along with a brief description of each:

- `0-create_array.c`: A program that creates an array of characters using dynamic memory allocation and initializes it with a specific character.

- `1-strdup.c`: A program that implements the `strdup` function, which duplicates a string using dynamic memory allocation.

- `2-str_concat.c`: A program that concatenates two strings using dynamic memory allocation.

- `3-alloc_grid.c`: A program that creates a two-dimensional array of integers using dynamic memory allocation.

- `4-free_grid.c`: A program that deallocates the memory used by a previously created 2D array.

- `5-argstostr.c`: A program that concatenates all the arguments passed to it as strings using dynamic memory allocation.

- `100-strtow.c`: A program that splits a string into words using dynamic memory allocation.

- `101-crackme_password`: An executable that contains a password protected by a simple "crackme" program. The password needs to be discovered.

## Usage

To compile and run any of the programs in this directory, you can use a C compiler such as `gcc`. For example, to compile `0-create_array.c`, you can use the following command:

```
gcc -Wall -Wextra -Werror -pedantic -o create_array 0-create_array.c
```

Then, you can run the compiled executable:

```
./create_array
