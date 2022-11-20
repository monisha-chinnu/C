/*
 ============================================================================
 Name        : menu.c
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
	printf("Menu\n 1. Biriyani\n 2.Mandi\n 3.Fried rice\n 4.Ice creams\n 5.Juices\n 6. Parotta\n Select the Food\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("you have entered biriyani");
			break;
		case 2:
			printf("you have entered mandi");
			break;
		case 3:
			printf("you have entered fries rice");
			break;
		case 4:
			printf("you have entered ice creams");
			break;
		case 5:
			printf("you have entered juices");
			break;
		case 6:
			printf("you have entered parotta");
			break;
		default:
			printf("Fool");





	}
	return EXIT_SUCCESS;
}
