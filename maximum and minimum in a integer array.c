#include<stdio.h>
#include<limits.h>

int main()
{
	int number[] = {4,6,3,2,5,7,12,9,8,3,2};
	/*  Output 
	    	minimum --> 2 
      		maximum --> 12
	*/
	int maximum = number[0];
	int minimum = number[0];
	int i;
  
	for(i=1; number[i]!='\0'; i++)
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
