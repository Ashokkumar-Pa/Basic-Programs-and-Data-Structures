#include<stdio.h>
int main()
{
	int wave[] = {10,5,3,11,2,20,22,9,1};
	// output 1 10 2 11 3 20 5 22 9 
	int len = sizeof wave/sizeof (wave[0]);
	int i, j;
    
	for( i=0; i<len; i++ )
	{
		for( j=i+1 ; j<len; j++ )
		{
			if( i%2==0 && wave[i] > wave[j] )
			{
				int temp=wave[j];
				wave[j]=wave[i];
				wave[i]=temp;
			}
		}
	}
    
	for( i=0; i<len; i++ )
	{
		printf("%d ", wave[i] );
	}
}
 
