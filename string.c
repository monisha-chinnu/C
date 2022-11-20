/*
 ============================================================================
 Name        : string.c
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
	char name[20];
	printf("Enter a string value");
	scanf("%s",name);
	printf("The string is %s",name);
	return EXIT_SUCCESS;
}
