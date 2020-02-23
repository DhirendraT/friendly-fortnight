/*
 ============================================================================
 Name        : .c
 Author      : Dhirendra Tiwari
 Version     :
 Copyright   : Your copyright notice
 Description :  in C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int factorial(int num1)
{
    int num2 = 1;
    while(num1>=1)
    {
        num2 *= num1 ;
        num1--;
    }
    return num2;
}
int  combination()
{
    int n,c,r;
    printf("Enter value of n : ");
    scanf("%d",&n);
    printf("Enter value of r : ");
    scanf("%d",&r);
    printf("Combination of %dC%d is : ",n,r);
    c = fact(n)/(fact(r)*fact(n-r));
    return c;

}

int main()
{
	printf("%d",combination());
	return EXIT_SUCCESS;
}
