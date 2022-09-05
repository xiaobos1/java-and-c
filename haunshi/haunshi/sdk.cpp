#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d %d", &i, &n);
//	int max = 0;
//	if (i < n)
//	{
//		max = i;
//	}
//	else
//	{
//		max = n;
//	}
//	while (1)
//	{
//		if (i % max == 0 && n % max == 0)
//		{
//			printf("%d\n", max);
//			break;
//		}
//		max--;
//	}
//	int m = (i * n) / max;
//	printf("%d\n", m);
//	return 0;
//}

//int main()
//{
//	printf("hello world");
//	main();递归是自己调用自己
//	return 0;
//}

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n%10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//int s_my(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + s_my(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "bit";
//	printf("%d", s_my(arr));
//	return 0;
//}
//

//int fb(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fb(n - 1) + fb(n - 2);
//	}
//}
//int main()
//{
//	int i=0;
//	scanf("%d", &i);
//	int ret =fb(i);
//	printf("%d", ret);
//	return 0;
//
//}


//斐波那锲数列
//int fb(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret =fb(i);
//	printf("%d", ret);	
//	return 0;
//}
//计算1~100中9的个数
//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 1,n=1; i <= 100; i++)
//	{
//		if (n >= 20) break;
//		if (n % 3 == 1)
//		{
//			n=n+ 3;
//			continue;
//		}
//		n = n - 5;
//
//	}
//	printf("%d", i);
//	return 0;
//}
//
//计算1~100中9的个数
//int main()
//{
//	int i=0;
//	int c = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			c++;
//		}
//		if (i / 10 == 9)
//		{
//			c++;
//		}
//	}
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; 1 <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum -= 1.0 / i;
//		}
//		else
//		sum += 1.0 / i;
//	}
//	printf("%lf", sum);
//	return 0;
//}


int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <=i; j++)
		{
			printf("%d*%d=%d ",j,i,i*j);
		}
		printf("\n");
	}
	return 0;
}