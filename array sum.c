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
	int n,a[20],i,sum = 0;
	setbuf(stdout,NULL);
	printf("Enter the limit :");
	scanf("%d",&n);
	printf("Enter the array values \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The array values are : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum = sum + a[i];
	}
	printf("\nThe sum of array values are : %d",sum);
	return EXIT_SUCCESS;
}
