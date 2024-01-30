#include<stdio.h>
#include <stdlib.h>
#define n 5
int top=-1, arr[n];

void isfull()
{
	if(top==n)
		printf("The stack is full");
	else
		printf("The stack is not full");
}

void isEmpty()
{
	if(top==-1)
		printf("The is empty");
	else
		printf("The stack is not Empty");
}

void peek()
{
	printf("The peek value is : %d",arr[top]);
}

void push()
{
	if(top==n-1)
		printf("Overflow");
	else
	{
		int x;
		printf("Enter the value you want to push:");
		scanf("%d",& x);
		top=top+1;
		arr[top]=x;	
	}
}

void pop()
{
	if(top==-1)
		printf("Underflow");
	else
	{
		top--;
	}
}

void display()
{
	if(top==-1)
		printf("The stack is Empty");
	else
	{
		for(int i=top;i>=0;--i)
			printf("%d  ",arr[i]);
	}
}



int main()
{
	int ch;
	
	printf("STACK OPERATIONS USING ARRAY---\t\n");
	
	while(1)
	{
	printf("\n1.is full\n2.is empty\n3.peek\n4.push\n5.pop\n6.diplay\n ");
	printf("Enter your choice(1/2/3/4/5/6):");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			isfull();
			break;
		case 2:
			isEmpty();
			break;
		case 3:
			peek();
			break;
		case 4:
			push();
			break;
		case 5:
			pop();
			break;
		case 6:
			display();
			break;
		default:
			printf("Wrong input");
			exit(1);
			
	}
	
	}
return 0;
}



