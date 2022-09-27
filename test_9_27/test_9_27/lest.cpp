#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// typedef - 对类型进行重定义
//函数指针数组
int Add(int x, int y)
{
	return x + y;
}
int Sud(int x, int y)
{
	return x - y;
}
int Mul(int x,int y) 
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
//int main()
//{
//	int (*pf1)(int,int) = Add;
//	int (*pf2)(int, int) = Sud;
//	int (*pfarr[2])(int, int) = { Add,Sud };
//	return 0;
//}
void mune() 
{
	printf("******************************\n");
	printf("**** 1.add     2.sub   *******\n");
	printf("**** 3.mul     4.div   *******\n");
	printf("********* 0.esit *************\n");
	printf("******************************\n");
}
//int main()
//{
//	//int (*p[4])(int, int) = { Add,Sud,Mul,Div };
//	int input = 0;
//	do {
//		mune();
//		int i = 0;
//		int j = 0;
//		int ret = 0;
//		printf("输入你想要得操作\n");
//		scanf("%d", &input);
//		printf("输入俩个数\n");/*scanf("%d %d\n", &i, &j);
//			int ret = Add(i, j);
//			printf("%d\n",ret);*/
//		switch (input)
//		{
//		case 1:
//			scanf("%d %d\n", &i, &j);
//			ret = Add(i, j);
//			printf("%d\n",ret);
//			break;
//		case 2:
//			scanf("%d %d\n", &i, &j);
//			ret = Sud(i, j);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			scanf("%d %d\n", &i, &j);
//			ret = Mul(i, j);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			scanf("%d %d\n", &i, &j);
//			ret = Div(i, j);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default :
//			printf("有效值0~4，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
#define AA 3
#define BB 3 

void nune(int arr[AA][BB],int a,int b)
{
	int i = 0;
	for (i = 0; i < a; i++)
	{
		int j = 0;
		for (j = 0; j < b; j++)
		{
			printf("%d", arr[i][j]);
		}
	}
}
int main()
{
	int input = 0;
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	do {
		mune();
		nune(3,3);
		int (*pa[5])(int, int) = { NULL,Add,Sud,Mul,Div };
		int i = 0;
		int ret = 0;
		int j = 0;
		printf("输入你想要的操作 >\n");
		scanf("%d", &input);
		if (input != 0)
		{
			if (input >= 1 && input <= 4)
			{
				printf("输入俩个操作数>:");
				scanf("%d %d", &i, &j);
				ret = (*pa[input])(i, j);
				printf("ret=%d\n", ret);
			}
			else
			{
				printf("输入错误，正确范围0~4\n");
			}
		}
		else
		{
			printf("退出程序\n");
		}
		
	} while (input);
	return 0;
}