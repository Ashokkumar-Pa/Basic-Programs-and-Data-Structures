#include<stdio.h>
#include<string.h>
int main()
{
	char word[]="the is the not";
	char find[]="the";
	int wordlen=strlen(word);
	int findlen=strlen(find);
	int i, j=0, k, count=0;
	for (i = 0; i<wordlen; i++)
   	{
      	if (word[i] == find[j])
       	{
        	j++;
			if(j==findlen)
        	{
        		i++;
        		int gap=i-j;
				for(k=i; k<wordlen; k++)
				{
					word[gap++]=word[k];
				}
				word[gap] = '\0';
         		j = 0;
			}
       	}
	}
	printf("%s",word);
}
