#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int N;	// ���� N (1 <= N <= 100)
	int n[100];	// n[] : �ԷµǴ� ������ �����ϴ� �迭
	int v, i, cnt = 0;	// v : ã������ �ϴ� ����, cnt�� v�� ����

	scanf("%d", &N);	// ���� N �Է�

	for (i = 0; i < N; i++) {
		scanf(" %d", &n[i]);	// ���� N�� �Է�
	}

	scanf(" %d", &v);	// ���� v �Է�

	for (i = 0; i < N; i++) {
		if (n[i] == v) {
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}
