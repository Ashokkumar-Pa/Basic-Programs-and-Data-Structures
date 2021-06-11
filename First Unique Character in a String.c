//  Given a string, return the first non-repeating character in it and return

#include<stdio.h>
#include<string.h>
int main()
{
	char string[]="unique";
	char unique;
	int len =strlen(string);
	int i,j;
	for( i=0; i<len; i++)
	{
		unique = string[i];
		for( j=i+1; j<len; j++)
		{
			if(unique == string[j])
			{
				break;
			}
			else if(unique != string[j] && j==len-1)
			{
				unique = string[i];
				printf("%c",unique);
				break;
			} 	
		}
	}
}
