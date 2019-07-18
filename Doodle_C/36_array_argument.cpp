#include <stdio.h>


/*
//1���� �迭�� ���� ���� ���

//call by value     X
//call by reference O
void printArr(int arr[4]) {//�� ǥ���� int *arr�� ����
	for (int i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}
}

int main() {
	int arr[4] = { 1,2,3,4 };

	printArr(arr);
}

*/

//2���� �迭 ���� ���� ���
//2���� �迭�� �Ű������� �ѱ涧�� �迭������ ���·� �Ѱܵ��ȴ�.
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