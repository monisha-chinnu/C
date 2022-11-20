/*
 ============================================================================
 Name        : multidimensional.c
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

	int r,c,i,j,a[100][100];

	printf("Enter array row size : ");
	scanf("%d",&r);
	printf("Enter array coloumn size : ");
	scanf("%d",&c);

	printf("Enter array values : \n");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d\t",&a[i][j]);
		}
	}

	printf("Entered array is : \n");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
