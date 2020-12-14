#include<stdio.h>
#include<stdlib.h>
int* singleNumbers(int* nums, int numsSize, int* returnSize)
{
	int *res = (int *)malloc(sizeof(int) * 2);
	*returnSize = 2;
	if (numsSize == 2)
	{
		return nums;
	}
	int k = 0;
	int i = 0;
	int a = 0;
	int b = 0;
	for (i = 0; i<numsSize; i++)
	{
		k ^= nums[i];
	}
	int mask = 1;
	while ((k & mask) == 0)
	{
		mask <<= 1;
	}
	for (int i = 0; i<numsSize; i++)
	{

		if ((mask & nums[i]) == 0)
		{
			a ^= nums[i];
		}
		else
		{
			b ^= nums[i];
		}
	}
	res[0] = a;
	res[1] = b;
	return res;
}
int main()
{
	int nums[] = { 4, 1, 4, 6 };
	int numSize = sizeof(nums)/sizeof(nums[0]);
	int returnSize[2] = { 0 };
	int *ret = singleNumbers(nums, 4, returnSize);
	int i = 0;
	for (i = 0; i < 2; i++)
	{
		printf("%d ", ret[i]);
	}
	return 0;
}