#include <stdio.h>

#define SQUARE(X) ((X) * (X))
#define MAX(A,B) (((A)>(B)) ? (A) : (B))
#define FOR(I,S,E) for(int I = S; I <= E ; I++)
#define LOOP while(true)

int main() {
	int a;
	int b = 10;
	scanf("%d", &a);
	printf("%d\n", SQUARE(a-1));
	printf("%d\n", MAX(a, b));

	FOR(i,1,10) { // ������ ������, Ư���� ��õ�� ���� ���� ������
		printf("%d ", i);
	}

	LOOP{
		printf("*");
	}
}