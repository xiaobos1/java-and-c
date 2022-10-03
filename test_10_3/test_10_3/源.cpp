#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <cerrno>
#include <string.h>
#include <cassert>
#include <time.h>

//int main()
//{
//	int arr1[] = {1,2,3,4,5,6,7,8,9};
//	int arr2[20] = { 0 };
//	memcpy(arr2, arr1, 20);
//	/*
//
//	FILE* pf= fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fclose(pf);
//	pf = NULL;*/
//	return 0;
//}

void* my_memcpy(void* str, const void* str2,size_t num)
{
	void* ret = str;
	assert(str && str2);
	while (num--)
	{
		*(char*)str = *(char*)str2;
		str = (char*)str+1;
		str2 = (char*)str2 + 1;
	}
	return ret;
}

void* my_memmove(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	while (num--)
	{
		*((char*)dest + num) = *((char*)src + num);
	}
	return ret;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr + 2, arr, 20);
	return 0;
}
//int main()
//{
//	int arr1[] = { 1,2,3,4,9,5,6,7,8 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, 20);
//	return 0;
//}
//#include <stdlib.h>
//int main()
//{
//	int arr[20] = { 0 };
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < 5; i++)
//	{
//		arr[i] = rand()%32+1;
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}