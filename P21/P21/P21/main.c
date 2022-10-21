#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	unsigned seed;
	printf("Enter seed:");
	scanf("%d",&seed);
	srand(seed);

	for (i = 1; i <= 10; i++)
	{
		printf("%10d",1+(rand()%6));
		if (i == 5) printf("\n");
	}
}