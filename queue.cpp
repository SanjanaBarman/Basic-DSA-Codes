#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5
int front=-1,rear=-1,arr[MAXSIZE];

void isFull()
{
	if(rear==MAXSIZE-1)
		printf("The queue is full");
	else
		printf("The queue is not full");
}

void isEmpty()
{
	if(front==-1 || front>rear)
		printf("The queue is empty");
	
	else
		printf("Queue is not empty");	
}

void enqueue()
{
	int data;
	if(rear==MAXSIZE-1)
		printf("Overflow");
	else
	{
		if(front ==-1)
			front=0;
			printf("Enter the value you want to insert:");
			scanf("%d",&data);
			rear++;
			arr[rear]=data;
	}
}


void dequeue()
{
	if(front==-1 || front>rear)
		{
		printf("Underflow");
		return;
		}
		
	else
	{
		printf("The element deeleted:%d",arr[front]);
		front++;	
	}	
}

void display()
{
	int i;
	if(front==-1 || front>rear)
		printf("The queue is empty");
	
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d     ",arr[i]);
		}
		printf("\n");
	}
	
}



int main()
{
	int ch;
	printf("QUEUE OPERATIONS USING ARRAY\n");
	
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
