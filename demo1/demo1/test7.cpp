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


//ð��
void bubble(int *a, int n) /*�������������������׵�ַ�������С*/
{
	int i, j, temp;

	for (i = 0; i < n - 1; i++)

		for (j = i + 1; j<n; j++) /*ע��ѭ����������*/

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
//ѡ��
void choise(int *a, int n)

{

	int i, j, k, temp;

	for (i = 0; i < n - 1; i++) {

		k = i; /*���ǺŸ�ֵ*/

		for (j = i + 1; j<n; j++)

			if (a[k]>a[j]) k = j; /*��k����ָ����СԪ��*/

		if (i != k) { /*��k!=i�ǲŽ���������a[i]��Ϊ��С*/

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

//����
void quick(int *a, int i, int j)

{

	int m, n, temp;

	int k;

	m = i;

	n = j;

	k = a[(i + j) / 2]; /*ѡȡ�Ĳ���*/

	do {

		while (a[m]<k&&m < j) m++; /* �������ұ�k���Ԫ��*/

		while (a[n] > k&&n>i) n--; /* ���ҵ����ұ�kС��Ԫ��*/

		if (m <= n) { /*���ҵ��������������򽻻�*/

			temp = a[m];

			a[m] = a[n];

			a[n] = temp;

			m++;

			n--;

		}

	} while (m <= n);

	if (m < j) quick(a, m, j); /*���õݹ�*/

	if (n > i) quick(a, i, n);

	printf("quick sort result:{");
	for (int i = 0; i < n; i++)
	{
		printf(",%d", a[i]);
	}
	printf("}\n");

}

//����
void insert(int *a, int n)

{

	int i, j, temp;

	for (i = 1; i < n; i++) {

		temp = a[i]; /*tempΪҪ�����Ԫ��*/

		j = i - 1;

		while (j >= 0 && temp < a[j]) { /*��a[i-1]��ʼ�ұ�a[i]С������ͬʱ������Ԫ�������*/

			a[j + 1] = a[j];

			j--;

		}

		a[j + 1] = temp; /*����*/

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

	k = n / 2; /*���ֵ*/

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

		k /= 2; /*��С���ֵ*/

	}
	printf("shell sort result:{");
	for (int i = 0; i < n; i++)
	{
		printf(",%d", a[i]);
	}
	printf("}\n");

}