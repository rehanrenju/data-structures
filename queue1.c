#include<stdio.h>
#include<stdlib.h>
#define n 5
int main()
{
	int queue[n],ch=1,front=0,rear=0,i,j=1;
	printf("1.Insert Element\n2.Deletion\n3.Display\n4.Exit");
	while(ch)
	{
		printf("\nEnter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				if(rear==n)
					printf("\nOverflow");
				else
				{
					printf("Enter number %d:",j++);
					scanf("%d",&queue[rear++]);
				}
				break;
			}
			case 2:
			{
				if(front==rear)
				{
					printf("\nUnderflow");
				}
				else	
				{
					printf("\nDeleted element is %d",queue[front++]);	
            			}
            			break;
            		}
        		case 3:
        		{
            			printf("Queue Elements are:");
            			if(front==rear)
                			printf("\nQueue is Empty");
            			else
            			{
                			for(i=front; i<rear; i++)
                			{
                    				printf(" %d\t",queue[i]);
                			}
                		break;
                		}
                	}
            		case 4:
            		{
            			printf("Goodbye");
                		exit(0);
                	}
            		default:
            		{
                		printf("Invalid choice");
            		}
        	}
    	}
    return 0;
}
					
					
