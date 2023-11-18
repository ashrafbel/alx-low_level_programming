#include <stdio.h>


void fun(void) __attribute__ ((constructor));


/**
* fun - executed before the main
* function is executed
*/
void fun(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

