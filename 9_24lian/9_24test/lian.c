#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 129;
//	char* p = &a;
//	printf("%d\n", a);
//	printf("%d\n", *p);
//	return 0;
//}
//int main()
//{
//	char i[] = "hello,java";
//	char* p = "hello,java";
//	printf("%s\n", *p);
//	printf("%s", i);
//	return 0;
//}
//int main()
//{
//	char str1[] = "hello";/*-������������ַ*/
//	char str2[] = "hello";/*����������ַ*/
//	const char *arr1 = "hello";//->�����ַ���
//	const char *arr2 = "hello";
//	char* ps = 'w';
//	if (str1 == str2)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	if (arr1 == arr2)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a[] = { 1,2,3,4,5};//
//	int b[] = { 2,4,6,8,10 };
//	int c[] = { 1,3,5,7,9 };
//	int* arr[] = { a,b,c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'W';
//	char* pc = &ch;
//	double* d[5];
//	double *(* pd)[5] = &d;
//	/*int arr[10] = { 1,2,3,4,5 };
//	int (*parr)[10] = &arr;*/
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p1 = &arr;
//	int(*p2)[10] = &arr;
//	printf("%p\n", p1);//ָ��int
//	printf("%p\n", p1+1);
//
//	printf("%p\n", p2);
//	printf("%p\n", p2+1);//ָ������
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr;
//	int (*p1)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void  print(int arr[3][5], int a, int b)
//{
//	int j = 0;
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < b; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int(*p)[5], int r, int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", *(*p + i) + j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);
//	printf("\n");
//	print2(arr, 1, 5);
//	return 0;
//}

//int main()
//{
//	int arr[5];//��������
//	int* prr[5];//����ָ�������
//	int(*pa)[10];//����ָ�롣��ָ���ܣ���ָ��һ�����飬����10��Ԫ�أ�ÿ��Ԫ�ص����Ͷ���int
//	int (*parr[10])[5] //parr��һ���洢����ָ������飬�������ܹ����10������ָ�룬ÿ������ָ���ܹ�ָ��һ�����飬����5��Ԫ�أ�int��
//	return 0;
//}

int main()
{

	return 0;
}