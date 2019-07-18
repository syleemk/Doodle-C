/*
	정수 하나를 매개변수로 받아서
	그 수가 짝수이면 0, 홀수이면 1을 반환하는 함수를 작성해보세요


#include <stdio.h>

int parity(int n) {
	if (n % 2) return 1;
	return 0;
}

int main() {
	printf("%d\n", parity(5));
	printf("%d\n", parity(-3)); //음수도 홀짝수는 있어 ㅋㅋㅋ
	printf("%d\n", parity(6));

}


*/

/*
	문자열을 매개변수로 받아 그 문자열에서 공백을 제거하여 출력하는 함수 작성

*/

#include <stdio.h>

void print_noSpace(const char * string) {
	int i = 0;
	while (string[i] != NULL) {
		if(string[i] != ' ') 
			printf("%c", string[i]);
		i++;
	}
	
}

int main() {
	print_noSpace("Hello World!\n");
	print_noSpace("My name is Doodle\n");
}