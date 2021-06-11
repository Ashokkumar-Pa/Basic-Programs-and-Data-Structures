#include<stdio.h>
int find(int x[], int xL, int y[], int yL)
{
	int i, j=0;
	for(i=0; i<xL; i++)
	{
		if(x[i] == y[j])
		{
			printf("%d ",y[j]);
			j++;
		}
	}
}

int main()
{
	int a[]={4,9,5};	
	int b[]={9,4,9,8,4};
	int lenA = sizeof a/sizeof a[0];
	int lenB = sizeof b/sizeof b[0];
	if(lenA >= lenB)
	{
		find(a, lenA, b, lenB);
	}
	else
	{
		find(b, lenB, a, lenA);
	}
}
