#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - Function that prints string before excution of main function
 */
void hare(void)
{
printf("You're beat! and yet, you must allow,");
printf("\nI bore my house upon my back!\n");
}
