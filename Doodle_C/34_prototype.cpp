//prototype : 원형 시제품
// 함수의 원형을 먼저 적어놓고 정의는 나중으로 미루는 것
// 함수가 어떻게 생겼는지만 간단하게 적어주는 게 prototype

#include <stdio.h>

//걷기
void walk(int); // 선언부에서는 매개변수 명 생략가능 (매개변수 타입만 적어주면 됨)

//돌기
void rotate(int);

void drawSquare();

int main() {
	drawSquare();
}

void walk(int distance) {
	printf("%dcm를 걸었습니다.\n", distance);
}

//돌기
void rotate(int angle) {
	printf("%d도 회전했습니다.\n", angle);
}

void drawSquare() {
	for (int i = 1; i < 4; i++) {
		walk(10);
		rotate(90);
	}
}