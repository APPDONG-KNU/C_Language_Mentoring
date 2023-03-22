#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	double celsius; // ¼·¾¾ ¿Âµµ

	printf("¼·¾¾ ¿Âµµ¸¦ È­¾¾ ¿Âµµ·Î º¯È¯\n");
	printf("¼·¾¾ ¿Âµµ¸¦ ÀÔ·Â >> ");

	scanf("%lf", &celsius);

	printf("¼·¾¾ %fµµ´Â È­¾¾·Î %fµµÀÌ´Ù.\n", celsius, 9 * celsius / 5 + 32);

	return 0;
}
