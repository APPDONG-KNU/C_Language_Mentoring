#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// �迭�� ������� �ʰ� Ǯ��

int main() {
	int N; // (1 <= N <= 1,000,000)
	int n, i, max = -1000000, min = 1000000;

	scanf("%d", &N);	// ���� N �Է�

	for (i = 0; i < N; i++) {
		scanf(" %d", &n);	// ���� n �Է� (-1,000,000 <= n <= 1,000,000)

		if (max < n) max = n;
		if (n < min) min = n;
	}

	printf("%d %d", min, max);

	return 0;
}
