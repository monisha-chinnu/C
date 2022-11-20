/*
 ============================================================================
 Name        : prime.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int no,i,flag=0;
	printf("Enter the no");
	scanf("%d",&no);
	for(i=2;i<no;i++)
	{
		if(no % i == 0)
		{
			flag = 1;
			break;
		}
	}
	if(flag==0)
	{
		printf("%d is a prime numers",no);
	}
	else
	{
		printf("%d is not a prime numers",no);
	}

	return EXIT_SUCCESS;
}
