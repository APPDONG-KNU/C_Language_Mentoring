#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int n[1000000];	// ���� ������ ����

int main() {
	int N; // (1 <= N <= 1,000,000)
	int i, max = -1000000, min = 1000000;

	scanf("%d", &N);	// ���� N �Է�

	for (i = 0; i < N; i++) {
		scanf(" %d", &n[i]);	// ���� n[i] �Է� (-1,000,000 <= n <= 1,000,000)

		if (max < n[i]) max = n[i];
		if (n[i] < min) min = n[i];
	}

	printf("%d %d", min, max);

	return 0;
}
