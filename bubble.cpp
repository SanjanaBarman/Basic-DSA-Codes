#include<stdio.h>
#define n 5
int main()
{
	int arr[n],i,j,c=0;
	printf("Enter the element of array:");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<(n-1-i);j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				c++;
			}
		}
	}
	printf("The sorted array is:");
	for(i=0;i<n;i++)
		printf("%d    ",arr[i]);
	printf("\nThe number of comparison is : %d",c);
}
