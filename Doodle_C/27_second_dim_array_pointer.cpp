#include <stdio.h>
/*
int main() {
	int arr[2][3] = { {1,2,3},{4,5,6} };

	int(*ptr)[3] = arr; // 이차원 배열을 포인터로 치환하고 싶다면, 이차원 배열의 한 행을 가리키는 배열포인터를 만들어서, 거기에 배열을 집어넣으면 된다

	// 1. ptr[i] == arr[i]
	// 2. ptr[i][j] == arr[i][j]
	// ptr == arr 

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d", ptr[i][j]);
		}
		printf("\n");
	}
}
*/

int main() {
	int arr[2][3] = { {1,2,3},{4,5,6} };

	for (int(*row)[3] = arr; row < arr + 2; row++) {
		for (int *col = *row; col < *row + 3; col++) {
			printf("%d", *col);
		}
		printf("\n");
	}
}