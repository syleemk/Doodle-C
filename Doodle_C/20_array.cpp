#include <stdio.h>

/*
int main() {
	int n;
	int arr[1000];

	printf("입력할 숫자의 개수 입력 : ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d ", &arr[i]);
	}
	for (int i = n - 1; i >= 0; i--) {
		printf("%d ", arr[i]);
	}
}


int main() {
	int n;
	int arr[100];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int max = arr[0];
	for (int i = 1; i < n; i++) {
		if (max < arr[i]) max = arr[i];
	}

	printf("%d\n", max);
}

*/

int main() {
	int n;
	int arr[100];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			cnt++;
		}
	}
	printf("%d\n", cnt);
}