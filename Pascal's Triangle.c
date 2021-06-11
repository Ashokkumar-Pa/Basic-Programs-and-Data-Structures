#include <stdio.h>

void main()
{
    int n=5,c=1;
	int space, i, j;
    for(i=0;i<n;i++)
    {
        for(space=1; space<=n-i;space++)
        {
        	printf(" ");
		}
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
            {
                c=1;            	
			}
            else
            {
            	c=c*(i-j+1)/j;
			}
            printf(" %d",c);
        }
        printf("\n");
    }
}
