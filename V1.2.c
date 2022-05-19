#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{	
	struct node
	{
		int data;
		struct node *next;
	};
	struct node *head=NULL,*pos=NULL,*tail=NULL;
	int ch,entry;
	while(1)
	{
		printf("\n1.Insert\n2.Display\n3.Count\n4.Search\n5.Time\n6.Exit\n");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				printf("\nEnter data");
				scanf("%d",&entry);
				if (head==NULL)
				{
					head=(struct node*)malloc(sizeof(struct node));
					head->data=entry;
					pos=head;
					tail=head;
				}
				else
				{
					tail->next=(struct node*)malloc(sizeof(struct node));
					tail=tail->next;
					tail->data=entry;
				}
					break;
			}
			case 2:
				{
					pos=head;
					printf("\nElements are:");
					while(pos!=NULL)
					{
						printf("\t%d",pos->data);
						pos=pos->next;
					}
						break;
				}
			case 3:
				{
					int cnt=0;
					pos=head;
					while(pos!=NULL)
					{
						cnt++;
						pos=pos->next;
					}
					printf("Count= %d",cnt);
					break;
				}
			case 4:
				{
					int s;
					printf("Enter element to search:");
					scanf("%d",&s);
					pos=head;
					while (pos!=NULL)
					{
						if (pos->data==s)
						{
							printf("The element is not found");
						}
						else
						{
							printf("The element is found at: %p",pos);
							break;
							
						}
						pos=pos->next;
					}
					break;
				}
			case 5:
				{
				 	float timedifference_msec(struct timeval t0, struct timeval t1)
					{
					    return (t1.tv_sec - t0.tv_sec) * 1000.0f + (t1.tv_usec - t0.tv_usec) / 1000.0f;
					}
					
					   struct timeval t0;
					   struct timeval t1;
					   float elapsed;
					   
					   long *data;
					   long num=100000000, j;
					   data = (long *)malloc(sizeof(long)*num);

					   gettimeofday(&t0, NULL);
					   if(data != NULL)
					    {
						for(j = 0; j < num; j++)
						{
						    data[j] = rand()%100;
						}
					    }
					   gettimeofday(&t1, NULL);
					   elapsed = timedifference_msec(t0, t1);
					   printf("Code executed in %f milliseconds.\n", elapsed);

					   return 0;
					
				}
					
			case 6:
				{
					printf("\nGoodbye");
					exit(0);
				}
		}
	}	
}
				
