#include<stdio.h>
void insert(int a[],int *front,int *rear)
{
	int e;
	printf("\nEnter number : ");
	scanf("%d",&e);
	if((*front==-1)&&(*rear==-1))
	{
		*front=*rear=0;
	}
	else
	{
		*rear+=1;
	}
	a[*rear]=e;
	printf("\nEntered element %d inserted into the QUEUE",e);
}

void delete(int a[],int *front,int *rear)
{
	int e;
	e=a[*rear];
	printf("\nThe element %d is deleted from QUEUE",e);
	*front+=1;
}

void display(int a[],int *front,int *rear)
{
	int i;
	printf("\nThe QUEUE elements are :\n");
	for(i=*front;i<=*rear;i++)
	{
		printf("%d\t",a[i]);
	}
}

int main()
{
	int arr[10];
	int front,rear;
	int ch,e=1;
	front=rear=-1;
	while(e)
	{
		printf("\nQUEUE Using Array");
		printf("\n-----MENU-----");
		printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
		printf("\n--------------");
		printf("\nChoose your option : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert(arr,&front,&rear);
			break;
			case 2:delete(arr,&front,&rear);
			break;
			case 3:display(arr,&front,&rear);
			break;
			case 4:e=0;
			printf("\nExiting from the program\n");
			break;
			default:printf("\nChoose a valid choice!!!");
		}
	}
return 0;
}
