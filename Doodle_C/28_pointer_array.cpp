//�迭 ������ : �迭�� ����Ű�� ������
//������ �迭 : �����͵��� �迭

#include <stdio.h>
/*
int main() {
	int arr[4] = { 1,2,3,4 };
	
	//int (*ptr)[4] : �迭 ������
	int *ptr[4]; // ������ �迭

	for (int i = 0; i < 4; i++) {
		ptr[i] = &arr[i];
	}
	for (int i = 0; i < 4; i++) {
		printf("%d ", *ptr[i]);
	}
}
*/

int main() {
	char strings[3][10] = { "Hello","World","Doodle" }; 
	char *p_str[3];

	for (int i = 0; i < 3; i++) {
		p_str[i] = &strings[i][0];
	}

	for (int i = 0; i < 3; i++) {
		//printf("%s\n", strings[i]); //strings[i] == &strings[i][0]
		printf("%s\n", p_str[i]);
	}
}