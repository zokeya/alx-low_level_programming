#include<stdio.h>

/**
 * myPrintFun - Apply the constructor attribute to myPrintFun()
 * executed before main()
 */
void myPrintFun(void) __attribute__ ((constructor));

/**
 * myPrintFun - implementation of myPrintFun
 */
void myPrintFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
