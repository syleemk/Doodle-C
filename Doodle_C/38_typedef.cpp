// type def 형 정의
// type define

#include <stdio.h>

int main() {
	unsigned short int age; // 자료형 너무 길어서 오타날 확률 높음
							// 자료형의 이름 우리가 정할 수 있음
	typedef unsigned short int sInt; // typedef키워드 이용

	printf("%d\n", sizeof(sInt));


	///////////////////////////////////////////////
	typedef int Pair[2];
	Pair point = { 3,4 }; //int point[2] = { 3,4 };

	printf("(%d, %d)\n", point[0], point[1]);

	///////////////////////////////////////////////
	typedef const char * String;

	String name = "Doodle"; //const char * name = "Doodle";

	printf("이름  : %s\n", name);

}