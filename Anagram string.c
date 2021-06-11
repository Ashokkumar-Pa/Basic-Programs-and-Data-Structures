#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="anagram";
	char b[]="nagaram";
	int alen=strlen(a);
	int blen=strlen(b);
	int i,j,count=0;
	if(alen==blen)
	{
		for(i=0; i<alen;i++)
		{
			for(j=i; j<blen; j++)
			{
				if(a[i]==b[j])
				{
					char temp = b[j];
					b[j]=b[i];
					b[i]=temp;
					count++;
					break;
				}
			}
		}
		if(count==i)
		{
			printf("Same\n");
			printf("%s %s", a,b);
		}
		else
		{
			printf("Not Same");
		}
	}
}
