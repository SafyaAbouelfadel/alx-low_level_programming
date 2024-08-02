#include "lists.h"

void constructor_first(void) __attribute__ ((constructor));

/**
 * constructor_first - executes before main()
 *
 * Return: void
 */
void constructor_first(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
