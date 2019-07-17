#include <stdio.h>

int main() {
/*
	// float : 32비트(4바이트), 실수를 담는 데 쓰임
	float a = 5;
	float b = 3;

	float hap = a + b;
	float cha = a - b;
	float gop = a * b;
	float mok = a / b;

	printf("%f + %f = %f\n", a, b, hap);
	printf("%f - %f = %f\n", a, b, cha);
	printf("%f * %f = %f\n", a, b, gop);
	printf("%f / %f = %f\n", a, b, mok);
 */

 // double : 64비트(8바이트), 실수를 담는 데 쓰임
	double a = 5;
	double b = 3;

	double hap = a + b;
	double cha = a - b;
	double gop = a * b;
	double mok = a / b;

	printf("%f + %f = %f\n", a, b, hap);
	printf("%f - %f = %f\n", a, b, cha);
	printf("%f * %f = %f\n", a, b, gop);
	printf("%f / %f = %f\n", a, b, mok);

	//float은 부동 소수점(floating point) 
 }

/*
정수형
	char (1바이트) - 문자를 담는 데에도 쓰임 (문자도 숫자값을 갖고있음)
	short (2바이트) 
	long (4바이트)
	long long (8바이트)
	int (시스템에 따라서 자동으로 결정 [원래 목적], 요즘에는 대체로 long으로 결정)
	따라서, int라 말하면 4바이트 요새는

실수형
	float (4바이트)
	double (8바이트)

unsigned, signed
	


*/