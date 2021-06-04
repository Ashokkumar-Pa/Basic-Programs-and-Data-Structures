#include<stdio.h>
#include<stdbool.h>
int LCM(int a, int b)
{
   int m;
   if( a > b)
   {
		m = a;
   }
   else
   {
   		m = b;
   }
   while(true)
   {
      	if(m % a == 0 && m % b == 0)
		{
      		return m;	
	  	}
	  	m++;
   }
}
int LCMarr(int arr[], int n)
{
	int i;
   int lcm = LCM(arr[0], arr[1]);
   for(i = 2; i < n; i++)
   {
      lcm = LCM(lcm, arr[i]);
   }
   return lcm;
}
int main() 
{
   int arr[] = {6,9};
   int n = sizeof(arr)/sizeof(arr[0]);
   printf("%d ",LCMarr(arr, n));
}
