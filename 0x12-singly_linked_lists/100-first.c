#include <stdio.h>

void print_me_first(void) __attribute__((constructor));

/**
 * print_me_first - function that prints before the main function is executed
 *
 * Return: Always 0 (Success)
 */
void print_me_first(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
