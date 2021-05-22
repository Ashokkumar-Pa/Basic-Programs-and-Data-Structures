// integer to string conversion 

#include<stdio.h>
#include<string.h>
int main()
{
	int num=123;
	int i=0;
	char string[i];
	while(num > 0) 
    {
        int mod = num % 10; 
        string[i] =mod + '0';
		i++; 
        num = num / 10;
    }
    printf("%s",string);
}

// output 
// 321 
