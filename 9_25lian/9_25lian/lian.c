#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//计算由a组成的前n项和
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//void print(int* p)
//{
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		printf("%d ", *(p+i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	print(arr);
//	return 0;
//}

//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		//计算i每一位的n次方之和
//		tmp = i;
//		int  su=0;
//		while (tmp)
//		{
//			su += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (su == i)
//		{
//			printf("%d\n", i);
//		}
//
//	}
//	return 0;
//}
//结构体 struct 
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//void print(struct stu * p)
//{
//	printf("%s",(*p).name);
//}
//int main()
//{
//	struct stu student[3] = { {1,"wang",18},
//							  {2,"li",19},
//							  {3,"jian",18} };
//	print(student + 1);
//	return 0;
//}
#include <string.h>
//void ni_xu(char* p)
//{
//	int len = strlen(p);
//	char* left = p;
//	char* right = p + len - 1;
//	while (left < right)
//	{
//		char tmp =* left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	ni_xu(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//int main()
//{
//	int  arr[] = {1,2,3,4,5,6};
//	int st = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	for (i = 0, j = st-1; i < j; i++, j--)
//	{
//		int  tmp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = tmp;
//	}
//	for (i = 0; i < st; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	//ni_xu(arr,st);
//	return 0;
//}
//菱形打印
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j < n-1-i; j++)
//		{
//			printf(" ");
//		}
//		//打印星星
//		for (j = 0; j<2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j =0;j<2*(n-1-i)-1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main() 
//{
//	int money = 20;
//	int count = 20;
//	int qi = money;
//	while (money >=2)
//	{
//		count =count + money / 2;
//		money = money / 2 + money % 2;
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	int t = 0;
//	scanf("%d", &money);
//	if (money > 0)
//	{
//		t = 2 * money - 1;
//	}
//	printf("%d", t);
//	return 0;
//}

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	//从前往后找一个偶数
	while ((left<right)&&(arr[left] % 2 == 1))
	{
		left++;
	}
	//从后往前找一个奇数
	while ((left<right)&&(arr[right] % 2 == 0))
	{
		right--;
	}
	if (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
	}

}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int st = sizeof(arr) / sizeof(arr[0]);
	move(arr, st);
	print(arr, st);

	/*int i = 0;
	for (i = 0; i < st; i++)
	{
		int j = 0;
		for (j = st - 1; j <= 0; j--)
		{
			if (arr[i] % 2 == 0)
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
		
	}
	for (i = 0; i < st; i++)*/
	/*{
		printf("%d", arr[i]);
	}*/
	return 0;
}