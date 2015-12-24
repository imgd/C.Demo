#include <stdio.h>
void main3() {
	int max(int x, int y);
	int a, b, c;
	scanf_s("%d,%d", &a, &b);
	c = max(a, b);
	printf("max input para is %d \n", c);
}

int max(int x, int y) {
	int z;
	if (x > y)
		z = x;
	else
		z = y;

	return z;
}