#include<stdio.h>
#include<limits.h>

int main()
{
	int number[] = {4,6,3,2,5,7,12,9,8,3,2};
	int maximum = INT_MIN;
	int minimum = INT_MAX;
	int i;
  
	for(i=0; number[i]!='\0'; i++)
	{
		if( number[i] > maximum )
		{
			maximum = number[i];
		}
		
		else if( number[i] < minimum )
		{
			minimum = number[i];
		}
	}
  
	printf(" minimum --> %d \n maximum --> %d" , minimum , maximum );
}
