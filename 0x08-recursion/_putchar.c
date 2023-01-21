#include <unistd>

/**
 * _putchar - prints c to stdout.
 * @c: variable of type char.
 *
 * Return: 1 on success.
 * On failure, -1 and set erno appropraitely.
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}
