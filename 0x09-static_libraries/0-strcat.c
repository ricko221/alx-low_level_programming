#include <unistd.h>
#include "holberton.h"
/**
 * *_strcat - concatenates two strings
 * @dest: first string
 * @src: secont string
 * Return: a pointer to the resulting string dest.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strcat(char *dest, char *src)
{
  int count = 0, count2 = 0;

  while (*(dest + count) != '\0')
    {
      count++;
    }

  while (count2 >= 0)
    {
      *(dest + count) = *(src + count2);
      if (*(src + count2) == '\0')
	break;
      count++;
      count2++;
    }
  return (dest);
}
