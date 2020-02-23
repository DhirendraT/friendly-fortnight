/*
 ============================================================================
 Name        : Left_ArraRotation.c
 Author      : Dhirendra Tiwari
 Version     :
 Copyright   : Your copyright notice
 Description : Left Array Rotation of array in C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void input(int arr[], int n)
{
    printf("Enter values of array : ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
}
void Lrotatebyone(int arr[], int n)
{
    int i , temp = arr[0];
    for(i = 0 ; i < n-1 ; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[i] = temp;
}
void Lrotate(int arr[], int n)
{
    int i, d;
    printf("Enter value to rotate an array by  : ");
    scanf("%d",&d);
    for(i = 0; i < d; i++)
    {
        Lrotatebyone(arr , n);
    }
}
void display(int arr[], int n)
{
    int i;
    for(i = 0 ; i < n ; i++)
    {
        printf("%d",arr[i]);
    }
}


int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    input(arr , n);
    Lrotate(arr , n);
    display(arr , n);
    return EXIT_SUCCESS;
}
