#include<stdio.h>
int main()
{
	int a[]={3,5,21,7,8,4};
	int len= sizeof a/sizeof(a[0]);
	int fact[len];
	int i, j, k, count=0;
	for(i=0; i<len; i++)
	{
		for(k=1; k<=a[i]; k++)
		{
			if( a[i] % k == 0 )
			{
				count++;
			}
		}
		fact[i]=count;
		count=0;
	}
	for(i=0; i<len; i++)
	{
		for(j=i+1; j<len; j++)
		{
			if( fact[i]  < fact[j] )
			{
				int temp= a[i];
				a[i]=a[j];
				a[j]=temp;
				
				int var= fact[i];
				fact[i]=fact[j];
				fact[j]=var;
			}
		}
	}
	for(i=0; i<len; i++)
	{
		printf("%d ",a[i]);
	}
}
