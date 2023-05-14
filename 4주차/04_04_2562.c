#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n, i, max = -1, max_idx = 0;

	for (i = 1; i <= 9; i++) {
		scanf(" %d", &n);	// 정수 9개 입력

		if (max < n) {
			max = n;	// max 값 갱신
			max_idx = i;	// max 값의 위치(index) 갱신
		}
	}

	printf("%d\n%d", max, max_idx);

	return 0;
}
