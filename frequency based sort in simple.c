#include<stdio.h>
int main()
{
	int a[] = {3,4,3,2,4,5,3};
	int len = sizeof a/sizeof (a[0]);
	int freq[10]={0};
	int i, j,k,index;
  
	for(i=0; i<len; i++)
    {
    	freq[ a[i] ]++;
	}
	int start=0; 

	for(i=0;i<len;i++)
	{
		for(j=i; j<len; j++)
		{
			if(freq[a[i]]<freq[a[j]])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}		
	}
  
	for(k=0;k<len;k++)
		{
			printf("%d ",a[k]);
		}
}

int findmax(int freq[])
{
	int i,index=0;
	int max=0;
	for(i=0; i<10;i++)
	{
		if(freq[i]>max)
		{
			max=freq[i];
			index=i;
		}
	}
	return index;
}
