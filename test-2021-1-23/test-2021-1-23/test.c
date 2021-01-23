#define _CRT_SECURE_NO_WARNINGS   1
//#include<stdio.h>
//int main()
//{
//	//char arr[] = "abcdef";
//	char arr[] = { 'a','b','c','d','e','f' };
//	int len = strlen(arr);
//	//int len = sizeof(arr) / sizeof(arr[0]);
//
//	printf("%d\n", len);
//	return 0;
//}
//#include<stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}2
//#include<stdio.h>
//int Fin(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*Fin(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fin(n);
//	printf("%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int i = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("%d\n", ret);
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	char arr[] = "bit";
//	char* p = arr;
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
#include<stdio.h>/*
int my_strlen(char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + my_strlen(str + 1);
	}
}
int main()
{
	char arr[] = "bit";
	int ret = my_strlen(arr);
	printf("%d\n", ret);
	return 0;
}*/
