#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 100;
//	const int* const p = &a;
//	//*p = 0;
//	printf("%d\n", a);
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
//
//	return 0;
//}
#include <assert.h>
//把插入gou指向的内容拷贝进dest指向的空间中
//char* my_strcpy(char* dest, const char* gou)
//{
//	assert(gou != NULL);//断言
//	assert(dest != NULL);
//	char* ret = dest;
//	while (*dest++ = *gou++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[20] = "xxxxxxxxx";
//	char crr[] = "hello";
//	printf("%s\n", my_strcpy(arr, crr));
//	return 0;
//}

int  my_strlen(const char* str)
{
	assert(str != NULL);
    int c = 0;
	while (*str++ !='\0')
	{
		c++;
	}
	return c;
}
int main()
{
	char arr = "hello";
	int* pa = &arr;
	printf("%d\n", my_strlen(pa));
	return 0;
}