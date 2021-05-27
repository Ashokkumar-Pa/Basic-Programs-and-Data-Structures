#include<stdio.h>
int main()
{
    int n[]={12,5,3,6,2,8,5,5,3,44},sum=0;
    int size=sizeof(n)/sizeof(n[0]);
    int max=0,i;
    
    for(i=0; i<size; i+=2)
    {
      sum = n[i]+n[i+1];
	  if(sum>max)
	  {
	  	max=sum;
	   } 
    }
    
    printf("%d",max);
}
