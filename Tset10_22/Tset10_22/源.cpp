#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int passed = 0, fail = 0;
	float arr[10] = { 0 };
	char newArr[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%.f", arr[i]);
		if (arr[i] < 0 || arr[i] >100)
		{
			printf("����");
			return 1;
		}

	}
	for (int i = 0; i <10; i++)
	{
		if (arr[i] >= 90.0)
		{
			printf("NO.%d ��ĩ�ɼ���%.1f,���˳ɼ�: A", i + 1, arr[i]);
		}
		else if (arr[i] >= 80.0)
		{
			printf("NO.%d ��ĩ�ɼ���%.1f,���˳ɼ�: B", i + 1, arr[i]);
		}
		else if (arr[i] >= 60.0)
		{
			passed++;
			printf("NO.%d ��ĩ�ɼ���%.1f,���˳ɼ�: C", i + 1, arr[i]);
		}
		else {
			printf("NO.%d ��ĩ�ɼ���%.1f,���˳ɼ�: D", i + 1, arr[i]);
			fail++;
		}
	}
	printf("����������%d,������������%d", passed, fail);
	return 0;
}