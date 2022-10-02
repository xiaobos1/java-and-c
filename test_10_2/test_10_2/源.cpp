#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <cassert>
#include <string.h>

//     strlen
//int my_strlen(char* str)
//
//{
//	/*char* arr =str+2 ;*/
//	/*assert(str);
//	int count = 0;
//	while (*str++ != '\0')
//	{
//		count++;
//	}*/
//	return *arr-*str;
//}
//int main()
//{
//	char arr[] = "abc";
//	int len=my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}


//     strcpy
//int main()
//{
//	char arr[20] = { 0 };
//	//char ar1[] = "abc";
//	strcpy(arr,"hello");
//	printf("%s", arr);
//	return 0;
//////}


//   strcat
//void my_strcat(char* str, char* src)
//{
//	int let=strlen(str);
//	char* tset = str + let;
//	while (*tset++ = *src++)
//	{
//		;
//	}
//
//}
//int main()
//{
//	char arr[20] = "hello ";
//	char arr1[] = "world";
//	my_strcat(arr, arr);
//	printf("%s", arr);
//	return 0;
//}

////  strcmp
//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1=='\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	if (*s1 > *s2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//	/*else
//	{
//		return 0;
//	}*/
//}
//int main()
//{
//	const char* p = "abcdef";
//	const char* q = "abc";
//	int ret = my_strcmp(p,q);
//		if (ret > 0)
//		{
//			printf("p大\n");
//		}
//		else if(ret<0)
//		{
//			printf("q大");
//		}
//		else
//		{
//			printf("一样大");
//		}
//	return 0;
//}

//int main()
//{
//	int ret = strcmp("abc", "abc");
//	if (ret > 0)
//	{
//		printf("abc大\n");
//	}
//	else if(ret<0)
//	{
//		printf("bb大");
//	}
//	else
//	{
//		printf("一样大");
//	}
////	return 0;
//////}/
//
//int main()
//{
//	char arr[20] = "hello ";
//	char arr1[] = "asddfgf";
//	strncat(arr, arr1, 6);
//	//strncpy(arr, arr1, 3);
//	printf("%s", arr);
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef";
//	const char* q = "asdf";
//	printf("%d", strcmp(p, q));
//	return 0;
//}

//      strstr
//char* my_strstr(const char* str1,const  char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 =NULL;
//	const char* s2 = NULL;
//	const char* cp = str1;
//
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;	
//		
//		if (*str2 == '\0')
//		{
//			return (char*)str2;
//		}
//		while (*s1 && *s2 &&(*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char arr1[] = "bcd";
//	//在arr中查找arr1
//	char * ret=my_strstr(arr, arr1);
//	if (ret != NULL)
//	{
//		printf("找到了 %s\n",ret);
//	}
//	else
//	{
//		printf("没找到");
//	}
//	return 0;
//}

int main()
{
	char arr[] = "zpw@www.4399.com";
	const  char* p = "@.";
	char tmp[20] = { 0 };
	strcpy(tmp, arr);

	char* ret = NULL;
	for (ret = strtok(tmp, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}
	/*ret=strtok(tmp, p);
	printf("%s\n"，ret);*/
	return 0;
}