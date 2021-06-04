#include<stdio.h>
int main()
{
	int number = 1234;
	while( number != 0 )
	{
		printf("%d",number%10);
		number = number/10;
	}
}
