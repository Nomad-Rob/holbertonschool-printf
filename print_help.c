#include "main.h"

/**
  * print_number - printing input number to base 10
  * @n: number to be based 10
  *
  * Return: void
  */

int  print_number(unsigned int n)
{
	int retval;
	unsigned int num = n;

	if (num / 10)
		print_number(num / 10);
	retval = _putchar('0' + num % 10);
	if (retval == -1)
	{
		return (retval);
	}
	return (retval);
}

/**
* countDigits - count how many digits the number is
* @num: 
*
* Return: the count
*/
int countDigits(unsigned int num)
{
	int count = 0;

	while (num > 0)
	{
		count++;
		num /= 10;
	}
	return (count);
}

/**
 * _strlen - count the number of characters in a string
 * @str: pointer to a string
 *
 * Return: number of characters in the string
 */

int _strlen(char *str)
{
	int count = 0;

	while (*(str + count))
		count++;

	return (count);
}

/**
* countBinary - count how many digits the number is
* @num: the number to be counted
*
* Return: the count
*/
int countBinary(unsigned int num)
{
	int count = 0;

	while (num > 0)
	{
		count++;
		num /= 2;
	}
	return (count);
}

