#include<stdio.h>
#include<string.h>
int main()
{
	char word[]="the is the not";
	char find[]="the";
	char replace[] = "why";
	int wordlen=strlen(word);
	int findlen=strlen(find);
	int relen=strlen(replace);
	int i, j=0, k ;
	for (i = 0; i<wordlen; i++)
   	{
      	if (word[i] == find[j])
       	{
        	j++;
			if(j==findlen)
        	{
        		i++;
        		int gap=i-j;
        		int no=0;
				for(k=i; k<wordlen; )
				{
					if(no<relen)
					{
						word[gap++]=replace[no++];
					}
					else
					{
						word[gap++]=word[k++];
					}
				}
				word[gap]='\0';
         		j = 0;
			}
       	}
	}
	printf("%s",word);
}
