#include<stdio.h>
#include<stdlib.h>
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
		printf("\n1.Insert\n2.Display\n3.Count\n4.Exit\n");
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
					printf("\nGoodbye");
					exit(0);
				}
		}
	}	
}
				
