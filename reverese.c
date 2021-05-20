#include<stdio.h>
#include<string.h>
int main()
{
	char word[]="the is the find string is present in the word or not";
	char find[]="eht";
	int wordlen=strlen(word);
	int findlen=strlen(find);
	int i, j, k, count=0;
	for (i = wordlen, j = 0; i>=0; i--)
   	{
      	if (word[i] == find[j])
       	{
        	j++;
			if(j==findlen)
        	{
         		count++;
         		j = 0;
			}
       	}
	}
	printf("'%s' repeated %d",find,count);
}
