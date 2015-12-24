#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

//二进制和十进制转换器

void main() {
	/*void TConvertE(int a);
	int a;
	printf("十进制转二进制请输入数字:");
	scanf_s("%d", &a);
	TConvertE(a);*/

	//此处获取输入字符串有问题暂用固定参数代替
	void EConvertT(char * b);	
	EConvertT("1000110");
}
//十进制转二进制
void TConvertE(int a) {
	char * b = "";
	int temp_c = a, temp_y;
	printf("十进制数字 %d 转二进制 算法 is :\n", a);
	printf("*********************************\n");
	while (temp_c / 2 != 0)
	{
		int temp;
		temp = temp_c / 2;
		temp_y = temp_c % 2;
		printf("%d / 2 = %d 余 %d \n\n", temp_c, temp, temp_y);
		temp_c = temp;
	}
	if (temp_c / 2 == 0)
	{
		int temp;
		temp = temp_c / 2;
		temp_y = temp_c % 2;
		printf("%d / 2 = %d 余 %d \n\n", temp_c, temp, temp_y);
		temp_c = temp;
	}
	printf("*********************************\n");
	printf("结果余数由↓忘↑\n");
}
//二进制转10进制
void EConvertT(char * b) {
	int len = strlen(b);
	int sum = 0;
	printf("%s\n", b);
	for (int i = 0; i < len; i++)
	{
		int j = int(b[i] - '0');
		int temp = (len - 1 - i);
		int temp_sum = j*pow(2, temp);
		sum += temp_sum;
		printf(" %d * 2 的 %d 次方 = %d \n", j, temp, temp_sum);
	}

	printf("二进制结果：%d", sum);
}
