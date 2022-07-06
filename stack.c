#include<stdio.h>
#include<stdlib.h>
#define n 5
int top=-1;
int stack[n];

void push(int v)
{
	if(isfull())
		printf("\nOverflow\n");
	else
	{
		top++;
		stack[top]=v;
		printf("\n%d pushed to stack",stack[top]);
	}
}
void pop()
 {
	if(isempty())
		printf("\nUnderflow");
	else
	{
		printf("\n%d element popped",stack[top]);
		top--;
	}
 }
int isfull()
{
	if(top==n-1)
		return 1;
	else
		return 0;
}
int isempty()
{
	if(top==-1)
		return 1;
	else 
		return 0;
}
void findtop()
{
	printf("\nThe element at the top is %d",stack[top]);
 	printf("\nElement at position %d",top);
	
}
void display()
{
	int i,x;
 	x=top;
	for(i=x;i>=0;i--)
		printf("\t%d",stack[i]);
}

void main()
{
 	while(1)
	{
		int ch,e;
		printf("\n1.Push\n2.Pop\n3.Display\n4.Find top\n5.Exit");
		printf("\nEnter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
 			case 1:
			{
				printf("\nEnter element:");
				scanf("%d",&e);
				push(e);
				break;
			}
 			case 2:
				pop();
				break;
			case 3:
				display();
				break;
 			case 4:
				findtop();
				break;
			case 5:
			{
 				printf("Goodbye");
				exit(0);
			}
		}
	}
}

