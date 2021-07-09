#include <unistd.h>
#include "holberton.h"
/**
 * _strlen - checks the length of a string
 * @s: character pointer
 *
 * Return: length of a string
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strlen(char *s)
{
  int j;

  j = 0;
  for (; s[j] != '\0'; j++)
    ;
  return (j);
}
