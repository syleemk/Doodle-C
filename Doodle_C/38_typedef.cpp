// type def �� ����
// type define

#include <stdio.h>

int main() {
	unsigned short int age; // �ڷ��� �ʹ� �� ��Ÿ�� Ȯ�� ����
							// �ڷ����� �̸� �츮�� ���� �� ����
	typedef unsigned short int sInt; // typedefŰ���� �̿�

	printf("%d\n", sizeof(sInt));


	///////////////////////////////////////////////
	typedef int Pair[2];
	Pair point = { 3,4 }; //int point[2] = { 3,4 };

	printf("(%d, %d)\n", point[0], point[1]);

	///////////////////////////////////////////////
	typedef const char * String;

	String name = "Doodle"; //const char * name = "Doodle";

	printf("�̸�  : %s\n", name);

}