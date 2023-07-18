#include "dog.h"
#include <stdio.h>
/**
 * _strlen - a dog struct
 * @str: initial the dog
 * Return: void
*/

int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}
