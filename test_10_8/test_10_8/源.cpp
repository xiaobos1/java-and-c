#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
//#define INT_PRT int*
//struct S{
//	int n;
//	int arr[];//柔性数组
//};
//int main()
//{ 
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//int main()
//{
//	struct S* ps=(struct S*)malloc(sizeof(struct S)+10*sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	//增加空间
//	struct S*prt=realloc(ps, sizeof(struct S) + 20 * sizeof(int));
//	if (prt != NULL)
//	{
//		ps = prt;
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}

/*struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	if (ps == NULL)
	{
		return 1;
	}
	ps->n = 10;
	ps->arr = (int*)malloc(10 * sizeof(int));
	if (ps->arr == NULL)
	{
		return 1;
	}
	for (int i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}*/

int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		int i = 0;
		for (i = 0; i < n; i++)
		{
			int j = 0;
			for (j = 0; j < n; j++)
			{
				if (i == j)
				{
					printf("*");
				}
				else if (j + i == n - 1)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}