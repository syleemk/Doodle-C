#include <stdio.h>


/*
//1차원 배열의 인자 전달 방식

//call by value     X
//call by reference O
void printArr(int arr[4]) {//이 표현은 int *arr와 같음
	for (int i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}
}

int main() {
	int arr[4] = { 1,2,3,4 };

	printArr(arr);
}

*/

//2차원 배열 인자 전달 방식
//2차원 배열을 매개변수로 넘길때는 배열포인터 형태로 넘겨도된다.
void printArr(int arr[2][3]) { // = int (*arr)[3]
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr[i][j]);
		}
		puts(" ");
	}
}

int main() {
	int arr[2][3] = { {1,2,3},{4,5,6} };
	printArr(arr);
}