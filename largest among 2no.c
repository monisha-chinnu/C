/*
 ============================================================================
 Name        : largest.c
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
	int no1,no2;
	printf("Enter the 2 nos");
	scanf("%d%d",&no1,&no2);
	if(no1 > no2)
	{
		printf("no1 %d is greater",no1);
	}
	else
	{
		printf("no2 %d is greater",no2);
	}
	return EXIT_SUCCESS;
}
