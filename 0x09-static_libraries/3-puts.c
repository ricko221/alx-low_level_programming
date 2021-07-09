#include <unistd.h>
#include "holberton.h"
/**
 * _puts - prints a string
 * @str: The string to be printed to stdout
 *
 * Return: no return value
 * On error, -1 is returned, and errno is set appropriately.
 */

void _puts(char *str)
{
  int n;

  for (n = 0; str[n] != '\0'; n++)
    _putchar(str[n]);
  _putchar('\n');
}
