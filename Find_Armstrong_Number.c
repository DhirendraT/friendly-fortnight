/*
 ============================================================================
 Name        : Armstrong.c
 Author      : Dhirendra Tiwari
 Version     :
 Copyright   : Your copyright notice
 Description : Check armstrong number in C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num,a,b,sum = 0;
	printf("Enter number : ");
	scanf("%d",&num);
	b = num;
	while(num>0)
	{
		a = num % 10;
		sum = sum + (a*a*a);
		num = num / 10;
	}
	if(b == sum)
		printf("YES %d is an Armstrong no.",b);
	else
		printf("NO %d is Not an Armstrong no.",b);

	return EXIT_SUCCESS;
}
