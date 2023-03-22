#include <stdio.h>

int main() {
	int a = 0xAF;	// 175 (10101111)
	int b = 0xB5;	// 181 (10110101)

	printf("a & b = %x\n", a & b);
	printf("a | b = %x\n", a | b);
	printf("a ^ b = %x\n", a ^ b);
	printf("~a = %x\n", ~a);
	printf("a << 2 = %x\n", a << 2);
	printf("b >> 3 = %x\n", b >> 3);

	return 0;
}
