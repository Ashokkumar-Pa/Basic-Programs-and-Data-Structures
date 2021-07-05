// 2D array 1st problem
// { work staring time , work ending time }
// find set of timing work

#include<stdio.h>
int main()
{
	int work[4][2] = {
		{2,6},
		{3,5},
		{7,10},
		{14,16}
	};
	int start,end;
	int i,j;
	for( i=0; i<4; i++)
	{
		for(j=i+1; j<4;j++)
		{
			if( work[i][0] > work[j][0])
			{
				int temp=work[j][0];
				work[j][0]=work[i][0];
				work[i][0]=temp;
				
				temp=work[j][1];
				work[j][1]=work[i][1];
				work[i][1]=temp;
			}
		}
		printf("%d  %d\n",work[i][0],work[i][1]);
	}
	start=work[0][0];
	end=work[0][1];
	printf("%d  %d\n",start,end);
	for( i=1; i<4 ; i++)
	{
		if( end > work[i][0])
		{
			if( end < work[i][1])
			{
				end=work[i][1];
			}
		}
		else if( end <work[i][0] )
		{
			printf("%d  %d\n",start,end);
			start=work[i][0];
			end=work[i][1];
		}
	}
}
