#include<stdio.h>
#define n 5
int main()
{
	int i,j,arr[n],c=0,min;
	printf("Enter the element of array:");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
				min=j;
		}
		if(min!=i)
		{
			int temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
		c++;
	}
	
	
	printf("The sorted array is:");
	for(i=0;i<n;i++)
		printf("%d    ",arr[i]);
	printf("\nThe number of comparison is : %d",c);
}
