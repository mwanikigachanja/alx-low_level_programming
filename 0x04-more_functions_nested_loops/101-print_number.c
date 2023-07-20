#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to be printed
 */
void print_number(int n)
{
    int reversed = 0;
    int original = n;

    if (n == 0)
    {
        _putchar('0');
        return;
    }
    else if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    while (n != 0)
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    while (reversed != 0)
    {
        _putchar(reversed % 10 + '0');
        reversed /= 10;
    }

    if (original == 0)
        _putchar('0');
}

