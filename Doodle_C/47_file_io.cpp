/*
	w (write) : ���� ���� �� (���� ���� �� ������)
	r (read) : �б�
	a (append) : ���� ( �ڿ� �߰�)
*/

#include <stdio.h>

int main() {
	FILE * in = fopen("47_file_io.cpp", "r");
	char ch;
	while (!feof(in)) {
		fscanf(in, "%c", &ch);
		printf("%c", ch);
	}
	fclose(in);
}