/*
 ============================================================================
 Name        : Binary_Search.c
 Author      : Dhirendra Tiwari
 Version     :
 Copyright   : Your copyright notice
 Description : Binary Search in array in C
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
    printf("After sorting : ");
    for(int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
}
int BSArray(int arr[],int start,int end,int key)
{
    int mid = start+((end-start)/2);
    if (end<start) return -1;
    if (key == arr[mid]) return mid;
    if (key > arr[mid]) return BSArray(arr,mid+1,end,key);
    return BSArray(arr,start,mid-1,key);

}
int main()
{
    int key,n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    input(arr , n);
    sorting(arr , n);
    display(arr , n);
    int start = 0;
    int end = n-1;
    printf("\nEnter key : ");
    scanf("%d",&key);
    printf("\nIndex of key %d is : %d",key,BSArray(arr,start,end,key));
    return EXIT_SUCCESS;
}
