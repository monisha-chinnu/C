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
	int no1,no2,sum;
	printf("Enter the values \n");
	scanf("%d%d",&no1,&no2);
	sum = no1 + no2;
	printf("The sum is %d",sum);
	return EXIT_SUCCESS;
}
