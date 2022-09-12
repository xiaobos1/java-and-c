#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
////int main()
////{
////	char arr[] = "hello world";
////	printf("%d %d", sizeof(arr), strlen(arr));
////	return 0;
////}
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz;i++)
//	{
//		arr[i]=0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//void reve(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reve(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}

int main()
{
	int arr[] = { 1,3,5,7,9 };
	int arr1[] = { 2,4,6,8,10 };//数组名是首元素的地址
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int tmp = arr[i];
		arr[i] = arr1[i];
		arr1[i] = tmp;
	}
	printf("%d", sz);
	return 0;
}