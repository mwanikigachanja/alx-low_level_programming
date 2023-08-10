# 0x0C-more_malloc_free

## Description
This directory contains solutions to programming exercises related to dynamic memory allocation in the C programming language. It focuses on using `malloc`, `calloc`, `realloc`, and `free` functions to allocate and manage memory on the heap.

## Files

- **0-malloc_checked.c:** A function that allocates memory using `malloc`. It checks if the allocation is successful and exits the program with a status value if it fails.

- **1-string_nconcat.c:** A function that concatenates two strings up to a specified number of bytes.

- **2-calloc.c:** A function that allocates memory for an array using `calloc`.

- **3-array_range.c:** A function that creates an array of integers from `min` to `max`, inclusive.

- **100-realloc.c:** A function that reallocates a memory block using `realloc`.

## Getting Started
1. Clone this repository to your local machine using:
   ```bash
   git clone https://github.com/your-username/0x0C-more_malloc_free.git
   ```

2. Navigate to the project directory:
   ```bash
   cd 0x0C-more_malloc_free
   ```

3. Compile the C files using your preferred C compiler. For example:
   ```bash
   gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-malloc_checked.c -o malloc_checked
   ```

4. Run the compiled executable to test the functions:
   ```bash
   ./malloc_checked
   ```

## Usage
You can use these functions in your C programs that require dynamic memory allocation. Each file contains a function with a specific purpose related to memory allocation. Refer to individual function descriptions for more details.

## Acknowledgments
These exercises are part of the Holberton School curriculum, helping students learn and practice dynamic memory allocation concepts in C programming.

```
