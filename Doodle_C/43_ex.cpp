#include <stdio.h>

/*
typedef int Point[2];
typedef Point * PointPtr;

int main() {
	Point p = { 3,4 };
	PointPtr pp = &p;

	printf("%d %d %d\n", **pp, (*pp)[0], (*pp)[1]);//3 3  4
}

*/


struct Point {
	int x, y;

	void pSwap() {
		int tmp = x;
		x = y;
		y = tmp;
	}
};



int main() {
	Point pos = { 3,4 };

	pos.pSwap();

	printf("(%d, %d)\n", pos.x, pos.y);
}