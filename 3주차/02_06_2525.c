#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int A, B, C;
	int answer;

	scanf(" %d %d", &A, &B);
	scanf(" %d", &C);

	answer = A * 60 + B + C;

	if (answer / 60 > 23) {
		printf("%d %d", answer / 60 - 24, answer % 60);
	}
	else {
		printf("%d %d", answer / 60, answer % 60);
	}

	return 0;
}
