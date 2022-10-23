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
			printf("错误");
			return 1;
		}

	}
	for (int i = 0; i <10; i++)
	{
		if (arr[i] >= 90.0)
		{
			printf("NO.%d 期末成绩：%.1f,考核成绩: A", i + 1, arr[i]);
		}
		else if (arr[i] >= 80.0)
		{
			printf("NO.%d 期末成绩：%.1f,考核成绩: B", i + 1, arr[i]);
		}
		else if (arr[i] >= 60.0)
		{
			passed++;
			printf("NO.%d 期末成绩：%.1f,考核成绩: C", i + 1, arr[i]);
		}
		else {
			printf("NO.%d 期末成绩：%.1f,考核成绩: D", i + 1, arr[i]);
			fail++;
		}
	}
	printf("及格人数：%d,不及格人数：%d", passed, fail);
	return 0;
}