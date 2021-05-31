#include<stdio.h>
#include<stdbool.h>
bool isSortedArray(int num[], int start,int end)
{
	return num[start]<num[end];
}
void doBinarySearch(int number[], int start, int end, int find)
{
	int mid = (start + end )/2;
	if( number[mid]==find )
	{
		printf("%d  %d",mid,number[mid]);
		return;
	}
	else if( number[mid]>find )
	{
		doBinarySearch(number, start, mid, find);
	}
	else if( number[mid]<find )
	{
		doBinarySearch(number, mid, end, find);
	}
}
void doRotatedSearch(int number[], int start, int end, int find)
{
	int mid = (start + end )/2;
	if(isSortedArray(number, start, mid))
	{
		if(number[start] < find && find < number[mid])
		{
			doBinarySearch(number,start,mid, find);				
		}
		else
		{
			doRotatedSearch(number, mid, end, find);
		}				
	}
	// Second half is sorted array
	else
	{
		if(number[mid] < find && find < number[end])
		{
			doBinarySearch(number, mid, end, find); 
		}
		else
		{
			doRotatedSearch(number, start,mid, find);
		}
	}
}
int main()
{
	int number[]={10,11,12,15,18,19 ,20,25,4,5,7,9};
	int len= sizeof number/sizeof( number[0]);
	int start = 0, end = len-1, find=7;
	doRotatedSearch(number,start,end, find);
}
