#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"
void initarr(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			arr[i][j] = ' ';
		}
	}

}

void dayiarr(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < col - 1) 
				printf("|");
			
		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
//�������
void palymore(char arr[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����:>");
	while (1)
	{
		printf("���������������\n");
		scanf("%d %d", &x, &y);
		if(x>=1 && x<=row && y>=1 && y<=col)
		{
			if (arr[x - 1][y - 1] == ' ')
			{
				arr[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("���걻ռ�ã�����������\n");
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
}

void comput(char arr[ROW][COL], int row, int col)
{
	printf("�����ߣ�>\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '#';
			break;
		}
	}

}

int isfull(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (arr[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
//ʤ���ж�
char iswin(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	//�ж�����
	for (i = 0; i < row; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][1]== arr[i][2] && arr[i][1] != ' ')
		{
			return arr[i][1];
		}
	}
	//�ж�����
	for (i = 0; i < col; i++)
	{
		if (arr[0][i] == arr[1][i] && arr[1][i]==arr[2][i] && arr[1][i] != ' ')
		{
			return arr[1][i];
		}
	}
	//�ж϶Խ���
	if (arr[0][0] == arr[1][1] && arr[1][1]==arr[2][2] && arr[1][1] != ' ')
	{
		return arr[1][1];
	}
	if (arr[0][2] == arr[1][1] &&arr[1][1]== arr[2][0] && arr[1][1] != ' ')
	{
		return arr[1][1];
	}
	//�ж�ƽ��
	int ret = isfull(arr, row, col);
	if (ret == 1)
	{
		return 'Q';
	}
	//����
	return 'C';

}
