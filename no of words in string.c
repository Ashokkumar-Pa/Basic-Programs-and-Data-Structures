#include<stdio.h>
#include<string.h>
int main()
{
	int i, count=1;
	char string[]=" find the number of words in the string ";
	for(i=1; i<(strlen(string)-1); i++)
	{
		if((string[i]==' '&& string[i+1] !=' ') || string[i]=='\t' || string[i]=='\n')
		{
			count++;
		}
	}
    printf("%d",count);
}
