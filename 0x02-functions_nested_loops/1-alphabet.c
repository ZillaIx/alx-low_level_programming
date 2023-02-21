#include "main.h"
/**
 * print_alphabet - A to Z actually in lower case
 * main - Main Function
 * Return: always 0;
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
