#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//int a = 0;
//	//char arr[10] = { 0 };
//	////printf("%d", sizeof(int));
//	//printf("%d", sizeof(arr));
//
//
//	return 0;
//}

//int main()
//{
//	int a = 13;
//	int b = a | (1 << 4);
//	//   a=00000000 00000000 00000000 00001101
//	//1<<4=00000000 00000000 00000000 00010000
//	//   b=00000000 00000000 00000000 00011101;
//	//2^4+2^3+2^2+2^0=16+8+4+1
//	printf("%d", b);
//	return 0;
//
//
//}

//int main()
//{
//	int a = 10;
//	//int b = a++;//先使用 后++
//	//int c = ++a;//先++；后使用
//	int b = a--;
//	int c = --a;
//	printf("%d\n", b);
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	int a = 20;
//	printf("%p\n", &a);
//	int *pa = a;//解引用操作符-简接使用操作符
//	printf("%d\n", a);
//
//	return 0;
//}


//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(int err[])
//{
//	printf("%d\n", sizeof(err));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char err[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(err));
//	test1(arr);
//	test2(err);
//	return 0;
//}

int main()
{
	int i = 0, a = 0,b = 2, c = 3, d = 4;
	int i = a++ || ++b || d++;
	printf("a= %d\n,b= %d\n,c= %c\n,d= %d", a, b, c, d);
	return 0;
}