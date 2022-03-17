#include "main.h"

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
{
	if (c >= 'z')
{
	_putchar('\n');

}
	else
{
		_putchar(c);
}
}
}
