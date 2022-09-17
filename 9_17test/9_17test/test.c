#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int num = 0;
//	int sun = 0;
//	scanf("%d", &a);
//	int b = a;
//	while (a != 0)
//	{
//		num = a % 10;
//		a = a / 10;
//		sun = sun*10 + num;
//	}
//	printf("%d\n", sun);
//	//判断回文数
//	if (sun == b)
//		printf("true");
//	else
//		printf("flase");
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int c = 0;
	/*while (a >= b)
	{
		a = a - b;
		c++;
	}*/
	for (a; a >= b; a -= b)
	{
		c++;
	}
	printf("商 %d\n", c);
	printf("余数 %d\n", a);
	return 0;
}
