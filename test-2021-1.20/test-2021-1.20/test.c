#define _CRT_SECURE_NO_WARNINGS   1
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
//	int a, b, c;
//	while ((scanf("%d%d%d", &a, &b, &c)) != EOF)
//	{
//		int max = Max(Max(a, b), c);
//		printf("%d\n", max);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//
//int main()
//{
//	int i = 0;
//	int score[3] = { 0 };
//	while (scanf("%d %d %d", &score[0], &score[1], &score[2]) != EOF)
//	{
//		int max = 0;//ÿһ����ԣ�max���ָ���0
//		int i = 0;
//		for (i = 0; i<3; i++)
//		{
//			if (score[i] > max)
//				max = score[i];
//		}
//		printf("%d\n", max);
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char i;
//	while (scanf("%c", &i) != EOF)
//	{
//		if (i >= 'a' && i <= 'z')
//		{
//			printf("%c\n", i - 32);
//		}
//	    if ( i >= 'A' && i <= 'Z')
//		{
//			printf("%c\n", i + 32);
//		}
//
//	}
//	return 0;
//}
//#include <stdio.h>
//
//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (islower(ch))
//		{
//			printf("%c\n", toupper(ch));
//		}
//		else
//		{
//			printf("%c\n", tolower(ch));
//		}
//		getchar();//��\n�س����Ӽ��̻������ж�ȡ��
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b;//2147483646
//	int c = 0;
//	printf("������a,b��ֵ��");
//	scanf("%d%d", &a, &b);
//	c = a + (b - a) / 2;
//	printf("%d\n", c);
//	return 0;
//}
//#include<stdio.h>
#include<limits.h>
//int main()
//{
//	int a = INT_MAX;
//}
//#include<stdio.h>
//int main()
//{
//	char arr[] = "hello bit 123";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int a = strlen(arr);
//	printf("%d\n", a);
//	printf("%d\n", sz);
//	printf("%c", arr[4]);
//	printf("%c", arr[5]);
//	printf("%c", arr[6]);
//	return 0;
//}
//#include<stdio.h>
//#include<Windows.h>
//int main()
//{
//	char arr1[] = "gaodi i love you!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>//strcmp
//int main()
//{
//	char password[10] = {0};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("������ȷ����½�ɹ�\n");
//			break;
//	
//		
//		}
//		else
//		{
//			printf("������󣬵�¼ʧ��\n");
//		}
//	}
//	return 0;
//	
//}
//#include<stdio.h>
//#include<Windows.h>
//int main()
//{
//	int j = 0;
//	for (j = 0; j < 10; j++)
//	{
//		int ret = time(NULL);
//		printf("%d\n", ret);
//		Sleep(2000);
//	}
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("*******************\n");
	printf("****    PLAY   ****\n");
	printf("****    EXIT   ****\n");
	printf("*******************\n");
}
void game()
{
	int ret = rand() % 100 + 1;
	int guess = 0;
	printf("�����������\n");
	while (1)
	{
		printf("���������²�����֣�\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("��ʾ���´��ˣ�\n");
		}
		else if (guess < ret)
		{
			printf("��ʾ����С�ˣ�\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}

}
int main()
{
	int input = 0;

	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("������ 1 ��ʼ��Ϸ������ 0 �˳���Ϸ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}
