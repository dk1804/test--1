#define _CRT_SECURE_NO_WARNINGS 1
//ָ��
//char* + 1 ����һ���ֽ�
//short* + 1 ���������ֽ�
//int* + 1  4���ֽ�
//double* + 2 16���ֽ�
//ָ������
//ָ��Ӽ�����
//ָ���ȥָ�� = ָ���ָ��֮��Ԫ�صĸ���
//����������������Ԫ�صĵ�ַ�����:
//1.&������ 2.size of����������
//arr + 1 ��&arr + 1������40��
//#include<stdio.h>
//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd' };
//	char*p = arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%c\n", *(p + i));
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d\n",*(p + i));
//	}
//	return 0;
//}
//�������
//#include<stdio.h>
//int main()
//{
//	char arr[] = {'a','b','c','d','e','f'};
//	char* p = arr;
//	int i = 0;
//	for (i = 5; i >= 0; i--)
//	{
//		printf("%c ", *(p + i));
//	}
//	return 0;
//}
//#include<stdio.h>
//int print(char* str)
//{
//	int i = 0;
//	char* p = str;
//	for (i = 5; i >= 0; i--)
//	{
//	   printf("%c ", *(p + i));
//	}
//}
//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	
//	print (arr);
//	return 0;
//}
//��Sn = a + aa +aaa +aaaa +aaaaa
//#include <stdio.h>
//int main()
//{
//	int Sn = 0;
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	printf("��������Ҫ��͵�����\n");
//	scanf("%d", &a);
//	printf("��������Ҫ��ǰ����֮��\n");
//	scanf("%d", &n);
//	for (j = 1; j < n; j++)
//	{
//		a += a * 10;
//		Sn += a;
//	}
//	printf("%d", Sn);
//	return 0;
//}
//��ˮ�ɻ���
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 100;
//	
//	for (i = 0; i <= 100000; i++)
//	{   
//		int n = i;
//		int count = 0;
//		while (n)
//		{   
//			n = n / 10;
//			count++;
//		}
//		if (pow((i/10000) % 10, count) 
//			+ pow((i/1000) % 10, count)
//			+ pow((i/100) % 10, count) 
//			+ pow(i/10 % 10, count) 
//			+ pow (i%10,count)== i)
//		printf("%d ", i);  
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i <= 5; i++)
//	{
//		
//	}
//	return 0;
//}
//ʹ�ú�����ӡ�����ÿһ��Ԫ��
//#include<stdio.h>
//void print(int arr)
//{
//	int i = 0;
//	int *p = arr;
//	for (i = 0; i <10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,0};
//	print(arr);
//	return 0;
//}
//��ӡ����
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int a, b, c = 0;
//	for (i = 1; i <= 7; i++)
//	{
//		for (j = 7-i; j >= 0; j--)
//		{
//			printf("  ");
//		}
//		for (k = 2*i-1; k >0; k--)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	for (a = 1; a <= 6; a++)
//	{
//		for (b = a; b >=0; b--)
//		{
//			printf("  ");
//		}
//		for (c = 13-a*2; c >0; c--)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}