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
		printf("请注意你的电脑将在一分钟关机,输入：我是猪，就取消关机\n");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdown - a");
			break;
		}
	}
	return 0;
}