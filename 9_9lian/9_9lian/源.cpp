#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;//洗发水
	int j = 0;//肥皂
	int n = 0;//牙刷
	int count = 0;//次数
	for (i = 1; i < 7; i++)
	{
		for (j = 1; j < 51; j++)
		{
			for (n = 1; n < 21; n++)
			{
				if ((i * 15 + j * 2 + n * 5) == 100)
				{
					printf("洗发水=%d ,肥皂=%d ,牙刷 =%d\n", i, j, n);
					count++;
				}
			}
		}
	}
	printf("%d\n", count);//总共次数
	return 0;
}

//int main()
//{
//	int input = 0;
//	do
//	{
//		printf("请输入：>");
//		scanf("%d", &input);
//		if (input > 0 && input < 101)
//		{
//			printf("恭喜你输入正确\n");
//			input = 0;
//		}
//		else
//		{
//			printf("输入1~100的数字，请重新输入：\n");
//			input = 1;
//		}
//	} while(input);
//	return 0;
//}

//void x()
//{
//	printf("Hello,world\n");
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		if (i != 1)
//		{
//			printf("-------------\n");
//		}
//		else
//		{
//			x();
//		}
//	}
//	return 0;
//}