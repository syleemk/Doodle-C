#include <stdio.h>

/* 1.
100�� ������ ������ �Է¹޾�
ù �ٿ� ¦�� ��° ���ڵ��� ������� ����ϰ�,
���� �ٿ� Ȧ�� ��° ���ڵ��� ������� ����ϴ� ���α׷��� ����� ������.

�Է� ��
7 
3 1 4 1 5 9 2

��� ��
1 1 9
3 4 5 2

int main() {
	int n;
	int arr[100];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	puts("");

	for (int i = 1; i < n; i += 2) {
		printf("%d ", arr[i]);
	}
	puts("");

	for (int i = 0; i < n; i+=2) {
		printf("%d ", arr[i]);
	}
	puts("");
}





int main() {
	int a = 10;
	int b = 20;

	int *ptr;

	ptr = &a;
	*ptr = 30;

	ptr = &b;
	*ptr = 10;

	printf("%d\n", a); //30
	printf("%d\n", b); //10
	printf("%d\n", *ptr); //10 
}



int main() {
	int arr[10] = { 3,1,4,1,5,9,2,6,5,3 };

	printf("%d\n", arr); //�迭�� �����ּ� a
	for (int i = 3; i < 7; i++) {
		printf("%d %d\n", arr + i, *(arr + i)); // a + sizeof(int), arr[i]�� ��
	}
}

*/
/*

10 * 10 ������ ������ ������ �迭�� �Է¹޾�
�� �迭�� �� ���� ����� ���� ����ϴ� ���α׷��� ��������.

�Է� ��

3 4 
4 2 6 3
7 9 3 4
5 1 2 1

��� ��
15
23
9

*/

int main() {
	int arr[10][10];
	int r, c;

	scanf("%d %d", &r, &c);

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0, sum = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			sum += arr[i][j];
		}
		printf("%d\n", sum);
		sum = 0;
	}
}

