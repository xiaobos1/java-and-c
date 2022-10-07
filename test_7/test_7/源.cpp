#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int maxTi(int arry[3][3]);
//	int arr[3][3] = { 1,4,7,2,5,8,3,6,9 };
//	printf("%d", maxTi(arr));
//	return 0;
//}
//int maxTi(int array[3][3])
//{
//	int i, j, max;
//	max = array[0][0];
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (array[i][j] > max)
//			{
//				max = array[i][j];
//			}
//		}
//	}
//	return max;
//}

int main()
{
	int n,s=0;
	for (int i = 100; i < 1000; i++)
	{
		int c = i;
		i = i % 10;
		s = s + i* i * i;
		i = i / 10;
		if (s == c)
		{
			printf("%d", s);
		}
	}
	return 0;
}