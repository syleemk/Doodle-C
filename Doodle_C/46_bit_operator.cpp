/*
	��Ʈ����

	1. ��Ʈ �� ����
	2. ����Ʈ (shift) ����

	������ ( && || !)
	=>��Ʈ���� &  |  ~  ^(XOR���� : �ΰ��� �ٸ��� ��, �ΰ��� ������ ����)

	shift���� : ��Ʈ�� �ű�� ��

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