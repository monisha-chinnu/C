/*
 ============================================================================
 Name        : break.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	for(i=1;i<=10;i++)
	{
		printf("Hi\n");
		if(i==5)
		{
			break;
		}
		printf("Hello\n");
	}
	printf("Finished");
	return EXIT_SUCCESS;
}
