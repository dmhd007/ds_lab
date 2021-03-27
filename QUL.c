#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
struct Node *front=NULL;
struct Node *rear=NULL;
void insert()
{
	struct Node *temp;
	int val;
	temp=(struct Node*)malloc(sizeof(struct Node));
	if(temp==NULL)
	{
		printf("\nQUEUE Overfolw");
		return;
	}
	else
	{
		printf("\nEnter value : ");
		scanf("%d",&val);
		temp->data=val;
		temp->next=NULL;
		if(front==NULL)
		{
			front=rear=temp;
		}
		else
		{
			rear->next=temp;
			rear=temp;
		}
	}
	printf("\nOne value inserted into the queue");
}

void delete()
{
	struct Node *temp;
	if(front==NULL)
	{
		printf("\nQueue Underflow");
		return;
	}
	else
	{
		temp=front;
		front=front->next;
		printf("\nThe value %d is deleted from the QUEUE",temp->data);
		free(temp);
	}
}

void display()
{
	struct Node *temp;
	temp=front;
	if(front==NULL)
	{
		printf("\nEmpty QUEUE!!!");
	}
	else
	{
		printf("\nQUEUE Elements are : ");
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
		
	}
} 

void main()
{
	int ch;
	int e=1;
	printf("QUEUE using linked list");
	while(e)
	{
		printf("\n-----MENU-----");
		printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
		printf("\n--------------");
		printf("\nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
			break;
			case 2:delete();
			break;
			case 3:display();
			break;
			case 4:e=0;
			printf("\nExiting from the program\n");
			break;
			default:printf("Please enter valid choice!!!");
		}
	}
}
