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
	int no1,no2,no3;
	printf("Enter the 3 nos");
	scanf("%d%d%d",&no1,&no2,&no3);
	if(no1 > no2 && no1 > no3)
	{
		printf("no1 %d is greater",no1);
	}
	else{
		if(no2 > no1 && no2 >no3)
		{
			printf("no2 %d is greater",no2);
		}
		else{
			printf("no3 %d is greater",no3);
		}
	}
	return EXIT_SUCCESS;
}
