//prototype : ���� ����ǰ
// �Լ��� ������ ���� ������� ���Ǵ� �������� �̷�� ��
// �Լ��� ��� ��������� �����ϰ� �����ִ� �� prototype

#include <stdio.h>

//�ȱ�
void walk(int); // ����ο����� �Ű����� �� �������� (�Ű����� Ÿ�Ը� �����ָ� ��)

//����
void rotate(int);

void drawSquare();

int main() {
	drawSquare();
}

void walk(int distance) {
	printf("%dcm�� �ɾ����ϴ�.\n", distance);
}

//����
void rotate(int angle) {
	printf("%d�� ȸ���߽��ϴ�.\n", angle);
}

void drawSquare() {
	for (int i = 1; i < 4; i++) {
		walk(10);
		rotate(90);
	}
}