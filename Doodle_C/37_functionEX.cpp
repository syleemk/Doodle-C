/*
	���� �ϳ��� �Ű������� �޾Ƽ�
	�� ���� ¦���̸� 0, Ȧ���̸� 1�� ��ȯ�ϴ� �Լ��� �ۼ��غ�����


#include <stdio.h>

int parity(int n) {
	if (n % 2) return 1;
	return 0;
}

int main() {
	printf("%d\n", parity(5));
	printf("%d\n", parity(-3)); //������ Ȧ¦���� �־� ������
	printf("%d\n", parity(6));

}


*/

/*
	���ڿ��� �Ű������� �޾� �� ���ڿ����� ������ �����Ͽ� ����ϴ� �Լ� �ۼ�

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