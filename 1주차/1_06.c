#include <stdio.h>

int main() {
	float a = 1.234567f;
	double b = 1.234567;
	int c = 123;

	printf("a : %.2f\n", a);
	printf("b : %6.3f\n", b);
	printf("c : %5d\n", c);

	return 0;
}
