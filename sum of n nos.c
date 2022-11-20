/*
 ============================================================================
 Name        : sum.c
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
	int no,sum,i;
	printf("Enter the value");
	scanf("%d",&no);
	for(i=0;i<=10;i++)
	{
		sum = sum + i;
	}
	printf("Sum is %d",sum);
	return EXIT_SUCCESS;
}
