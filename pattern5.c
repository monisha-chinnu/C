/*
 ============================================================================
 Name        : pattern5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//	1	2	3	4
//	2	3	4	1
//	3	4	1	2
//	4	1	2	3

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
		int i,j,k;
		for(i=1;i<=4;i++)
		{
			for(j=1;j<=4;j++)
			{
				k = i + j -1;
				if(k > 4)
				{
					k = k-4;
				}
				printf("%d\t",k);
			}
			printf("\n");
		}
	return EXIT_SUCCESS;
}
