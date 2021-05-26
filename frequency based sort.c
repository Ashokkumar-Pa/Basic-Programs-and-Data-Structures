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
	for(j=0;j<len;j++)
	{
		index=findmax(freq);
		for(i=start; i<len; i++)
		{
			if(a[i]==index)
			{
				int temp=a[start];
				a[start]=a[i];
				a[i]=temp;
				start++;
			}
		}
		
		freq[index]=0;
		
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
//int swap(int a[], int len, int freq[],int start)
//{
//	int max=findmax(freq);
//	int i,j;
//	for(i=0; i<len; i++)
//	{
//		if(a[i]==a[max+1])
//		{
//			int temp=a[start];
//			a[start]=a[i];
//			a[i]=temp;
//			start++;
//		}
//	}
//	return swap;
//}
