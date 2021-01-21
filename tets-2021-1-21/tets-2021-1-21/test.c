#define _CRT_SECURE_NO_WARNINGS   1
//
//#include<stdio.h>
//#include<math.h>
//int is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i%j == 0)
//		
//			return 0;
//			
//		
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1);
//		{
//			printf("%d ",i);
//		}
//
//	}
//	return 0;
//}
//#include<stdio.h>
//int binary_search(int arr[], int k, int sz)
//
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		 mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	
//	return -1;
//
//}
//int main()
//{
//	//有序的
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//二分查找的
//	//找到了，返回下标
//	//找不到，返回 -1
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i < 200; i++)
//	{
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag==1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int prime_number(int n)
//{
//	int j;
//	for (j = 2; j < n; j++)
//	{
//		if (n%j == 0)
//		{
//			return -1;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//prime_number(i);
//		if (prime_number(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//#include<stdio.h>
//void Multiplication_Table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %2.d ", j, i, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n;
//	printf("请输入阶数：");
//	scanf("%d", &n);
//	Multiplication_Table(n);
//	return 0;
//
//}
//#include<stdio.h>
//void Swap(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入a,b的值：");
//	scanf("%d%d", &a, &b);
//	printf("交换前：a = %d b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后：a = %d b = %d\n", a, b);
//	return 0;
//}
//#include<stdio.h>
//int leap_year(int year)
//{
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year = 0;
//	printf("请输入要判断的年份：");
//	scanf("%d", &year);
//	int ret = leap_year(year);
//	if (ret==1)
//	{
//		printf("%d是闰年\n");
//	}
//	else
//	{
//		printf("%d不是闰年\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d%d", &year, &month);
//	switch (month)
//	{
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//	case 12:
//		printf("%d\n", 31);
//		break;
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//		printf("%d\n", 30);
//		break;
//	case 2:
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d\n", 29);
//		}
//		else
//		{
//			printf("%d\n", 28);
//		}
//	}
//	return 0;
//}99 45 78 67 72 88 60
#include<stdio.h>
void sort(int arr[])
{
	int i = 0;
	for (i = 0; i < 6; i++)
	{
		int j = 0;
		for (j = 0; j < 6 - i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[7] = { 0 };
	int sum = 0;
	double ret = 0.0;
	int i = 0;
	int j = 0;
	for (i = 0; i < 7; i++)
	{
		scanf("%d", arr[i]);
	}
	sort(arr);
	for (j = 0; j < 7; j++)
	{
		printf("%d ", arr[j]);
	}
	return 0;
	//for (j = 1; j < 6; j++)
	//{
	//	sum = sum + arr[j];
	//}
	//ret = sum / 5.0;
	//printf("%2.lf\n", ret);
	//return 0;
}