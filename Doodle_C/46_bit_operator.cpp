/*
	비트연산

	1. 비트 논리 연산
	2. 시프트 (shift) 연산

	논리연산 ( && || !)
	=>비트연산 &  |  ~  ^(XOR연산 : 두개가 다르면 참, 두개가 같으면 거짓)

	shift연산 : 비트를 옮기는 것

*/

#include <stdio.h>

int main() {
	char a = 12, b = 10;
	char c = 22;

	printf("%d\n", a&b);
	printf("%d\n", a | b);
	printf("%d\n", a^b);
	printf("%d\n", ~a);

	puts("");

	printf("%d\n", a << 1);
	printf("%d\n", a << 3);
	printf("%d\n", a << 6);
	printf("%d\n", a >> 1);
	printf("%d\n", a >> 3);
	printf("%d\n", a >> 6);
}