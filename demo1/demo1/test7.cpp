#include <stdio.h>
void main7() {

	void bubble(int *a, int n);
	void choise(int *a, int n);
	void quick(int *a, int i, int j);
	void insert(int *a, int n);
	void shell(int *a, int n);

	int a1[] = { 13,0,5,8,1,7,21,50,9,2 };

	printf("init data list:{");
	for (int i = 0; i < 10; i++)
	{
		printf(",%d", a1[i]);
	}
	printf("}\n");

	bubble(a1, 10);
	choise(a1, 10);
	quick(a1, 0, 9);
	insert(a1, 10);
	shell(a1, 10);

}


//冒泡
void bubble(int *a, int n) /*定义两个参数：数组首地址与数组大小*/
{
	int i, j, temp;

	for (i = 0; i < n - 1; i++)

		for (j = i + 1; j<n; j++) /*注意循环的上下限*/

			if (a[i]>a[j]) {

				temp = a[i];

				a[i] = a[j];

				a[j] = temp;

			}

	printf("hubble sort result:{");
	for (int i = 0; i < n; i++)
	{
		printf(",%d", a[i]);
	}
	printf("}\n");
}
//选择
void choise(int *a, int n)

{

	int i, j, k, temp;

	for (i = 0; i < n - 1; i++) {

		k = i; /*给记号赋值*/

		for (j = i + 1; j<n; j++)

			if (a[k]>a[j]) k = j; /*是k总是指向最小元素*/

		if (i != k) { /*当k!=i是才交换，否则a[i]即为最小*/

			temp = a[i];

			a[i] = a[k];

			a[k] = temp;

		}

	}

	printf("choise sort result:{");
	for (int i = 0; i < n; i++)
	{
		printf(",%d", a[i]);
	}
	printf("}\n");

}

//快速
void quick(int *a, int i, int j)

{

	int m, n, temp;

	int k;

	m = i;

	n = j;

	k = a[(i + j) / 2]; /*选取的参照*/

	do {

		while (a[m]<k&&m < j) m++; /* 从左到右找比k大的元素*/

		while (a[n] > k&&n>i) n--; /* 从右到左找比k小的元素*/

		if (m <= n) { /*若找到且满足条件，则交换*/

			temp = a[m];

			a[m] = a[n];

			a[n] = temp;

			m++;

			n--;

		}

	} while (m <= n);

	if (m < j) quick(a, m, j); /*运用递归*/

	if (n > i) quick(a, i, n);

	printf("quick sort result:{");
	for (int i = 0; i < n; i++)
	{
		printf(",%d", a[i]);
	}
	printf("}\n");

}

//插入
void insert(int *a, int n)

{

	int i, j, temp;

	for (i = 1; i < n; i++) {

		temp = a[i]; /*temp为要插入的元素*/

		j = i - 1;

		while (j >= 0 && temp < a[j]) { /*从a[i-1]开始找比a[i]小的数，同时把数组元素向后移*/

			a[j + 1] = a[j];

			j--;

		}

		a[j + 1] = temp; /*插入*/

	}

	printf("insert sort result:{");
	for (int i = 0; i < n; i++)
	{
		printf(",%d", a[i]);
	}
	printf("}\n");

}

//shell
void shell(int *a, int n)

{

	int i, j, k, x;

	k = n / 2; /*间距值*/

	while (k >= 1) {

		for (i = k; i < n; i++) {

			x = a[i];

			j = i - k;

			while (j >= 0 && x < a[j]) {

				a[j + k] = a[j];

				j -= k;

			}

			a[j + k] = x;

		}

		k /= 2; /*缩小间距值*/

	}
	printf("shell sort result:{");
	for (int i = 0; i < n; i++)
	{
		printf(",%d", a[i]);
	}
	printf("}\n");

}