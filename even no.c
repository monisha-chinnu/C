/*
 ============================================================================
 Name        : even.c
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
	int no;
	printf("Enter the no");
	scanf("%d",&no);
	if(no % 2 == 0)
	{
		printf("The no is even");
	}
	else
	{
		printf("The no is odd");
	}
	return EXIT_SUCCESS;
}
