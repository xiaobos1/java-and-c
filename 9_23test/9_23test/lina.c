#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	unsigned int i = 0;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}
#include <string.h>
//int main()
//{
//	char  arr[1000];
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		arr[i] = -1 - i;
//	}
//	printf("%d", strlen(arr));
//	return 0;
//}

//int main()
//{
//	double i = 3.120;
//	printf("%f", i);
//	return 0;
//}
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hehe %d\n",i);
//	}
//	return 0;
//}

int main()
{
	int n = 9;
	float* p = (float*)&n;
	printf("n的值为： %d\n", n);
	printf("p的值为： %f\n", *p);

	*p = 9.0;
	printf("n的值为： %d\n", n);
	printf("p的值为： %f\n", *p);
	return 0;
}