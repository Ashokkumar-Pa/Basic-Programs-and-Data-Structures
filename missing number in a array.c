#include<stdio.h>
int main()
{
	int arr[]={1,2,9,3,7,5,6,8};
	int len= sizeof arr/sizeof( arr[0]);
	int i,sum=0;
	for(i=0; i<len; i++)
	{
		sum = sum + (i+1)- arr[i] ;
	}
	sum = sum + i +1;
	printf("%d is missing",sum);
}

//      output
//  4 is missing
