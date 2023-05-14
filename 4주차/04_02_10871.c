#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int N, X;	// (1 <= N, X <= 10000);
	int A[10000] = { 0, };	// 수열 A[] : N개의 정수 저장
	int i;

	scanf(" %d %d", &N, &X);	// 정수 N, X 입력

	for (i = 0; i < N; i++) {
		scanf(" %d", &A[i]);	// A[] 입력
	}

	for (i = 0; i < N; i++) {
		if (A[i] < X) printf("%d ", A[i]);	// X보다 작은 수 출력
	}

	return 0;
}
