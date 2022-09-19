#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void test2()
//{
//	printf("hh");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 1;
//	int sum = 0;
//	int b = 0;
//	scanf("%d", &b);
//	for (i = 1; i<=b; i++)
//	{
//		n *= i;
//		sum = sum + n;
//	}
//	printf("%d\n", n);
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 10; i++)
//	{
//		arr[i] = 0;
//		printf(" hh %d\n",i);
//	}
//	return 0;
//}
#include <string.h>
//
//void my_strcpy(char* dest, char* gou)
//{
//	while (*gou != '\0')
//	{
//		*dest = *gou;
//		dest++;
//		gou++;
//	}
//	*dest = *gou;
//}

#include <assert.h>
void my_strcpy(char* dest,const char* gou)
{
	assert(gou != NULL);//╤оят
	assert(dest != NULL);
	while (*dest++ = *gou++)
	{
		;
	}
}
int main()
{
	char arr[20] =  "xxxxxxxxx" ;
	char crr[] = "hello";
	my_strcpy(arr, crr);
	printf("%s\n", arr);
	return 0;
}