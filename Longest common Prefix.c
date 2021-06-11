#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
	char string[][10] ={"flower","flow","flight"};
	int i, j;
	bool flag;
	for( i=0; i<10; i++)
	{
		char c=string[0][i];
		for( j=0;j<3; j++)
		{
			if(string[j][i] != c)
			{
				flag = false;
				break;
			}
			else
			{
				flag = true;
			}
		}
		if(flag== true)
		{
			printf("%c",c);
		}
		else
		{
			break;
		}
	}
}
