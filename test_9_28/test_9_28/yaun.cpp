#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//优化计算器
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sud(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
////int main()
////{
////	int (*pf1)(int,int) = Add;
////	int (*pf2)(int, int) = Sud;
////	int (*pfarr[2])(int, int) = { Add,Sud };
////	return 0;
////}
//void mune()
//{
//	printf("******************************\n");
//	printf("**** 1.add     2.sub   *******\n");
//	printf("**** 3.mul     4.div   *******\n");
//	printf("********* 0.esit *************\n");
//	printf("******************************\n");
//}
//int colo(int (*pa)(int, int)) {
//	int x=0;
//	int y = 0;
//	printf("输入俩个数 >");
//	scanf("%d %d", &x, &y);
//	return (* pa)(x, y);
//}
//int main()
//{
//	int input = 0;
//	do {
//		mune();
//		printf("请输入 >");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("%d\n",colo(Add));
//			break;
//		case 2:
//			printf("%d\n",colo(Sud));
//			break;
//		case 3:
//			printf("%d\n",colo(Mul));
//			break;
//		case 4:
//			printf("%d\n",colo(Div));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("错误，重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//void shengXu(int arr[])
//{
//	int sz=sizeof(arr) / sizeof(arr[0]);
//	int max = arr[0];
//	for (int i = 0; i < sz-1; i++)
//	{
//		if (arr[i] < max)
//		{
//			int tmp = arr[i];
//			arr[i] = max;
//			max = tmp;
//		}
//	}
//	for (int i = 0; i < sz-1; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 2,1,3,6,4,9,5,7,8 };
//	//shengXu(arr);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int max = arr[0];
//	for (int i = 0; i < sz ; i++)
//	{
//		if (arr[i] < max)
//		{
//			int tmp = arr[i];
//			arr[i] = max;
//			max = tmp;
//		}
//	}
//	for (int i = 0; i < sz ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void bubble(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
////void print(int arr[],int sz)
////{
////	int i = 0;
////	for (i = 0; i < sz; i++)
////	{
////		printf("%d ", arr[i]);
////	}
////}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble(arr, sz);
//	//print(arr, sz);
//	qsort(arr,10 );
//	return 0;
//}

//struct str {
//	const char* name;
//	int age;
//};
//
//int sort_by(const void* e1, const void* e2)
//{
//	return ((struct str*)e1)->age - ((struct str*)e2)->age;
//}
//void test2()
//{
//	struct str s[3] = { {"jianfeng",20},{"liqilong",19},{"fuqiang",29} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), sort_by); 
//	/*for (int i = 0; i < sz; i++)
//	{
//		printf("%s %d", s[i]);
//	}*/
//}
//int main()
//{
//	test2();
//	return 0;
//}

int main()
{

	return 0;
}