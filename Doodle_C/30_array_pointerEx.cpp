#include <stdio.h>

/*
int main() {
	int arr[3][3] = { 0 };

	printf("%d\n", &arr);//arr狼 林家狼 林家 
	printf("%d\n", arr); //arr[0]林家
	printf("%d\n", *arr);//arr[0][0]  溜 0

	printf("%d\n", &arr[0]); //arr客 鞍篮 蔼
	printf("%d\n", arr[0]); //arr客 鞍篮 蔼
	printf("%d\n", *arr[0]); // 0

	printf("%d\n", &arr[0][0]); //arr狼 林家
	
	printf("%d\n", arr[0][0]); //0
}


int main() {
	int arr[3][3] = { 0 }; 

	printf("%d\n", &arr[0][0]); // 100

	printf("%d\n", arr[0] + 1);// 100 + 4
	printf("%d\n", &arr[0] + 1);// 100 + 12
	printf("%d\n", arr + 1);// 100 + 12
	printf("%d\n", &arr + 1);//100 + 36
	
}

/*
 
 //1 2 3 4
 //5 6 7 8
 //9 10 11 12
 */

int main() {
	int arr[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	int(*ptr)[4] = arr;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", ptr[i][j]);
		}
		printf("\n");
	}
}

