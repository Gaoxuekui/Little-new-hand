
#include<stdio.h>
#include<string.h>

int main()
{
	int input = 0;
	printf("join us\n");
	printf("你要好好学习吗?(1/0)>:");
	scanf_s("%d", &input);
	if (input == 1)
		printf("get a offer\n");
	else
		printf("回家卖红薯\n");
	return 0;
}