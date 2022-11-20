/*
 ============================================================================
 Name        : maths.c
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
	int choice;
	float no1,no2,result;
	printf("Enter the 2 nos\n");
	scanf("%f%f",&no1,&no2);
	printf("Select the operation to be performed \n1. Addition \n2. Subtraction \n3. Division \n4. Multiplication \nEnter your choice \t");
	scanf("%d",&choice);
	if(choice == 1)
	{
		result = no1 + no2;
		printf("Result of sum is %f",result);
	}
	else if(choice == 2)
	{
		result = no1 - no2;
		printf("Result of sub is %f",result);
	}
	else if(choice == 3)
	{
		result = no1 / no2;
		printf("Result of div is %f",result);
	}
	else if(choice == 4)
	{
		result = no1 * no2;
		printf("Result of mult is %f",result);
	}

	else{
		printf("fool");
	}
	return EXIT_SUCCESS;
}
