#include <stdio.h>

int main() {
	int arr[3] = { 1,2,3 };
	int *ptr = arr;

	for (int i = 0; i < 3; i++) {
		printf("%d ", *(ptr + i));
	}
	printf("\n");

	for (int i = 0; i < 3; i++) {
		printf("%d ", ptr[i]);
	}
	printf("\n");

	for (int i = 0; i < 3; i++) {
		printf("%d ", i[ptr]);

// arr[i] == *(arr+i) == *(ptr+i) == *(i+ptr) == i[ptr]
// 위에 거 정상적으로 실행됨
// a[b] -> *(a+b)로 바꾼후 실행함 C언어가
	}
	printf("\n");
}