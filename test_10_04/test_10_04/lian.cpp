#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
////#pragma pack(1)
//struct S0 {
//	char c1;
//	char c2;
//	int i;
//};
//struct S1 {
//	char c1;
//	int i;
//	char c2;
//};
//struct S2 {
//	double b;
//	char c;
//	int i;
//};
//struct S {
//	char c;
//	struct S2 sl;
//	double b;
//};
////#pragma pack()
////#include <stddef.h>
////int main()
////{
////	struct S2 s = { 0 };
////
////	int a = 10;
////	printf("%d\n", sizeof(s));
////
////	printf("%d\n", offsetof(struct S2, b));
////	return 0;
////}
//
//struct S {
//	int arr[1000];
//	int num;
//};
//
//void print2(struct S*pa)
//{
//	printf("%d\n", pa->num);
//}
////struct S s = { {1,2,3,4},2 };
//int main()
//{
//	struct S s = { {1,2,3,4},2 };
//	print2(&s);
//	return 0;
//}

//struct S {
//	int arr[100];
//	int num;
//};
//struct S s = { {1,2,3,4},2 };
//
//void print(struct S* pa)
//{
//	printf("%d", pa->num);
//}
//int main()
//{
//	print(&s);
//	return 0;
//}

//struct S {
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 6;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}
//struct S s = { 0 };
//  s.a = 10;
//Ã¶¾Ù
//enum color {
//	red,
//	blue,
//	yellow
//};
//int main()
//{
//	enum color c = red;
//	return 0;
//}


union Un {
	char c;
	int i;
};
int main()
{
	union Un u={10};
	printf("%p\n", &u);
	printf("%p\n", &(u.c));
	printf("%p\n", &(u.i));
	return 0;
}