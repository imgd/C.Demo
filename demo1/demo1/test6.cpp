#include <stdio.h>
#include <string.h>//�����ַ�����������
void main6() {
	char a[10] = "��",
		b[10] = "����",
		c[10] = "";

	printf("init result is a=%s,b=%s\n", a, b);

	strcpy_s(c, a);
	strcpy_s(a, b);
	strcpy_s(b, c);

	printf("result result is a=%s,b=%s\n", a, b);
}