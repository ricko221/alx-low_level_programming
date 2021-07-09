#include "holberton.h"

/**
 *_isdigit - checks if c is a decimal number
 *@c: The character being checked
 *Return: 1 if the value in c is a decimal number. 0 otherwise.
 */

int _isdigit(int c)
{
  if (c >= 48 && c <= 57)
    {
      return (1);
    }
  else
    {
      return (0);
    }
}
