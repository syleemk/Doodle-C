/*
	w (write) : 파일 새로 씀 (기존 내용 다 지워짐)
	r (read) : 읽기
	a (append) : 수정 ( 뒤에 추가)
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