#include<stdio.h>
#include<limits.h>

int main()
{
	int num[]={4,6,3,2,5,7,12,9,8,3,2};
	int max=INT_MIN;
	int min=INT_MAX;
	int i;
  
	for(i=0; num[i]!='\0'; i++)
	{
		if(num[i]>max)
		{
			max=num[i];
		}
		else if(num[i]<min)
		{
			min=num[i];
		}
	}
  
	printf(" minimum --> %d \n maximum --> %d",min,max);
}
