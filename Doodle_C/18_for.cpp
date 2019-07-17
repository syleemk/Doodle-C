#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int i = 0, t = 1;
	while (i < n) {
		t *= 2;
		i++;
	}
	printf("2^%d = %d\n", n, t);
}