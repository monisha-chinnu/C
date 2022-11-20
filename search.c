/*
 ============================================================================
 Name        : search.c
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
	int n,a[10],i,skey,flag=0;
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

	printf("\nPlease enter the search key");
	scanf("%d",&skey);

	for(i=0;i<n;i++)
	{
		if(skey == a[i])
		{
			flag=1;
			break;
		}
	}


	if(flag == 1)
	{
		printf("Value found at position %d",i+1);
	}
	else
	{
		printf("Value not found");
	}

	return EXIT_SUCCESS;
}
