#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

//�����ƺ�ʮ����ת����

void main() {
	/*void TConvertE(int a);
	int a;
	printf("ʮ����ת����������������:");
	scanf_s("%d", &a);
	TConvertE(a);*/

	//�˴���ȡ�����ַ������������ù̶���������
	void EConvertT(char * b);	
	EConvertT("1000110");
}
//ʮ����ת������
void TConvertE(int a) {
	char * b = "";
	int temp_c = a, temp_y;
	printf("ʮ�������� %d ת������ �㷨 is :\n", a);
	printf("*********************************\n");
	while (temp_c / 2 != 0)
	{
		int temp;
		temp = temp_c / 2;
		temp_y = temp_c % 2;
		printf("%d / 2 = %d �� %d \n\n", temp_c, temp, temp_y);
		temp_c = temp;
	}
	if (temp_c / 2 == 0)
	{
		int temp;
		temp = temp_c / 2;
		temp_y = temp_c % 2;
		printf("%d / 2 = %d �� %d \n\n", temp_c, temp, temp_y);
		temp_c = temp;
	}
	printf("*********************************\n");
	printf("��������ɡ�����\n");
}
//������ת10����
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
		printf(" %d * 2 �� %d �η� = %d \n", j, temp, temp_sum);
	}

	printf("�����ƽ����%d", sum);
}
