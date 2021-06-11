#include <stdio.h>
#include<string.h>
int printRepeat(char a,int size);
int printWithSpace(char column[],int size);
int findMaxLength(char name[][10]);
int main()
{
    char name[][10]={"abvnnc","xyz","ws"};
    char age[][3]={"10","9","13"};
    char place[][10]={"abvnnc","xyz","ws"};
    int max= findMaxLength(name);
    int maxPlace = findMaxLength(place);
    int columnSize[3] = { max + 2 , 5, maxPlace + 2 };
    char colum[][10]={"name","age", "place"};
    int tableWidth = max + 2 + 5 + maxPlace + 3;
    int size=3;
    int len=strlen(name[2]);

    int count=0;
    int i, j;
    for (i = 0; i < size + 4; i++)
    {
        int len=strlen(name[count]);
        if(!(i==0 || i==2 || i==size+3))
		{
            printf("|");
        }
        else
        {
            printf(" ");
        }
        for (j = 0; j < 3; j++)
        {
            if(i==0 || i==2 || i==size+3)
			{
                printRepeat("_", columnSize[j]+1);
            }
            else if(i == 1)
            {
                printWithSpace(colum[j], columnSize[j]);
                printf("|");
            }
            else
            {
               // printf("%s",name[i]);
                if( j  ==0 )
                {
                    printWithSpace(name[i-3], columnSize[j]);
                }
                if(j == 1)
                {
                printWithSpace(age[i-3], columnSize[j]);
                }
                if(j == 2)
                {
                    printWithSpace(place[i-3], columnSize[j]);
                }

                printf("|");
            }
        }
        printf("\n");
    }
    return 0;
}
int printRepeat(char a,int size)
{
	int s;
    for(s=0;s<size;s++)
	{
        printf("_");
    }
    return 0;
}
int printWithSpace(char column[],int size)
{
	int j;
    int len=strlen(column);
	printf("%s",column);
    for(j=0;j<size-len; j++)
	{
        printf(" ");
    }
    return 0;
}
int findMaxLength(char name[][10])
{
    int max=0, i;
    for (i = 0; i < 3; i++)
	{
        int len=strlen(name[i]);
        if(max<len)
		{
            max=len;
        }
    }
    if(max<4){
        max=4;
    }
    return max;
}
