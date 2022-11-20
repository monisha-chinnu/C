/*
 ============================================================================
 Name        : swap.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int a,b,temp;
	printf("Enter the values\n");
	scanf("%d%d",&a,&b);
	temp = a;
	a = b;
	b = temp;
	printf("The values after swap are\n a=%d\n b=%d",a,b);
	return EXIT_SUCCESS;
}
