#include<stdio.h>
int main()
{
	//计算两个数据的和
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf_s("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("sum =%d\n", sum);
	return 0;
}