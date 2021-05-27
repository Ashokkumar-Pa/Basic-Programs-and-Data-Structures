#include<stdio.h>
int main()
{
	int arr[]={5,4,6,7,4};
	int len= sizeof arr/sizeof(arr[0]);
	int i, j, max=-1;
	for(i=0; i<len; i++)
	{
		for(j=i+1;j<len; j++)
		{
			if(arr[j]>max && arr[i]<arr[j] )
			{
				max=arr[j];
			}
		}
		printf("%d ",max);
		max=-1;	
	}
}

// output
//  7 7 7 -1 -1
