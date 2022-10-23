#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int passed = 0, fail = 0;//及格人数，不及格人数
//	float arr[10] = { 0 };//成绩数组
//	for (int i = 0; i < 10; i++)//遍历数组
//	{
//		scanf("%f", &arr[i]);//键盘录入
//		if (arr[i] < 0 || arr[i] >100)//除去不合格
//		{
//			printf("错误");
//			i--;
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] >= 90.0)
//		{
//			printf("NO.%d 期末成绩：%.1f,考核等级: A\n", i + 1, arr[i]);
//		}
//		else if (arr[i] >= 80.0)
//		{
//			printf("NO.%d 期末成绩：%.1f,考核等级: B\n", i + 1, arr[i]);
//		}
//		else if (arr[i] >= 60.0)
//		{
//			passed++;//合格人数
//			printf("NO.%d 期末成绩：%.1f,考核等级: C\n", i + 1, arr[i]);
//		}
//		else {
//			printf("NO.%d 期末成绩：%.1f,考核等级: D\n", i + 1, arr[i]);
//			fail++;//不合格人数
//		}
//	}
//	printf("及格人数：%d,不及格人数：%d", passed, fail);
//	return 0;
//}

int mylian(int arr[], int r)
{
	int s = 0;
	/*for (int i = 0; i <= r; i++)
	{
		s += i;
	}
	for (int i = 0; i < r; i++)
	{
		s -= arr[i];
	}*/
	for (int i = 0; i <= r; i++)
	{
		s ^= i;
	}
	printf("%d\n", s);
	for (int i = 0; i < r; i++)
	{
		s ^= arr[i];
	}
	return s;
}
int main()
{
	int arr[3] = { 0,1,3 };
	int ret=mylian(arr, 3);
	printf("%d", ret);
	return 0;
}