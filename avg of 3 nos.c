/*
 ============================================================================
 Name        : avg.c
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
	int no1,no2,no3;
	float avg;
	printf("Enter the values");
	scanf("%d%d%d",&no1,&no2,&no3);
	avg = (no1 + no2 + no3) / 3;
	printf("The average is %f",avg);
	return EXIT_SUCCESS;
}
