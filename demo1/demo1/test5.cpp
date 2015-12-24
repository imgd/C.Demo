#include <stdio.h>

void main5() {
	int sign = 1;
	double deno = 2.0, sum = 1.0, term;
	while (deno <= 100)
	{
		sign = -sign;
		term = sign / deno;
		printf("current para is term = %d / %d = %d\n", sign, deno, term);
		sum += term;
		deno += 1;
	}

	printf("zhe result is %d \n", sum);
}