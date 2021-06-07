#include<stdio.h>
int main()
{
	int num = 70;
	int sum=0;
	while(num !=0)
	{
		sum =sum + ((num%10)*(num%10));
		num /=10;
		if(num==0)
		{
			printf("%d\n",sum);
			if(sum<9)
			{
				break;
			}
			num = sum;
			sum =0;
		}
	}
}
