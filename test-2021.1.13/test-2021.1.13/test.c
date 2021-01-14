#define _CRT_SECURE_NO_WARNINGS   1
//#include<stdio.h>
//int main()
//{
//	int a;
//	scanf("%d\n", &a);
//	if (a >= 140)
//	{
//		printf("Genius");
//	}
//	else
//	{
//		printf("xi");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int m, n, z;
//	printf("请输入两个数：");
//	scanf("%d%d", &m, &n);
//	while (n != 0)
//	{
//		z = m%n;
//		m = n;
//		n = z;
//	}
//	printf("%d\n", m);
//	return 0;
//}
//#include<stdio.h>
//int Max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 20;
//	int b = -10;
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof('A'));
//	return 0;
//}
#include<stdio.h>
int main()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}