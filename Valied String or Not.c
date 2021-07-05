#include<stdio.h>
#include<string.h>
int main()
{
	char string[]="(is (the ";
	int len= strlen(string);
	int open= 0, close =0;
	int i;
	for( i=0; i<len; i++)
	{
		if(open < close)
		{
			printf("Invalied String");
			break;
		}
		if( string[i] == '(')
		{
			open++;
		}
		else if( string[i] == ')')
		{
			close++;
		}
	}
	if( open == close)
	{
		printf("valied String");
	}
	else
	{
		printf("Invalied String");
	}
}
