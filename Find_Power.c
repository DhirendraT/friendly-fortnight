/*
 ============================================================================
 Name        : power.c
 Author      : Dhirendra Tiwari
 Version     :
 Copyright   : Your copyright notice
 Description : to find power in C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int power(int a,int b)
{
    int i , p = 1;
    for(i = 1; i <= b; i++)
    {
        p = p * a;
    }
    return p;
}

int main(int a, int b)
{
    int result;
    printf("Enter any number : ");
    scanf("%d",&a);
    printf("Enter power : ");
    scanf("%d",&b);
    result = power(a,b);
    printf("%d to the power %d is : %d",a,b,result);
    return EXIT_SUCCESS;
}
