/*
 ============================================================================
 Name        : fibonacci.c
 Author      : Dhirendra Tiwari
 Version     :
 Copyright   : Your copyright notice
 Description : Fibonacci series program in C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void fibo(int num)
{
    int a=1, b =  0  ,  sum=0 ;

    for(int i=0;i <= num;i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        printf(" %d ",sum);
    }
}

int main(int n)
{
    printf("Enter nth term to find fibonacci series : ");
    scanf("%d",&n);
    printf("Fibonacci series :  ");
    fibo(n);
    return 0;
}
