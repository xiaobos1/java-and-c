#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int passed = 0, fail = 0;//��������������������
//	float arr[10] = { 0 };//�ɼ�����
//	for (int i = 0; i < 10; i++)//��������
//	{
//		scanf("%f", &arr[i]);//����¼��
//		if (arr[i] < 0 || arr[i] >100)//��ȥ���ϸ�
//		{
//			printf("����");
//			i--;
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] >= 90.0)
//		{
//			printf("NO.%d ��ĩ�ɼ���%.1f,���˵ȼ�: A\n", i + 1, arr[i]);
//		}
//		else if (arr[i] >= 80.0)
//		{
//			printf("NO.%d ��ĩ�ɼ���%.1f,���˵ȼ�: B\n", i + 1, arr[i]);
//		}
//		else if (arr[i] >= 60.0)
//		{
//			passed++;//�ϸ�����
//			printf("NO.%d ��ĩ�ɼ���%.1f,���˵ȼ�: C\n", i + 1, arr[i]);
//		}
//		else {
//			printf("NO.%d ��ĩ�ɼ���%.1f,���˵ȼ�: D\n", i + 1, arr[i]);
//			fail++;//���ϸ�����
//		}
//	}
//	printf("����������%d,������������%d", passed, fail);
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