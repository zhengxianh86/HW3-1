#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str1[60] = "Welcome";
	char str2[60];
	int len;
	
	strcpy(str2,str1);
	printf("string2 = %s\n",str2);

	len = strlen(str2);
	printf("¦r¦êªø«×¬°%d\n", len);
}