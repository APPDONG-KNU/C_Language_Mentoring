#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int H, M;
	int answer;

	scanf("%d %d", &H, &M);

	answer = H * 60 + M - 45;

	if (answer < 0) {
		printf("23 %d", answer + 60);
	}
	else {
		printf("%d %d", answer / 60, answer % 60);
	}

	return 0;
}
