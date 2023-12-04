# 0x1A Hash Tables Project

## Table of Contents
- [Description](#description)
- [Files](#files)
- [Compilation](#compilation)
- [Usage](#usage)

The 0x1A Hash Tables project is an implementation of hash tables in the C programming language. This project is part of the curriculum at Holberton School and focuses on understanding and implementing hash tables, which are a fundamental data structure widely used in computer science.

A hash table is a data structure that maps keys to values using a hash function to compute an index into an array of buckets or slots, from which the desired value can be found.

## Files

The project consists of the following files:

1. **hash_tables.h**: Header file containing all function prototypes and necessary data structures.
2. **0-hash_table_create.c**: Function to create a new hash table.
3. **1-djb2.c**: Hash function using the djb2 algorithm.
4. **2-key_index.c**: Function to find the index of a key.
5. **3-hash_table_set.c**: Function to add an element to the hash table.
6. **4-hash_table_get.c**: Function to retrieve a value associated with a key.
7. **5-hash_table_print.c**: Function to print the elements of a hash table.
8. **6-hash_table_delete.c**: Function to delete a hash table.

## Compilation

To compile the code, use the following:

```bash
$ gcc -Wall -Werror -Wextra -pedantic *.c -o hash_table
```

## Usage

To use the hash table functions in your program, include the "hash_tables.h" header file in your source code.

```c
#include "hash_tables.h"
```

## Example

Here is a simple example demonstrating the usage of the hash table functions:

```c
#include "hash_tables.h"

int main(void)
{
    hash_table_t *ht;

    /* Create a new hash table */
    ht = hash_table_create(1024);

    /* Add key-value pair to the hash table */
    hash_table_set(ht, "name", "John");

    /* Retrieve and print the value associated with the key */
    printf("%s\n", hash_table_get(ht, "name"));

    /* Delete the hash table */
    hash_table_delete(ht);

    return (0);
}
```
