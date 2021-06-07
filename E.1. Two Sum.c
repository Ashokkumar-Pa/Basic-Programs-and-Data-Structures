#include<stdio.h>
int main()
{
	int arr[]={4,6,3,7,9,5};
	int sum=9;
	int len = sizeof arr/sizeof arr[0];
	int start =0, end = 1;
	while( start<end)
	{
		if(arr[start]+arr[end]==sum)
		{
			printf("Index number %d and %d",start,end);
			break;
		}
		else if(end==len-1)
		{
			start++;
			end=start+1;
		}
		else
		{
			end++;
		}
	}
}
