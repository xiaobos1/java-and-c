#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x < y)
//	{
//		z = y;
//	}
//	else
//	{
//		z = x;
//	}
//	return z;
//}
//int main() 
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("MAX= %d", max);
//	return 0;
//}

void swap(int* pa, int* pb)
{
	int z=*pa;
	*pa = *pb;
	*pb = z;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("����ǰ��a=%d b=%d", a, b);
	swap(&a, &b);
	printf("������a=%d b=%d", a, b);
	return 0;
}