#include<stdio.h>
int main()
{
    int n[]={20,3,1,19,-3,0,-24};
    int size=sizeof(n)/sizeof(n[0]);
    int dif;
    int max=0,i;
    int difMax=0;
    for(i=0; i<size-1; i++)
    {
     	if(n[i]<n[i+1])
     	{
     		max=n[i+1]-n[i];
     		if(max>difMax)
			{
				difMax=max;
				dif=n[i+1];
			}
     	}
     	else if(n[i]>n[i+1])
     	{
     		max=n[i]-n[i+1];
     		if(max>difMax)
			{
				difMax=max;
				dif=n[i];
			}
		}
    }
    printf("%d ",dif);
}
