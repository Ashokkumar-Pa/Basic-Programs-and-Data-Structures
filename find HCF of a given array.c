#include<stdio.h>

int hcf(int a,int b) 
{ 
   	if(a%b==0) 
   	{ 
 		return b;
	} 
   else 
   { 
        return( hcf (b,a%b ));	
   } 
} 
int main()
{
	int arr[] = {2,8,12};
	int n = sizeof(arr)/sizeof(arr[0]);
	int i, h;
	for(i=0;i<n-1;i++) 
    { 
      	h = hcf(arr[i],arr[i+1]); 
      	arr[i+1] = h; 
	} 
  	printf("%d",h); 
}
