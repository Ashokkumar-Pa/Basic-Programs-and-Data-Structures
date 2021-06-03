#include<stdio.h>
int main()
{
	int num[4][2]={{3,5},{3,9},{7,5},{7,9}};  // input must be sortted
	if( num[0][0] == num[1][0] && num[0][1] == num[2][1])  
	{
		if( num[1][1] == num[2][0] && num[3][0] == num[2][0] && num[3][1] == num[2][0])
		{
			printf("Square");
		}
		else if( num[1][1] == num[3][1] && num[2][0] == num[3][0])
		{
			printf("Rectangular");
		}
		return 0;
	}
}
