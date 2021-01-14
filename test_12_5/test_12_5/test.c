#include<stdio.h>
int main()
{
	//char arr[] = "abcdef";
	char* p = "abcdef;
		//printf("%s\n", arr);
		//printf("%s\n", pc);
		//printf("%c\n", *arr);
		*p = 'w';
	printf("%s\n", p);
	return 0;
}