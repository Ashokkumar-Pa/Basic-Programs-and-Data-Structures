#include<stdio.h>
#include<string.h>
int main()
{
	char string[] = "a man, a plan, a canal: panama";
	int len =strlen(string);
	int start=0;
	int end= len-1;
	while(start<end)
	{
		if(string[start]==string[end])
		{
			start++;
			end--;
		}
		else if(string[start]<'a' || string[start]==' ')
		{
			start++;
		}
		
		else if(string[end]<'a' || string[end]==' ')
		{
			end--;
		}
		else
		{
			printf("Given string is not a palindrome");
			return;
		}
	}
	printf("Given string is a palindrome");
}
