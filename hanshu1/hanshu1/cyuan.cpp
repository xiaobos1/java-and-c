#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 
//int sud(int x)
//{
//	int i  = 0;
//	for (i = 2; i < x; i++)
//	{
//		if (x % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main() {
//	int n=0;
//	for (n = 100; n < 200; n++)
//	{
//		if (sud(n) == 1)
//		{
//			printf("%d\n", n);
//		}
//	}
//	return 0;
//}


//int ruen(int x)
//{
//
//	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int y = 0;
//	int n = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (ruen(y) == 1)
//		{
//			n++;
//			printf("%d\n", y);
//		}
//	}
//	printf("%d\n", n);
//	return 0;
//}\

//int bin_se(int a[], int k, int s)
//{
//	int left = 0;
//	int rt = s - 1;
//	while (left<=rt)
//	{
//		int mid = (left + rt) / 2;
//		if (a[mid] > k)
//		{
//			rt = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = bin_se(arr,key,sz);
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}

//void sum(int *a)
//{
//	(*a)++;
//}
int main()
{
	/*int num = 0;
	sum(&num);
	printf("%d", num);
	sum(&num);
	printf("%d", num);
	sum(&num);
	printf("%d", num); 
	sum(&num);
	printf("%d", num);*/
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;

}