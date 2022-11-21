#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void func()
{
	printf("*************\n");
	printf("*** 你 中 ***\n");
	printf("*** 好 国 ***\n");
	printf("*************\n");
}
//int main()
//{
//	printf("hello world\n");
//	func();
//	return 0;
//}

//int main()
//{
//	printf("*****\n");
//	printf(" *****\n");
//	printf("  *****\n");
//	printf("   *****\n");
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	int max=a > b ? a : b;
//	if (max < c)
//		max = c;
//	printf("%d", max);
//	return 0;
//}


#include <math.h>
int main()
{
	int num1 = 4;
	int num2 = 80;//取最大值
	int max = num1 > num2 ? num1 : num2;
	int number = pow(max, 0.5);
	int c = 0;
	for (int i = 1; i <= number; i++)
	{
		c = max * i;
		//获取最小公倍数
		if (c % num1 == 0)
			break;
	}
	printf("%d", c);
	return 0;
}