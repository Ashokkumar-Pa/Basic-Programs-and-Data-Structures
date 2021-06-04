#include<stdio.h>
#include<string.h>
int main()
{
	char input[] ="5-11";    // output : -6
	int n =strlen(input);
	int num, b;
	int i,j;
	for( i=0; i<n; i++)
	{
		if(i==0)
		{
			num = input[i]-'0';
			int a = i+1;
			while(input[a]>='0')   // this loop is for getting more then one digit
			{
				num *= 10;
				num += input[a]-'0'; 
				i+=a;
				a++;
			}
		}

		for( j=i+1; j<n; j++)
		{
			if(input[j] >= '0')
			{
				b = input[j]-'0';
				int a = j+1;
				while(input[a]>='0' && input[a] !='\0')      // this loop is for getting more then one digit
				{
					b *= 10;
					b += input[a]-'0'; 
					a++;
				}
				break;
			}
		}
		i++;
		if( input[i] == '+')
		{
			num= b +num;
		}
		else if( input[i] == '-')
		{
			num =num-b;
		}
		else if( input[i] == '*')
		{
			num = num*b;
		}
        else if( input[i] == '/')
		{
			num = num/b;
		}
        else if( input[i] == '%')
		{
			num = num%b;
		}
	}
	printf("%d",num);
}
