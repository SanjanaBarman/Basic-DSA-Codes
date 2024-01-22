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
