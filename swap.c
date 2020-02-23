/*
 ============================================================================
 Name        : swap.c
 Author      : Dhirendra Tiwari
 Version     :
 Copyright   : Your copyright notice
 Description : swaping in C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main(int a, int b)
{
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("After swapping \na = %d \nb = %d",a,b);

    return EXIT_SUCCESS;
}
