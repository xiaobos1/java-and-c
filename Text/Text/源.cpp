#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main() {
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int f = 1;
//		for(j=2;j<i;j++)
//		{
//			if (i % j == 0)
//			{
//				f = 0;
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
#include <string.h>
#include <stdlib.h>
int main() {
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("��ע����ĵ��Խ���һ���ӹػ�,���룺��������ȡ���ػ�\n");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown - a");
			break;
		}
	}
	return 0;
}