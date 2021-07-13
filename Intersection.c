#include<stdio.h>
int main()
{
  
	int arr[]={88,55,43,77,99,33,22};
	int find[]={22,55,99,77,90};
	int len1= sizeof arr/ sizeof* arr;
	int len2= sizeof find/ sizeof* find;
	int i,j;
  
	for( i=0; i<len1; i++ )
	{
		for( j=0; j<len2; j++ )
		{
			if( arr[i] == find[j] )
			{
				printf( "%d ", arr[i] );
			}
		}
	}
}
