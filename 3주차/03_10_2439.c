#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n;
	int i, j;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		for (j = n; j > i; j--) {
			printf(" ");
		}

		for (j = 1; j <= i; j++) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}
