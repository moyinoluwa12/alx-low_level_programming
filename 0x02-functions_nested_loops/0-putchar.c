#include "_putchar.h"
/**
 * main - Print "_putchar"
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char display[i] = "_putchar";

	while (i < 8)
	{
		_putchar(display[i]);
		*i++;
	} _putchar('/n');

	return (0);
}


