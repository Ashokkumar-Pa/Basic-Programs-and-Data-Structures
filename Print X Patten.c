
#include <stdio.h>

int main()
{
    int n=9;
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j+1 || j+i==n)
            {
                printf("%d",i);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}



output


1       1
 2     2 
  3   3  
   4 4   
    5    
   6 6   
  7   7  
 8     8 
9       9
