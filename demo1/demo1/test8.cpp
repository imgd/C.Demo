#include <stdio.h>
void main8() {
	void GetIntSum();
	void RunYear();
	GetIntSum();
	RunYear();
}

void GetIntSum() {
	int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		sum += i;
		i += 1;
	}
	printf("zhe 1-100 total sum is %d\n", sum);
}
void RunYear() {
	printf("在1900年-2000年之间是闰年的年份有：\n");
	for (int i = 1900; i <= 2000; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) ||
			(i % 100 == 0 && i % 400 != 0))
		{
			printf(" %d 年\n", i);
		}
	}
}