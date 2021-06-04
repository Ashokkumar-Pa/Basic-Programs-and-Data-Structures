#include<stdio.h>
int main()
{
	int number = 25;
	int count =0;
	int i, j;
	printf("Prime numbers are : ");
	for( i=2; i<number; i++)
	{
		for( j=2; j<=i; j++)
		{
			if( i%j == 0 && i>j )
			{
				break;
			}
			else if(i%j == 0 && i==j ) 
			{
				printf("%d ",i);
				count++;
			}
		}
	}
	printf("\nThere are %d prime numbers", count);
}
