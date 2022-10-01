#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int find_num(int arr[3][3], int* px, int* py, int k)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x < *px && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 1;
//	int x = 3;
//	int y = 3;
//	int ret = find_num(arr, &x, &y, k);
//	if (ret == 1)
//	{
//		printf("x=%d y=%d\n", x, y);
//		printf("找到了");
//	}
//	else
//	{
//		printf("找不到");
//	}
//	return 0;
//}
#include <string.h>
//void ritate(char* arr,int k)
//{
//	int i = 0;
//	int d=strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//左旋转一个字符
//		char tmp = *arr;
//
//		int j = 0;
//		for (j = 0; j < d - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + d - 1) = tmp;
//
//
//	}
//}
#include <cassert>
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void ritate(char* arr, int k)
//{
//	assert(arr);
//	int n = strlen(arr);
//	reverse(arr, arr + k - 1);//左
//	reverse(arr + k, arr + n - 1);//右
//	reverse(arr, arr + n - 1);//整体
//	//int i = 0;
//	//int d = strlen(arr);
//	//for (i = 0; i < k; i++)
//	//{
//	//	//左旋转一个字符
//	//	char tmp = *arr;
//
//	//	int j = 0;
//	//	for (j = 0; j < d - 1; j++)
//	//	{
//	//		*(arr + j) = *(arr + j + 1);
//	//	}
//	//	*(arr + d - 1) = tmp;
//
//
//	//}
//
//
//}
//int main()
//{
//	char arr[] = "ABCDEF";
//	int k = 2;
//	ritate(arr,k);
//	printf("%s", arr);
//	return 0;
//}

int me_reverse(char* str1,char* str2)
{
	if (strlen(str1) != strlen(str2))
	{
		return 0;
	}
	int len = strlen(str1);
	strncat(str1, str1, len);
	char* ret = strstr(str1, str2);
	return ret != NULL;

}
int main()
{
	char arr1[20] = "AABCD";
	char arr2[] = "BCDA";
	int ret = me_reverse(arr1, arr2); 
	if (ret == 1)
	{
		printf("yes\n");
	}
	else {
		printf("no\n");
	}
	return 0;
}