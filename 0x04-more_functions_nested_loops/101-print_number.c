#include "main.h"
#include <limits.h>

/**
 * print_positive_number - Prints a positive integer using _putchar
 * @n: The positive integer to be printed
 */
void print_positive_number(unsigned int n)
{
    if (n / 10 != 0)
        print_positive_number(n / 10);

    _putchar((n % 10) + '0');
}

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to be printed
 */
void print_number(int n)
{
    if (n == 0)
    {
        _putchar('0');
        return;
    }

    if (n < 0)
    {
        _putchar('-');
        if (n == INT_MIN)
        {
            print_positive_number(-(unsigned int)INT_MIN);
            return;
        }
        n = -n;
    }

    print_positive_number((unsigned int)n);
}

