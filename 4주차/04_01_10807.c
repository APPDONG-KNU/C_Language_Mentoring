#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int N;	// 정수 N (1 <= N <= 100)
	int n[100];	// n[] : 입력되는 정수를 저장하는 배열
	int v, i, cnt = 0;	// v : 찾으려고 하는 정수, cnt는 v의 개수

	scanf("%d", &N);	// 정수 N 입력

	for (i = 0; i < N; i++) {
		scanf(" %d", &n[i]);	// 정수 N개 입력
	}

	scanf(" %d", &v);	// 정수 v 입력

	for (i = 0; i < N; i++) {
		if (n[i] == v) {
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}
