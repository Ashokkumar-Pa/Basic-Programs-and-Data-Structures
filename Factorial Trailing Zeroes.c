#include<stdio.h>
int main()
{
int number = 3;
int fact = number;
int i;
for( i=number -1; i>1; i--)
{
	fact = fact * i;
}
printf("Factoral of %d is %d\n",number,fact);
while(fact != 0)
{
	fact = fact%10;
	if(fact%10 == 0)
	{
		printf("Zero present");
		break;
	}
	fact = fact/10;
}
if(fact==0)
{
	printf("Zero not present");
}
}

// Output :
//      Factoral of 3 is 6
//      Zero not present
