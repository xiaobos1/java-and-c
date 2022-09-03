#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//输入用&
//	if (a < b)
//	{
//		int t = a;
//		a=b;
//		b = t;
//	}
//	if (a < c)
//	{
//		int t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		int t = b;
//		b=c;
//		c = t;
//	}
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int max = 0;
//	scanf("%d%d", &n, &m);
//	if (n < m)
//	{
//		max = n;
//	}
//	else
//	{
//		max = m;
//	}
//	while (1)//一直循环
//	{
//		if (n % max == 0 && m % max == 0)
//		{
//			printf("最大公约数：%d", max);
//			break;//得到正确退出
//		}
//		max--;
//	}
//	return 0;
//}、

int main()
{

	int y = 0;
	int c = 0;
	for (y = 1000; y <= 2000; y++)
	{
		if (y % 4 == 0 && y % 100 != 0)
		{
			printf("%d\n", y);
			c++;
		}
		if (y % 400 == 0) {
			printf("%d\n", y);
			c++;
		}

	}
	printf("\n%d\n", c);
	return 0;

}