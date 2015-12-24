#include <stdio.h>
void main4() {
	int t = 1, i = 2;
	while (i <= 5)
	{
		t = t*i;
		printf("currtent t is %d\n",t);
		i += 1;
	}
	printf("zhe total t is %d\n",t);
}