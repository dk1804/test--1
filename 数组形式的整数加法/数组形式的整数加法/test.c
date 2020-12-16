#include<stdio.h>
#include<stdlib.h>
int* addToArrayForm(int* A, int ASize, int K, int* returnSize)
{
	int kSize = 0;
	int kNum = K;
	while (kNum)//计算出K的长度
	{
		++kSize;
		kNum /= 10;
	}
	int len = ASize > kSize ? ASize : kSize;//判断A和K的大小，以大的为基准
	int*retArr = (int*)malloc(sizeof(int)*(len + 1));//申请空间

	//思想：A和K 按位相加  大于9，向前一位进1
	int Ai = ASize - 1;//由最后一位开始相加
	int reti = 0;//相加后得到的数组的下标
	int nextNum = 0;//进位
	while (len--)
	{
		int a = 0;
		if (Ai >= 0)//取出数组A的每一位元素
		{
			a = A[Ai];
			Ai--;//取出一位后，下标减一
		}
		int ret = a + K % 10 + nextNum;//相加后得到的数组的元素的值
		K /= 10;//将K的最后一位分离出来

		if (ret >9)
		{
			ret -= 10;//大于9，进位之后留下的值为 ret-10
			nextNum = 1;
		}
		else
		{
			nextNum = 0;
		}
		retArr[reti] = ret;//对数组的每一位进行赋值
		++reti;//两个数组每按位相加一次，数组下标加1
	}

	//如果遇到 1999 + 9000 这种需要增加一位的情况
	if (nextNum == 1)
	{
		retArr[reti] = 1;//增加的一位最大为1
		++reti;
	}
	int left = 0, right = reti - 1;
	while (left <right)//数组的逆置
	{
		int tmp = retArr[left];
		retArr[left] = retArr[right];
		retArr[right] = tmp;
		++left;
		--right;
	}
	*returnSize = reti;
	return retArr;
}
int main()
{
	int A[] = { 1, 2, 0, 0 };
	int ASize = sizeof(A) / sizeof(A[0]);
	int K = 34;
	int returnSize = 0;
	int* retArr = addToArrayForm(A, ASize, K, &returnSize);
	int i = 0;
	for (i = 0; i < returnSize; i++)
	{
		printf("%d ", retArr[i]);
	}
	return 0;
}