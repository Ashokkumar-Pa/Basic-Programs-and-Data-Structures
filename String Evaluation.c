#include<stdio.h>
#include<string.h>
int main()
{
	char input[] ="1+2*5";
	int n =strlen(input);
	int num;
	int i;
	for( i=0; i<n; i++)
	{
		if( input[i] < '9')
		{
			printf("%d",input[i]);
		}
	}
}
