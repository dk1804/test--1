#include<stdio.h>
#include<stdlib.h>
int* addToArrayForm(int* A, int ASize, int K, int* returnSize)
{
	int kSize = 0;
	int kNum = K;
	while (kNum)//�����K�ĳ���
	{
		++kSize;
		kNum /= 10;
	}
	int len = ASize > kSize ? ASize : kSize;//�ж�A��K�Ĵ�С���Դ��Ϊ��׼
	int*retArr = (int*)malloc(sizeof(int)*(len + 1));//����ռ�

	//˼�룺A��K ��λ���  ����9����ǰһλ��1
	int Ai = ASize - 1;//�����һλ��ʼ���
	int reti = 0;//��Ӻ�õ���������±�
	int nextNum = 0;//��λ
	while (len--)
	{
		int a = 0;
		if (Ai >= 0)//ȡ������A��ÿһλԪ��
		{
			a = A[Ai];
			Ai--;//ȡ��һλ���±��һ
		}
		int ret = a + K % 10 + nextNum;//��Ӻ�õ��������Ԫ�ص�ֵ
		K /= 10;//��K�����һλ�������

		if (ret >9)
		{
			ret -= 10;//����9����λ֮�����µ�ֵΪ ret-10
			nextNum = 1;
		}
		else
		{
			nextNum = 0;
		}
		retArr[reti] = ret;//�������ÿһλ���и�ֵ
		++reti;//��������ÿ��λ���һ�Σ������±��1
	}

	//������� 1999 + 9000 ������Ҫ����һλ�����
	if (nextNum == 1)
	{
		retArr[reti] = 1;//���ӵ�һλ���Ϊ1
		++reti;
	}
	int left = 0, right = reti - 1;
	while (left <right)//���������
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