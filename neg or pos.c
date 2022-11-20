/*
 ============================================================================
 Name        : neg.c
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
	if(no>0)
	{
		printf("No is positive");
	}
	else
	{
		printf("No is negative");
	}
	return EXIT_SUCCESS;
}
