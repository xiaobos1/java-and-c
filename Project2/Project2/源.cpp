#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//дһ������С��Ϸ
//������
//�¶��˾͹�ϲ�㣬��Ϸ����
//�´��˾ͻ���ߴ��˻���С�������£�ֱ���¶�
//��Ϸһֱ��
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
		printf("�²�����:>");
		scanf("%d", &gu);
		if (gu < ret) {
			printf("��С��\n");
		}
		else if (gu > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ��¶���\n");
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
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		dafault:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;

}