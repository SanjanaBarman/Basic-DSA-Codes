#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5
int front=-1,rear=-1,arr[MAXSIZE];

void isFull()
{
	if(front==(rear+1)%MAXSIZE)
		printf("The queue is full");
	else
		printf("The queue is not full");
}

void isEmpty()
{
	if(front==-1 && rear==-1)
		printf("The queue is empty");
	
	else
		printf("Queue is not empty");	
}

void enqueue()
{
	int data;
	if(front==-1 && rear==-1)
	{
			front =0;
			rear=0;
			printf("Enter the value you want to insert:");
			scanf("%d",&data);
			arr[rear]=data;
	}
	else if(front==(rear+1)%MAXSIZE)
		printf("OVERFLOW");	
	else
	{
		rear=(rear+1)%MAXSIZE;
		printf("Enter the value you want to insert:");
		scanf("%d",&data);
		arr[rear]=data;
	}
}


void dequeue()
{
	if(front==-1 && rear==-1)
		{
		printf("Underflow");
		return;
		}
		
	else if(front==rear)
	{
		printf("The element deeleted:%d",arr[front]);
		front=rear=-1;	
	}
	else
	{
		printf("The element deeleted:%d",arr[front]);
		front=(front+1)%MAXSIZE;
	}
		
}

void display()
{
	int i=front;
	if(front==-1 && rear==-1)
		printf("The queue is empty");
	
	else
	{
		printf("The queue is:");
		while(i!=rear)
		{
			printf("%d     ",arr[i]);
			i=(i+1)%MAXSIZE;
		}
		printf("%d",arr[rear]);
	}
	
}



int main()
{
	int ch;
	printf("CIRCULAR QUEUE OPERATIONS USING ARRAY\n");
	
	while(1)
	{
	
	printf("\n1.isFull\n2.isEmpty\n3.Enqueue\n4.Dequeue\n5.Display\n");
	printf("Enter your choice(1/2/3/4/5):");
	scanf("%d",&ch);
	
		switch(ch)
		{
			case 1:
				isFull();
				break;
			case 2:
				isEmpty();
				break;
			case 3:
				enqueue();
				break;
			case 4:
				dequeue();
				break;
			case 5:
				display();
				break;
			default:
				printf("Invalid input");
				exit(0);
				
		}
	}
	return 0;	
}
