#include "main.h"

/**
  *  _strlen - returns the length of the string
  * @str: string to evaluate
  * Return: length of the string
  */
int _strlen(const char *str)
{i
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * print - print char.
 * @str: string.
 *
 * Return: string length.
 */

int print(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		_putchar(str[i]);

	return (i);
}
