#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;	
	printf("1 \n");
	for (i = 2; i < 10; i++)
	{
		printf("1 ");
		for (j = 0; j < i - 2; j++)
		{
			printf("%d ", i - 1);
		}
		printf("1 \n");
	}
	return 0;
}