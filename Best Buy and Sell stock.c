#include<stdio.h>
int main()
{
	int data[]={8,1,3,5,8,5,2};
	int n = sizeof data/sizeof(data[0]);
	int buy, sell;
	int i;
	buy = data[0];
	sell = data[0];
	for( i=1; i<n; i++)
	{
		if(buy > data[i])
		{
			buy = data[i];
		}
		else if(sell < data[i])
		{
			sell = data[i];
		}
	}
	printf("Buy at %d\nSell at %d",buy,sell);
} 

// output
//      Buy at 1
//      Sell at 8
