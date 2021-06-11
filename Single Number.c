//	Given a non-empty array of integers n, every element appears twice except for one element. Find that single one.


#include<stdio.h>
#include<stdbool.h>

int main()
{
	int n[]={1,1,2,2,4,4,5,5,7};
	int len =sizeof n/sizeof n[0];
	int i, j;
	int freq[10]={0};
	for(i=0; i<len; i++)
    {
    	freq[ n[i] ]++;
	}
	for(j=0; j<len; j++)
	{
		if(freq[j]==1)
		{
			printf("%d ",j);
			break;		
		}		
	}	
}
