//WAP in C to sort an array using Bubble or Selection Sort using switch case and functions.

#include <stdio.h>
int bubblesort(int arr[],int n)
{
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<(n-1-i);j++)
			{
				if(arr[j]>arr[j+1])
				{
					int temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;	
				}	
			}
			for(int k=0;k<n;k++)
				printf("%d ",arr[k]);
			printf("\n");
		}
		printf("The sorted array: ");
		for(int k=0;k<n;k++)
				printf("%d ",arr[k]);
}

int selectionsort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;	
			}
		}
			int temp=arr[min];
			arr[min]=arr[i];
			arr[i]=temp;	
			
			for(int k=0;k<n;k++)
				printf("%d ",arr[k]);
			printf("\n");
	}
	printf("The sorted array: ");
	for(int k=0;k<n;k++)
		printf("%d ",arr[k]);
}
int main()
{
	int arr[100],n,ch;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the element of the array:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n1.Bubble Sort\n2.Selection Sort\n");
	printf("Enter your choice(1/2) :");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			bubblesort(arr,n);
			break;
		case 2:
			selectionsort(arr,n);
			break;
		default:
			printf("Incorrect output");
			break;
	}
	return 0;	
}


/*OUTPUT:-
CIRCULAR QUEUE OPERATIONS USING ARRAY

1.isFull
2.isEmpty
3.Enqueue
4.Dequeue
5.Display
Enter your choice(1/2/3/4/5):3
Enter the value you want to insert:5
1.isFull
2.isEmpty
3.Enqueue
4.Dequeue
5.Display
Enter your choice(1/2/3/4/5):3
Enter the value you want to insert:9
1.isFull
2.isEmpty
3.Enqueue
4.Dequeue
5.Display
Enter your choice(1/2/3/4/5):1
The queue is not full
1.isFull
2.isEmpty
3.Enqueue
4.Dequeue
5.Display
Enter your choice(1/2/3/4/5):2
Queue is not empty
1.isFull
2.isEmpty
3.Enqueue
4.Dequeue
5.Display
Enter your choice(1/2/3/4/5):4
The element deeleted:5
1.isFull
2.isEmpty
3.Enqueue
4.Dequeue
5.Display
Enter your choice(1/2/3/4/5):5
The queue is:9
1.isFull
2.isEmpty
3.Enqueue
4.Dequeue
5.Display
Enter your choice(1/2/3/4/5):4
The element deeleted:9
1.isFull
2.isEmpty
3.Enqueue
4.Dequeue
5.Display
Enter your choice(1/2/3/4/5):5
The queue is empty
1.isFull
2.isEmpty
3.Enqueue
4.Dequeue
5.Display
Enter your choice(1/2/3/4/5):2
The queue is empty
1.isFull
2.isEmpty
3.Enqueue
4.Dequeue
5.Display
Enter your choice(1/2/3/4/5):6
Invalid input*/
