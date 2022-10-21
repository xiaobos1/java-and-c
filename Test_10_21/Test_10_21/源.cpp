#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define RIGTH 11
#define LEFT 11
//int main()
//{
//	//定义一个原始数组
//	int arr[11][11] = { 0 };
//	/*for (int i = 0; i < RIGTH; i++)
//	{
//		for (int j = 0; j < LEFT; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}*/
//
//	arr[1][2] = 1;
//	arr[2][3] = 2;
//	//遍历
//	/*for (int i = 0; i < RIGTH; i++)
//	{
//		for (int j = 0; j < LEFT; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}*/
//
//	//统计不为零的数
//	int sum = 0;
//	for (int i = 0; i < RIGTH; i++)
//	{
//		for (int j = 0; j < LEFT; j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				sum++;
//			}
//		}
//	}
//	printf("%d", sum);
//	//创建稀疏数组
//	//int sparseArr[sum + 1][3];
//
//	return 0;
//}

int main()
{
	//键盘输入税前工资
	int money = 0;
	scanf("%d", &money);
	//五险一金
	double fivemoney = money * 0.222 + 3;


	return 0;
}