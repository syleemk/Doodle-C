#include <stdio.h>

/*
	1. ptr == &ptr[0]
	2. *ptr == ptr[0]
	3. ptr + 1 == ptr에 sizeof(*ptr)을 더한 값 (ptr이 가리키는 자료형의 크기만큼 더한 값)
	4. &arr + 1 == &arr에 sizeof(*(&arr))더한 값 
						  sizeof(*&arr) == sizeof(arr)


int main() {
	int arr[3] = { 1,2,3 };

	printf("arr = %d\n", arr); //배열의 시작 원소 주소
	printf("arr+1=%d\n", arr + 1);

	printf("&arr = %d\n", &arr); //배열 전체의 주소
	printf("&arr+1=%d\n", &arr + 1);
}

*/

//배열 포인터 == 배열 자체를 가리키는 포인터

int main() {
	int arr[3] = { 1,2,3 };

	int(*ptr_arr)[3]; // 길이 3인 int형 배열을 가리키는 포인터를 선언
	ptr_arr = &arr;

	for (int i = 0; i < 3; i++) {
		printf("%d\n", (*ptr_arr)[i]); //배열 포인터는 배열이다 생각하고 쓰면 됨
	}
}