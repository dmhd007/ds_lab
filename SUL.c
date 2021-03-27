#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};

struct Node *push(struct Node *top)
{
	struct Node *temp;
	int val;
	printf("\nEnter a value : ");
	scanf("%d",&val);
	temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=val;
	if(top==NULL)
	{
		temp->next=NULL;
	}
	else
	{
		temp->next=top;
	}
	top=temp;
	printf("\nOne value inserted into the stack");
	return top;
}

struct Node *pop(struct Node *top)
{
	if(top==NULL)
	{
		printf("\nStack under flow");
	}
	else
	{
		struct Node *temp=top;
		printf("\nDeleted element : %d",temp->data);
		top=temp->next;
		free(temp);
	}
	return top;
}

void display(struct Node *top)
{
	if(top==NULL)
	{
		printf("\nStack is empty");
	}
	else
	{
		struct Node *temp=top;
		while(temp->next!=NULL)
		{
			printf("%d-->",temp->data);
			temp=temp->next;
		}
		printf("%d-->NULL",temp->data);
	}
}

void main()
{
	int ch,e=1;
	struct Node *top=NULL;
	printf("\nStack using Linked list");
	while(e)
	{
		printf("\n-----MENU-----");
		printf("\n1.push\n2.pop\n3.display\n4.exit");
		printf("\n--------------");
		printf("\nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:top=push(top);
			break;
			case 2:top=pop(top);
			break;
			case 3:display(top);
			break;
			case 4:e=0;
			printf("\nExiting from the program\n");
			break;
			default:printf("\nPlease enter valid choice");
		}
	}
}
