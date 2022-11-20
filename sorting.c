/*
 ============================================================================
 Name        : sorting.c
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

	int n,a[10],i,j,temp;

	printf("Enter the limit : ");
	scanf("%d",&n);

	printf("Enter the array values : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The array values are : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}

	printf("\n");

	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\nThe array values after sorting are : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}


	return EXIT_SUCCESS;
}
