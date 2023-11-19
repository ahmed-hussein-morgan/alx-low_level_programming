#include<stdio.h>

/**
 * before_main - printing before the main() is excecuted
 *
 * Return: NO Return
*/

void before_main(void) __attribute__((constructor));
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n")
	printf("I bore my house upon my back!\n");
}
