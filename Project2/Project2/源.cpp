#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//写一个猜字小游戏
//猜数字
//猜对了就恭喜你，游戏结束
//猜错了就会告诉大了还是小，继续猜，直到猜对
//游戏一直玩
void menu()
{
	printf("***********************\n");
	printf("*******  1.play *******\n");
	printf("*******  0.exit *******\n");
	printf("***********************\n");
}
void game()
{
	int ret = rand() % 100 + 1;
	//printf("%d", ret);
	int gu;
	while (1)
	{
		printf("猜猜数字:>");
		scanf("%d", &gu);
		if (gu < ret) {
			printf("猜小了\n");
		}
		else if (gu > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("猜数字\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		dafault:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;

}