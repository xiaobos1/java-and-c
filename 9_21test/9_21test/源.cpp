#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int st = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < st; i++)
//	{
//		time_t ret = rand() % 5;
//		time(&ret);
//		int t = arr[i];
//		arr[i] = arr[ret];
//		arr[ret] = t;
//	}
//	for (int n = 0; n < st; n++)
//	{
//		printf("%d ", arr[n]);
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//c=6,a=6
//	b = ++c, c++, ++a, a++;//
//	b += a++ + c;
//	printf("a=%d  b=%d  c= %d ", a, b, c);
//	return 0;
//}

//int NumBer(int i)
//{
//	int count = 0;
//	int n = 0;
//	for (n = 0; n < 32; n++)
//	{
//		if (((i >> n)& 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int NumBer(int n)
//{
//	int i = 0;
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return 0;
//}
//int main()
//{
//	int n = 10;
//	int ret = NumBer(n);
//	printf("%d ", ret);
//	return 0;
//}
// 

////≈–∂œn «∑Ò «2^n
//void shi_no(int n)
//{
//	if (n & (n - 1)==0)
//	{
//		printf("true");
//	}
//	else
//	{
//		printf("flase");
//	}
//}
//int main()
//{
//	int n = 10;
//	shi_no(n);
//	return 0;
//}

int main()
{
	/*int m = 22;
	int n = 33;
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((m >> i) & 1) != ((n >> i) & 1))
		{
			count++;
		}
	}
	printf("%d ", count);
	return 0;*/

	int i = 10;
	printf("%d", sizeof(int));
	return 0;
}