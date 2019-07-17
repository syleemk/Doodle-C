#include <stdio.h>

/* 1.
100개 이하의 정수를 입력받아
첫 줄에 짝수 번째 숫자들을 순서대로 출력하고,
다음 줄에 홀수 번째 숫자들을 순서대로 출력하는 프로그램을 만들어 보세요.

입력 예
7 
3 1 4 1 5 9 2

출력 예
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

	printf("%d\n", arr); //배열의 시작주소 a
	for (int i = 3; i < 7; i++) {
		printf("%d %d\n", arr + i, *(arr + i)); // a + sizeof(int), arr[i]의 값
	}
}

*/
/*

10 * 10 이하의 정수형 이차원 배열을 입력받아
그 배열의 각 행의 요소의 합을 출력하는 프로그램을 만들어보세요.

입력 예

3 4 
4 2 6 3
7 9 3 4
5 1 2 1

출력 예
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

