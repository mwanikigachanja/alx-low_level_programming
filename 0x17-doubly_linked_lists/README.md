# 0x17-doubly_linked_lists

## Description

This project is part of the Holberton School curriculum and focuses on the implementation and manipulation of doubly linked lists in the C programming language.

## Table of Contents

- [Files](#files)
- [Usage](#usage)
- [Compilation](#compilation)
- [Examples](#examples)
- [Contributing](#contributing)
- [License](#license)

## Files

- `0-print_dlistint.c`: Function that prints all the elements of a doubly linked list.
- `1-dlistint_len.c`: Function that returns the number of elements in a doubly linked list.
- `2-add_dnodeint.c`: Function that adds a new node at the beginning of a doubly linked list.
- ...

(_Add more files and descriptions as needed_)

## Usage

To use these functions in your C program, include the appropriate header file and compile the source files along with your program.

Example:

```c
#include "lists.h"

int main(void)
{
    dlistint_t *head = NULL;

    add_dnodeint(&head, 42);
    add_dnodeint(&head, 98);
    print_dlistint(head);

    return 0;
}
```

## Compilation

Compile the C files along with your program using a command like the following:

```bash
gcc -Wall -Werror -Wextra -pedantic 0-main.c 0-print_dlistint.c -o my_program
```

(_Adjust compilation command based on your specific needs and additional files._)

## Examples

Here are some examples of how to use the functions:

```c
dlistint_t *head = NULL;

add_dnodeint(&head, 42);
add_dnodeint(&head, 98);
print_dlistint(head);

/* Output: 98 42 */
```


## Contributing

If you would like to contribute to this project, please follow the [CONTRIBUTING.md](CONTRIBUTING.md) guidelines.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
```
