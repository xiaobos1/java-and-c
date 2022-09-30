#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//void print_er(unsigned int number)
//{
//	if (number >> 1)
//	{
//		print_er(number >> 1);
//	}
//	putc((number & 1) ? '1' : '0', stdout);
//}
//int main()
//{
//	print_er(10);
//	/*int arr[5][5];
//	int(*p)[4];
//	p = arr;
//	printf("%p,%d\n", &p[4][2] - &arr[4][2], &p[4][2] - &arr[4][2]);
//	return 0;*/
//
//}

//void show(int m)
//{
//    // char a[3][5];
//
//    char* a = (char*)malloc((4 * m / 2 + m) * (4 * m + m));
//    int i, j, k;
//
//    for (k = 0; k < (4 * m / 2 + m); k++)
//
//        for (i = 0; i < (4 * m + m); i++)
//
//            *(a + k * (4 * m + m) + i) = ' ';
//
//
//
//
//    for (i = 0; i <= (4 * m / 2); i++)
//        *(a + i + ((4 * m / 2) - i) * (4 * m + m)) = '*';
//
//    for (j = (4 * m / 2); j <= 4 * m; j++)
//        *(a + j + (j - (4 * m / 2)) * (4 * m + m)) = '*';
//
//
//
//    for (k = 0; k < (4 * m / 2 + 1); k++)
//    {
//        for (i = 0; i < (4 * m + m); i++)
//        {
//            printf("%c", *(a + (k * (4 * m + m)) + i));
//        }
//        printf("\n");
//    }
//
//
//}
//
//int main()
//{
//    int num;
//    int b;
//    printf("please input one number:");
//    scanf("%d", &num);
//    show(num);
//    while (num)
//    {
//        for (b = 0; b < 6; b++)
//        {
//            Sleep(1);
//            show(b);
//        }
//        for (b = 6; b >= 0; b--)
//        {
//            Sleep(1);
//            show(b);
//        }
//        exit(1);
//    }
//    return 0;
//}

int main()
{
    int n = 0;
    scanf("%d", &n);
    //菱形打印分为俩层，第一层n行。
    for (int i = 0; i < n; i++)
    {
        //打印空格,用i,n,j控制空格数量
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        //打印“*”
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        //每层用空格隔开
        printf("\n");
    }
    //第二层n-1行
    //for (int i = 0; i < n - 1; i++)
    //{
    //    //打印空格
    //    for (int j = 0; j <= i; j++)
    //    {
    //        printf(" ");
    //    }
    //    //“*”
    //    for (int j = 0; j < 2 * (n - i - 1) - 1; j++)
    //    {
    //        printf("*");
    //    }
    //    printf("\n");
    //}
}