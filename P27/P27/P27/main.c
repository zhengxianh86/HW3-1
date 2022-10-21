#include<stdio.h>
#include<stdlib.h>

long factorial(long number);

int main()
{
	int i;
	for (i = 0; i <= 10; i++)
	{
		printf("%2d! = %ld\n",i, factorial(i));
	}
}

long factorial(long number)
{
	if (number <= 1)
	{
		return 1;
	}
	else
	{
		return (number * factorial(number - 1));
	}
}