#include<stdio.h>
#include<string.h>
int main()
{
	char input []= "abcde";
    char find []= "a*";
    int len=strlen(input);
    int i, count=0;
    int findno=0;
    for(i=0; i<len; i++)
    {
    	if(input[i]==find[findno] || find[findno]=='?')
    	{
    		count++;
			findno++;
		}
		else if( find[findno]=='*')
		{
			count++;
			if(find[findno+1]==input[i+1])
			{
				findno++;
			}
		}
		else
		{
			printf("No");
			return 0;
		}
	}
	printf("yes");
}
