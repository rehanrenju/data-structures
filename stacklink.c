#include<stdio.h>
#include<stdlib.h>
#define n 5
struct node
{
	int data;
	struct node*next;

};
struct node *head=NULL,*temp;
int i=1,count=0,ch=1;
void push()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter element:");
	scanf("%d",&newnode->data);
	newnode->next=head;
	head=newnode;
	count++;
	

}
void pop()
{
	if(isempty())
	{
		printf("Underflow");
	}
	else
	{
		printf("Element popped is:%d\n",head->data);
		temp=head;
		head=head->next;
		count--;
		free(temp);
	}
}
void display()
{
	
	temp=head;
	if(isempty())
	{
		printf("Empty stack");
	}
	while(temp->next!=NULL)
	{	
		printf("\t%d",temp->data);
		temp=temp->next;
	}

}
int isempty()
{
	if(count==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isfull()
{
	if(count>=n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void findtop()
{
	printf("\nElement at the top is:%d",head->data);
	printf("\nFound at position:%d",count);
	
}
void main()
{
	int c;
	
	head=(struct node*)malloc(sizeof(struct node));
	do
	{
	printf("\n1.Push\n2.Pop\n3.Display\n4.Find top\n5.Exit\nEnter choice: ");
	scanf("%d",&c);
	int s;
	
	switch(c)
	{
	case 1:
		push();
		break;
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
		exit(0);
		default:
		printf("Invalid choice");
	}
	}
	while(c!=0);

}
