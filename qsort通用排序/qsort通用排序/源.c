#define _CRT_SECURE_NO_WARNINGS 1
//冒泡排序
//#include<stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if(arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print(int arr[], int sz)
//{
//	int a = 0;
//	for (a = 0; a < sz ;a++)
//	{
//		printf("%d",arr[a]);
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	print(arr,sz);
//	return 0;
//}
//struct S
//{
//	char name[20];
//	int age;
//};
//void qsort(void *base,
//	       size_t num,
//		   size_t width, 
//		   int(__cdecl *compare)(const void *elem1, const void *elem2));
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int cmp_int(const void*e1, const void*e2)
{
	return *(int*)e1 - *(int*)e2;
}
void print(int arr[], int sz)
{
	int a = 0;
	for (a = 0; a < sz; a++)
	{
		printf("%d", arr[a]);
	}
}
struct S
{
	char name[20];
	int age;
};
/////////////////////////////////////////////////////////////////////////
int cmp_stu_by_age(const void*e1, const void*e2)
{
	return ((struct S*)e1)->age - ((struct S*)e2)->age;
}

void test2()//排序结构体数组--按照年龄
{
	struct S arr[] = { { "zhangsan", 20 }, { "lisi", 80 }, { "wangwu", 5 } };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
}
///////////////////////////////////////////////////////////////////////////
int cmp_stu_by_name(const void*e1, const void*e2)
{
	return strcmp(((struct S*)e1)->name, ((struct S*)e2)->name);//比较两个字符串
}
void test3()//排序结构体数组--按照名字
{
	struct S arr[] = { { "zhangsan", 20 }, { "lisi", 80 }, { "wangwu", 5 } };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
}
/////////////////////////////////////////////////////////////////////////////

//void*  的指针是无具体类型的指针，可以接收任意类型的地址。
//void*的指针不能进行+— 整数的操作。
//void*的指针不能直接进行解引用，需进行强制类型转化。
void _Swap(char*buf1, char*buf2, int width)//buf1和buf2代表元素第一个字节的地址。
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *(buf1 + i);
		*(buf1 + i) = *(buf2 + i);
		*(buf2 + i) = tmp;
	}
}
void bubble_sort(void*base,int sz,int width,int(*cmp)(const void*e1,const void*e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0; 
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)//cmp函数——比较函数（>0;<0;=0）
			{
				_Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);//交换函数。将要交换的两个字符转换成（char*）,代表这两个元素的第一个字节的地址。
			}
		}
	}
}
void test1()//qsort 排序整形
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	//qsort(arr, sz, 4, cmp_int);
	print(arr, sz);
}
int main()
{
	test1();
	return 0;
}
