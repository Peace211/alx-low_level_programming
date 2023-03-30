#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character s to sideout
 *@s - The character to print
 *
 *Return: On sucess 1
 * On error, -1 is returned, and ermo is set appropriately
 */

int _putchar(char s)
{
	return(write(1, &s, 1));
}
