#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//Ã°ÅÝÅÅÐòµÄÌËÊý
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] >arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}
//#include<stdio.h>
//void print_arr(int arr[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int n)
//{
//	int tmp = 0;
//	int right = 9;
//	int left = 0;
//	while (left <= right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	
//}
//void init(int arr[], int n)
//{
//	int i = 0;
//	
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = 0;
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//
//}
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int n = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	print_arr(arr, n);
//	reverse(arr, n);
//	init(arr, n);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 6, 7, 8, 9, 10 };
	int i = 0;
	int tmp = 0;
	for (i = 0; i <= 4; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	for (i = 0; i <= 4; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i <= 4; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}