#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 배열을 사용하지 않고 풀기

int main() {
	int N; // (1 <= N <= 1,000,000)
	int n, i, max = -1000000, min = 1000000;

	scanf("%d", &N);	// 정수 N 입력

	for (i = 0; i < N; i++) {
		scanf(" %d", &n);	// 정수 n 입력 (-1,000,000 <= n <= 1,000,000)

		if (max < n) max = n;
		if (n < min) min = n;
	}

	printf("%d %d", min, max);

	return 0;
}
