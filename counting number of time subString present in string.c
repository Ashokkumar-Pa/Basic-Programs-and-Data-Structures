#include<stdio.h>
int main()
{
	char string[] = "hello";
	char find[] = "ll";
	int i,j;
	int count=0;
	for(j=0; string[j] !='\0'; j++)
	{
		if( string[j] == find[0])
		{
			for( i=1; find[i] != '\0'; i++)
			{
				j++;
				if( string[j] != find[i])
				{
					break;
				}
				else if( string[j] == find[i] && find[i+1] =='\0')
				{
					count++;
				}
			}
		}
	}
	printf("%d",count);
}
