#include<stdio.h>
int Is_leap_year(int a)
{
	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int a, b, c,m,n=0;
	int common_year[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int leap_year[]= { 31,29,31,30,31,30,31,31,30,31,30,31 };
	scanf_s("%d-%d-%d", &a, &b, &c);
	if (Is_leap_year(a))
	{
		for (m = 0; m < b - 1; m++)
			n = n + leap_year[m];
		n = n + c;
	}
	else
	{
		for (m = 0; m < b - 1; m++)
			n = n + common_year[m];
		n = n + c;
	}
	printf("%d", n);
}