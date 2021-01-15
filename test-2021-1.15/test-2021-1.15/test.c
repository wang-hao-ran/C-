#define _CRT_SECURE_NO_WARNINGS   1
//#include<stdio.h>
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		if ((a + b > c) && (a + c > b) && (b + c > a))
//		{
//			
//			if ((a == b) || (a == c) || (b==c))
//			{
//				if ((a == b) && (a == c) && (b == c))
//				{
//					printf("Equilateral triangle!\n");
//				}
//				else
//				{
//					printf("Isosceles triangle!\n");
//				}
//				
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a, b, c;
//	double p;
//	double circumference, area;
//	scanf("%d %d %d", &a, &b, &c);
//	circumference = a + b + c;
//	p = 0.5*(a + b + c);
//	area = sqrt(p*(p - a)*(p - b)*(p - c));
//	printf("circumference=%.2lf area=%.2lf\n", circumference, area);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int N, count1 = 0, count2 = 0;
//	int i = 1;
//	scanf("%d", &N);
//	for (i = 1; i <= N; i++)
//	{
//		if (i % 2 == 0)
//		{
//			count1++;
//		}
//		else
//		{
//			count2++;
//		}
//	}
//	printf("%d %d\n", count2, count1);
//	return 0;
//}