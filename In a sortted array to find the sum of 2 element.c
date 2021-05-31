#include<stdio.h>
int main()
{
	int number[]={4,5,7,9,10,11,12,15,18,19,20,25};
	int len= sizeof number/sizeof( number[0]);
	int find=21;
	int start=0,end=len-1;
	while(start<end)
	{
		if( find== number[start]+number[end] )
		{
			printf("%d + %d = %d \n",number[start],number[end],find);
			return;
		}
		else if( find < number[start]+number[end] )
		{
			end--;
		}
		else if( find > number[start]+number[end] )
		{
			start++;
		}
	}
}
