#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int x, y, z;
	
	scanf("%d %d %d", &x, &y, &z);

	if (x == y && y == z) {
		printf("%d", 10000 + x * 1000);
	}
	else if (x == y) {
		printf("%d", 1000 + x * 100);
	}
	else if (y == z) {
		printf("%d", 1000 + y * 100);
	}
	else if (z == x) {
		printf("%d", 1000 + z * 100);
	}
	else if (x > y && x > z) {
		printf("%d", x * 100);
	}
	else if (y > x && y > z) {
		printf("%d", y * 100);
	}
	else {
		printf("%d", z * 100);
	}

	return 0;
}
