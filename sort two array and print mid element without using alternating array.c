#include<stdio.h>
#include<stdbool.h>
int main()
{
	int a[]={1,3,4,17};
	int b[]={8,9,11,15};
	int Alen= sizeof a/sizeof(a[0]);
	int Blen= sizeof b/sizeof(b[0]);
	int len=(Alen-1+Blen-1)/2;
	int a1=0,b1=0, i =0;
	int currentData,data;
	
	while(a1 < Alen || b1 < Blen)
	{		
		if(a1 >= Alen || a[a1]>=b[b1])
		{
			currentData = b[b1++];
		}
		else if(b1 >= Blen || a[a1]<=b[b1])
		{
			currentData = a[a1++];
		}
		if(i==len+1)
		{
			printf( "%d ", (currentData + data)/2);
			break;
		}
		data= currentData;
		i++;
	}
}
