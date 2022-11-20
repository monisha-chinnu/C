/*
 ============================================================================
 Name        : array.c
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
	int a[5],i,n;
	printf("Enter the limit");
	scanf("%d",&n);
	printf("Enter the values");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the values: ");
	for(i=0;i<=n;i++)
	{
		printf(" %d\t",a[i]);
	}

	return EXIT_SUCCESS;
}
