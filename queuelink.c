#include<stdio.h>
#include<stdlib.h>
#define n 5
struct node
{
	int data;
        struct node *next;
};
struct node *head=NULL,*newnode,*temp;
int ch,count=0;

void enqueue()
{  
        if(count>=n)
        {
	        printf("Overflow\n");
		
	}
        else
        {
        	newnode=(struct node *)malloc(sizeof(struct node));
        	printf("Enter data:");
        	scanf("%d",&newnode->data);
        	newnode->next=NULL;
        if(head==NULL)
       	{
       		head=temp=newnode;
        }
        else
        {
		temp->next=newnode;
		temp=newnode;
        }
        count++;
        }
       
}
void display()
{
	if(head==NULL)
        {
            printf("Undeflow");
        }
        else
        {  
            printf("Elements present in queue:\n");
            temp=head;
            while(temp!=NULL )
            {
            	printf("%d\t",temp->data);
                temp=temp->next;
               
            }
        }  
    }
   
void dequeue()
{
	struct node *temp;
        temp=head;
        if(head==NULL)
        {
	        printf("Underflow\n");
        }
	else
	{
		head=head->next;
		printf("Deleted element is %d",temp->data);
        	free(temp);
        }
}
void main()
{
	int c;
       
        do
        {
     
        printf("\n1.Insert\n2.Display\n3.Delete\n4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&c);
     
        switch(c)
        {
            case 1:
                enqueue();
                break;
            case 2:
                display();
                break;

            case 3:
                dequeue();
                break;
                   
            case 4:
                printf("Goodbye\n");
                exit(0);
            default:
                printf("Invalid choice");
        }
        }while(c!=0);
}
   
   
