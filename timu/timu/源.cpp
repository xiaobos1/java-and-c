#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	printf("输入一个数：\n");
	scanf("%d", &a);
	int b = 0;
	int c = a;
	int d = 0;
	while (a != 0)
	{
		b = a % 10;
		a = a / 10;
		d = d * 10 + b;
	}
	printf("%d\n", d);
	if (d == c)
	{
		printf("ture\n");
	}
	else
	{
		printf("false\n");
	}
	return 0;
	
}