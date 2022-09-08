#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


//初始化
void initboard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

//打印
void dispalyboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-扫雷游戏-\n");
	//打印列号
	for (i = 0; i <=9; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= 9; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= 9; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-扫雷游戏-\n");
}

//布置雷
void setmine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;//布置10个雷
	while (count)
	{
		int x = rand()%row +1;
		int y = rand()%col +1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
//static 修饰局部变量
//       修饰全局变量
//           函数
static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
		   
}


//排查雷
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1.输入排查的坐标
	//2.检查坐标是不是雷
	  //(是雷) -很遗憾炸死了-游戏结束
	  // 不是雷 -统计坐标周围雷的数量 --游戏继续

	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col- EASY_COUNT)
	{
		printf("请输入排查的坐标：>");
		scanf("%d%d", &x, &y);//x 1~9  y1~9

		//判断坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾你被炸死了\n");
				dispalyboard(mine, ROW, COL);
				break;
			}
			else
			{
				int count=get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				dispalyboard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("坐标不合法，请重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你排雷成功\n");
		dispalyboard(mine, ROW, COL);
	}
}

