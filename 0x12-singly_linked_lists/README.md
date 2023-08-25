# Singly Linked Lists

Welcome to the `0x12-singly_linked_lists` directory! This project introduces you to the concept of singly linked lists in programming. A singly linked list is a linear data structure where elements are connected through a series of nodes. Each node holds a value and a reference (pointer) to the next node in the sequence.

## What's Inside?

In this directory, you will find the following files:

- `0-print_list.c`: A program that prints all the elements of a linked list.
- `1-list_len.c`: A program that calculates and returns the number of elements in a linked list.
- `2-add_node.c`: A program that adds a new node to the beginning of a linked list.
- `3-add_node_end.c`: A program that adds a new node to the end of a linked list.
- `4-free_list.c`: A program that frees the memory occupied by a linked list.
- `lists.h`: A header file containing the function prototypes and necessary structures.

## How to Use?

1. Compile the programs:
   ```
   gcc -Wall -Werror -Wextra -pedantic *.c -o linked_list
   ```

2. Run the compiled executable:
   ```
   ./linked_list
   ```

3. Follow the on-screen instructions to interact with the linked list programs.

## Example

Let's walk through a simple example using the provided programs:

Suppose you have a linked list with the following elements: `3 -> 7 -> 11 -> 15`

- Running `0-print_list.c` will display:
  ```
  Elements of the linked list:
  [3] [7] [11] [15]
  ```

- Running `1-list_len.c` will output:
  ```
  Number of elements in the linked list: 4
  ```

- Running `2-add_node.c` and then `0-print_list.c` will display:
  ```
  Elements of the linked list:
  [99] [3] [7] [11] [15]
  ```

- Running `3-add_node_end.c` and then `0-print_list.c` will display:
  ```
  Elements of the linked list:
  [99] [3] [7] [11] [15] [98]
  ```

- Running `4-free_list.c` will free the memory used by the linked list.

## Learning and Exploring

Feel free to explore the code in each file to understand how linked lists work and how the different operations are implemented. Modify the programs, experiment with different elements, and enjoy learning about this fundamental data structure!

If you have any questions or need assistance, don't hesitate to ask. Happy coding! 🚀
