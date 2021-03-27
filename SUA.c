#include<stdio.h>
#define SIZE 3

void push(int a[],int *top)
{
	int e;
	if(*top <= SIZE-2)
	{ 	
		printf("\nEnter number : ");
		scanf("%d",&e);
		*top=*top+1;
		a[*top]=e;
		printf("\nThe number %d pushed into the stack :",e);
	}
	else
	{
		printf("\nStack underflow");	
	}
}

void pop(int a[],int *top)
{
	int e;
	if(*top>-1)
	{
		e=a[*top];
		printf("\nThe element %d popped from stack",e);
		*top=*top-1;
	}
	else
	{
		printf("\nStack Underflow!!!");
	}
}

void display(int a[],int *top)
{
	int i;
	printf("\nStack elements are : ");
	for(i=*top;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
}

int main()
{
	int arr[SIZE],top=-1;
	int ch,e=1;
	while(e)
	{
		printf("\n-----MENU-----");
		printf("\n1.push\n2.pop\n3.display\n4.exit");
		printf("\n----------------");
		printf("\nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push(arr,&top);
			break;
			case 2:pop(arr,&top);
			break;
			case 3:display(arr,&top);
			break;
			case 4:e=0;
			printf("\nExiting from the program");
			default:printf("\nPlease enter valid choice!!!");
		}
	}
	return 0;
}
