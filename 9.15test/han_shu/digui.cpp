#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void print_t(int n)
//{
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_t(n);
//	return 0;
//}


//int fun(int n)
//{
//	if (n == 5)
//	{
//		return 2;
//	}
//	else
//	{
//		return 2 * fun(n + 1);
//	}
//}
//int main()
//{
//	int i = 2;
//	int ret=fun(i);
//	printf("%d", ret);
//	return 0;
//}


//int  my_str(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	ret#urn *str;
//}
//#include <string.h>
//void r_s(char* str)
//{
//	int left = 0;
//	int right = strlen(str)-1;
//	while (left<right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//	
//}
//int main()
//{
//	char arr[] = "abcdef";
//	r_s(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char ch;
//    int i = 0, j = 0;
//    int n = 3;
//    scanf("%c", &ch);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n + i; j++)
//        {
//            if (j >= n - i - 1)
//                printf("%c", ch);
//            else
//                printf(" ");
//        }
//        printf("\n");
//    }
//    for (i = 0; i < n - 1; i++)
//    {
//        for (j = 0; j <= n - i; j++)
//        {
//            if (j >= i + 1)
//                printf("%c", ch);
//            else
//                printf(" ");
//        }
//        printf("\n");
//    }
//    return 0;
//}
#include <string.h>
int main()
{
	int n = 0;
	char arr[10] = { 0 };
	arr[4] = 5;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < 9; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n%d\n", sz);
	printf("%p\n", 0x12);//%pÈ¡µØÖ·
	return 0;
}