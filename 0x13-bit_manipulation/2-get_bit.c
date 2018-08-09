#include "holberton.h"
#include <stdio.h>
/**
* get_bit - returns the value of a bit a a given index
* @n: the number we want to check
* @index: the index
*
* Description: we use bit manipulation to do this stuff
* Return: 1 or 0  or -1 if error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp = n;
	int count = 0;
	unsigned int count2 = 0;
	unsigned int i;
	int array[1024];

	if (n == 0)
		return (0);
	while (temp > 0)
	{
		temp = temp >> 1;
		count++;
		count2++;
	}
	if (index > count2)
		return (-1);
	for (count -= 1; count >= 0; count--)
	{
		i = n >> count;
		if (i & 1)
			array[count] = 1;
		else
			array[count] = 0;
	}
	return (array[index]);
}
