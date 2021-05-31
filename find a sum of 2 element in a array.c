#include<stdio.h>
int main()
{
	int number[]={4,5,10,3,7,5,6,4,9,11,5};
	int len= sizeof number/sizeof( number[0]);
	int find=17;
	int i,j,sum;
	for( i=0; i<len; i++)
	{
		for( j=i+1; j<len; j++)
		{
			if(find== number[i]+number[j])
			{
				printf("%d + %d = %d \n",number[i],number[j],find);
				return;
			}
		}
	}
}
