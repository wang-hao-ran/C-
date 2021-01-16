#define _CRT_SECURE_NO_WARNINGS   1
//#include<stdio.h>
//int main()
//{
//	printf("hello world\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 1;
//	for (n = 1; n <= 100; n++)
//	{
//		if (n % 2 == 1)
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//		 
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int j = 0;
//	int i = 0;
//	int sum = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (j = 0; j<10; j++)
//	{
//		//ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (left <= right)
//	{
//
//		int mid = (left + right) / 2;
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了 %d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("找不到");
//	} 
//	return 0;
//}