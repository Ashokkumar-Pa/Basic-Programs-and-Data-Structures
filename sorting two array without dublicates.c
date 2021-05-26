#include <stdio.h>

int main()
{
    int a[]={1,3,5,7,9};
	  int b[]={2,3,4,6,7,8,10};
    int sizea=sizeof(a)/sizeof(a[0]);
    int sizeb=sizeof(b)/sizeof(b[0]);
    int size=sizeb+sizea;
    int i=0,j=0,k=0;
  
    while(i+j<size)
    {
	    if(j>sizeb-1 && i>sizea-1){
	           break;
	       }
	       else if (i<sizea && j<sizeb && a[i]<b[j])
	       {
	           printf("%d ",a[i++]);
	       }
	       else if (i<sizea && j<sizeb && a[i]>b[j])
	       {
	           printf("%d ",b[j++]);
	       }
	       else if(i < sizea && j < sizeb && a[i]==b[j])
	       {
	           printf("%d ",a[i++]);
	           j++;
	       }
	       else if(j>sizeb-1)
	       {
	           printf("%d ",a[i++]);
	       }
	       else if(i>sizea-1)
	       {
	           printf("%d ",b[j++]);
	       }
    }
}
