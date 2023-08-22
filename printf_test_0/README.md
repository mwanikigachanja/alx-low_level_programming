-----------------------------------0x11.C - PRINTF---------------------------------
An ALX Group Project In C.
By Momodu Fred Yakubu and Ahmed Seid 
Date: 25th June 2023.

Below, were the tasks given. In other, for us to solve this project, the questions and processes were divided into two parts.
The first part was handled by (Ahmed Seid) with the creation, and cloning of the repository from GitHub, and providing 
solutions to the questions from 0 - 7.
Secondly, my partner, Momodu Fred Yakubu git pull the repository from my GitHub platform to attend to the remaining questions; 8 -15,
then convert the file using gcc, before git add., commit, and push. which then, I also git pull into my own machine, to get the 
task done.
Thank you. 

----------------------------------------TASKS------------------------------------------
0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life.

Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);

Returns: the number of characters printed (excluding the null byte used to end output to strings)

write output to stdout, the standard output stream
format is a character string. 
The format string is composed of zero or more directives. 
See man 3 printf for more detail. 
You need to handle the following conversion specifiers:
c
s
%
You don’t have to reproduce the buffer handling of the C library printf function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers


1. Education is when you read the fine print. Experience is what you get if you don't

Handle the following conversion specifiers:

d
i
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers


2. With a face like mine, I do better in print

Handle the following custom conversion specifiers:

b: the unsigned int argument is converted to binary

alex@ubuntu:~/c/printf$ cat main.c
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%b\n", 98);
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 main.c
alex@ubuntu:~/c/printf$ ./a.out
1100010
alex@ubuntu:~/c/printf$


3. What one has not experienced, one will never understand in print

Handle the following conversion specifiers:

u
o
x
X
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers


4. Nothing in fine print is ever good news

Use a local buffer of 1024 chars in order to call write as little as possible.



5. My weakness is wearing too much leopard print

Handle the following custom conversion specifier:

S : prints the string.
Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
alex@ubuntu:~/c/printf$ cat main.c
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%S\n", "Best\nSchool");
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 main.c
alex@ubuntu:~/c/printf$ ./a.out
Best\x0ASchool
alex@ubuntu:~/c/printf$


6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print


Handle the following conversion specifier: p.

You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers


7. The big print gives and the small print takes away
Handle the following flag characters for non-custom conversion specifiers:

+
space
#



8. Sarcasm is lost in print

Handle the following length modifiers for non-custom conversion specifiers:

l
h
Conversion specifiers to handle: d, i, u, o, x, X


9. Print some money and give it to us for the rain forests

Handle the field width for non-custom conversion specifiers.


10. The negative is the equivalent of the composer's score, and the print the performance

Handle the precision for non-custom conversion specifiers.


11. It's depressing when you're still around and your albums are out of print
Handle the 0 flag character for non-custom conversion specifiers.

12. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection
Handle the - flag character for non-custom conversion specifiers.


13. Print is the sharpest and the strongest weapon of our party
Handle the following custom conversion specifier:

r : prints the reversed string


14. The flood of print has turned reading into a process of gulping rather than savoring
Handle the following custom conversion specifier:

R: prints the rot13'ed string



15. *

All the above options work well together.


-----------------------------SOLUTION--------------------------------------------------
In the repository we
1. Created our prototype with our header file
2. Readme.md file
3. created the required file from 0-15

We hoped that we are able to meet your expectation via this project.
Thank you.
Ahmed & Momodu
