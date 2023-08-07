#include <stdlib.h>

/**
 * *create_array - creates array of chars,
 * also initializes it with a specific char.
 * @size: size of created  array
 * @c: char to initialize
 * Return: pointer to initialized  array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *m = malloc(size);

	if (size == 0 || m == 0)
		return (0);

	while (size--)
		m[size] = c;

	return (m);
}
