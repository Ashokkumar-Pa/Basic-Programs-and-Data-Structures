#include<stdio.h>
int main()
{
  
	int merge[]={1,2,3,2};
	int arr[]={1,2,4,2,4};
	int mergelen= sizeof(merge)/ sizeof(merge[0]);
	int len= sizeof(arr)/sizeof(arr[0]);
	int i,j;
  
	// remove dublicate from merge array and print 
	for(i=0; i<mergelen;i++)
	{
		for(j=i+1; j<mergelen;j++)
		{
			if(merge[i] == merge[j])
			{
				break;
			}
		}
		if(j == mergelen)
		{
			printf("%d ",merge[i]);
		}
	}
  
	// remove dublicate from arr array and store it in arr array
	for(i=0; i<len;i++)
	{
		for(j=i+1; j<len;j++)
		{
			if(arr[i] == arr[j])
			{
				arr[j]=arr[len-1];
				arr[len-1]='\0';
				len--;
			}
		}
	}
  
	// merging both ( merge and arr ) arrays
	for(i=0; i<len;i++)
	{
		for(j=0; j<mergelen;j++)
		{
			if(arr[i] == merge[j])
			{
				break;
			}
		}
		if(j == mergelen)
		{
			printf("%d ",arr[i]);
		}
	}
}
