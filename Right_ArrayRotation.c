/*
 ============================================================================
 Name        : Linear Search Array.c
 Author      : Dhirendra Tiwari
 Version     :
 Copyright   : Your copyright notice
 Description : linear Search in array in C
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
void sorting(int arr[], int n)
{
    int i,j,temp;
    for(i = 0; i < n ; i++)
    {
        for(j = i+1; j <= n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void display(int arr[] , int n)
{
    printf("\nAfter sorting array = ");
    for(int i = 0; i < n; i++)
    {
        printf("%d,",arr[i]);
    }
}
int LSArray(int arr[],int n,int key)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(key == arr[i])
            return i;
    }

}
int main()
{
    int key,n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    input(arr , n);
    printf("\nEnter key : ");
    scanf("%d",&key);
    printf("Before sorting :");
    printf("\nIndex of key %d is : %d",key,LSArray(arr,n,key));
    sorting(arr,n);
    display(arr,n);
    printf("\n& Index of key %d is : %d",key,LSArray(arr,n,key));
    return EXIT_SUCCESS;
}
