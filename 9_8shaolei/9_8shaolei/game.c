#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


//��ʼ��
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

//��ӡ
void dispalyboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-ɨ����Ϸ-\n");
	//��ӡ�к�
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
	printf("-ɨ����Ϸ-\n");
}

//������
void setmine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;//����10����
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
//static ���ξֲ�����
//       ����ȫ�ֱ���
//           ����
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


//�Ų���
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1.�����Ų������
	//2.��������ǲ�����
	  //(����) -���ź�ը����-��Ϸ����
	  // ������ -ͳ��������Χ�׵����� --��Ϸ����

	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col- EASY_COUNT)
	{
		printf("�������Ų�����꣺>");
		scanf("%d%d", &x, &y);//x 1~9  y1~9

		//�ж�����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź��㱻ը����\n");
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
			printf("���겻�Ϸ�������������\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�����׳ɹ�\n");
		dispalyboard(mine, ROW, COL);
	}
}

