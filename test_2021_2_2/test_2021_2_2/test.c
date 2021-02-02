#define _CRT_SECURE_NO_WARNINGS   1

//#include<stdio.h>
//#include<string.h>
//int main()
//
//{
//	int arr[3][4] = { { 1, 2, 3, 4 }, { 4, 5, 6, 7 }, { 8, 9, 10, 11 } };
//	int(*p)[3][4] = &arr;
//	int i = 0;
//	for (i = 0; i < 3;i++)

	//int len = strlen(arr);
	//printf("%d\n", len);
	//int sz = sizeof(arr[0]) / sizeof(arr[0][0]);
	//printf("%d\n", sz);
	//for (i = 0; i < 4;i++)
	//{
	//	printf("%d ",(*(p + 1))[i]);
	//}
//	
//	return 0;
//}
//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*pf)(int, int) = Add;
//	int ret = (*pf)(2, 3);
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	int(*arr[])(int, int) = { 0, Add, Sub, Mul, Div };
//	do
//	{
//		printf("请输入input的值：\n");
//		scanf("%d", &input);
//		printf("请输入两个操作数：\n");
//		scanf("%d%d", &x, &y);
//		int ret = (*arr[input])(x, y);
//		printf("%d\n", ret);
//	} while (input); 
//	return 0;
//}
//#include<stdio.h>
//void sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j]<arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 5, 9, 4, 3, 6, 7, 2, 12, 45 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str1[] =  "a" ;
//	char str2[] = "aA";
//	int ret = strcmp(str1,str2 );
//	printf("%d\n", ret);
//	return 0;
//}
//#include <string.h>
//#include <stdio.h>
//
//char string1[] = "The quick brown dog jumps over the lazy fox";
//char string2[] = "The QUICK brown dog jumps over the lazy fox";
//
//void main(void)
//{
//	char tmp[20];
//	int result;
//	/* Case sensitive */
//	printf("Compare strings:\n\t%s\n\t%s\n\n", string1, string2);
//	result = strcmp(string1, string2);
//	if (result > 0)
//		strcpy(tmp, "greater than");
//	else if (result < 0)
//		strcpy(tmp, "less than");
//	else
//		strcpy(tmp, "equal to");
//	printf("\tstrcmp:   String 1 is %s string 2\n", tmp);
//}
#include<stdio.h>
#include<stdlib.h>
//int cmp_int(const void*e1, const void*e2)
//{
//	return *(int *)e2 - *(int *)e1  ;
//
//}
//
//
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//void test()
//{
//	int arr[] = { 1, 5, 6, 7, 9, 42, 15, 32, 84, 12 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print(arr,sz);
//}
//int main()
//{
//	test();
//	return 0;
//}
struct stu
{
	char name[20];
	int age;
};
int cmp_stu_age(const void*e1, const void*e2)
{
	return (*(struct stu *)e1).age - (*(struct stu *)e2).age;
}

void test1()
{
	struct stu arr[] = { { "zhangsan", 20 }, { "lisi", 35 }, { "wangwu", 15 } };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_age);
	//print(arr, sz);
}

int main()
{
	test1();
	return 0;
}