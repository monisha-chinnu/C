/*
 ============================================================================
 Name        : pattern2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//	* * * *
//	*     *
//	*     *
//	* * * *

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(i==1 || i==4 || j==1 || j==4)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}


	return EXIT_SUCCESS;
}
