
#include<stdio.h>
#include<string.h>

int main()
{
	int input = 0;
	printf("join us\n");
	printf("��Ҫ�ú�ѧϰ��?(1/0)>:");
	scanf_s("%d", &input);
	if (input == 1)
		printf("get a offer\n");
	else
		printf("�ؼ�������\n");
	return 0;
}