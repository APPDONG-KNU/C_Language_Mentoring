#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int N, X;	// (1 <= N, X <= 10000);
	int A[10000] = { 0, };	// ���� A[] : N���� ���� ����
	int i;

	scanf(" %d %d", &N, &X);	// ���� N, X �Է�

	for (i = 0; i < N; i++) {
		scanf(" %d", &A[i]);	// A[] �Է�
	}

	for (i = 0; i < N; i++) {
		if (A[i] < X) printf("%d ", A[i]);	// X���� ���� �� ���
	}

	return 0;
}
