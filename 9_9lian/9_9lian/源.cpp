#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;//ϴ��ˮ
	int j = 0;//����
	int n = 0;//��ˢ
	int count = 0;//����
	for (i = 1; i < 7; i++)
	{
		for (j = 1; j < 51; j++)
		{
			for (n = 1; n < 21; n++)
			{
				if ((i * 15 + j * 2 + n * 5) == 100)
				{
					printf("ϴ��ˮ=%d ,����=%d ,��ˢ =%d\n", i, j, n);
					count++;
				}
			}
		}
	}
	printf("%d\n", count);//�ܹ�����
	return 0;
}

//int main()
//{
//	int input = 0;
//	do
//	{
//		printf("�����룺>");
//		scanf("%d", &input);
//		if (input > 0 && input < 101)
//		{
//			printf("��ϲ��������ȷ\n");
//			input = 0;
//		}
//		else
//		{
//			printf("����1~100�����֣����������룺\n");
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