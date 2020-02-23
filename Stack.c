/*
 ============================================================================
 Name        : stack.c
 Author      : Dhirendra Tiwari
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int info[MAX];   /*to store elements of stack*/
int top;        /*to maintain top of the stack*/
int value;
/* function declrations */
void sinit();   /*to initialize the queue*/
int sfull();   /*to check if stack is full*/
int sempty();  /*to check if stack is empty*/
void push();   /*to add an element*/
void pop();    /*to delet an element*/
void display(); //to display stack
int peek();    /*to get the top element*/


int main(void)
{
	int choice;
	sinit();
     while(1)
	{
		printf("1. push\n2. pop\n3. display\n4. Exit\nenter choice :");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:// to push
			if (sfull())
				printf("Stack is full\n");
			else
			{
				printf("enter the value to push :");
				scanf("%d",&value);
				push();
				printf("Value pushed : %d\n",value);
			}
			break;
		case 2://pop
			if (sempty())
				printf("stck is empty");
			else
			{
				value = peek();
				pop();
				printf("value poped : %d\n", value);
			}
			break;
		case 3:display();//display
		        break;
		case 4: exit(0);

		default:printf("\nwrong choice");
		}
	}
	return 0;
}

//function implementations
//to initialize the stack
void sinit()
{
	int i;
	top = -1;      //initialize top to -1
	for (i=0; i<MAX; i++)
		info[i]= -1;
}
//to check if stack is full

int sfull()
{
	if (top == MAX-1)
		return 1;    //stack is full
	else
		return 0;    //stack is not full
}
int sempty()
{
	if (top==-1)
		return 1;    //stack is empty
	else
		return 0;    //stack is not empty
}

//to push the element
void push()
{
	top = top + 1;     //increment top
	info[top] = value;  //add data to arrays
}

//to pop the element
void pop()
{
	info[top] = -1;    //optional
	top = top - 1;     //decrement top
}
//to get the top element
void display()
{
	int i;
	if(sfull())
		printf("stack is full");
        if (sempty())
		printf("stck is empty");
	else
	{
                printf("Stack is.......");
		for(i=top; i>=0; --i)
		{
			printf("%d",info[i]);
		}
	}
}
int peek()
{
	return info[top];      //returns top most element
}
