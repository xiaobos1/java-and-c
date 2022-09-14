#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int my_strlen(char arr[])
//{
//	char* str= arr;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str-arr;
//}
//int main()
//{
//	char arr[] = "abc";
//	int  len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* pa = arr;
//	for (pa=&arr[4]; pa >= &arr[0]; pa--)
//	{
//		*pa = 0;
//	}
//	printf("%p\n", pa);
//	return 0;
//}
//void arr_p(int arr[])
//{
//	printf("%p\n", arr);
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	arr_p(arr);
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* pa = arr;
	/*printf("%p\n", arr);
	printf("%p\n", pa);*/
	printf("%d\n", *(pa + 2));
	printf("%d\n", arr[2]);
	printf("%d\n", 2[arr]);
	return 0;
}