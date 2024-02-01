#include<stdio.h>
#define n 5
int main()
{
	int i,j,arr[n],c=0,key;
	printf("Enter the element of array:");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && key<arr[j])
		{
			arr[j+1]=arr[j];
			j--;
			c++;
		}
		arr[j+1]=key;
	}
	printf("The sorted array is:");
	for(i=0;i<n;i++)
		printf("%d    ",arr[i]);
	printf("\nThe number of comparison is : %d",c);
}
