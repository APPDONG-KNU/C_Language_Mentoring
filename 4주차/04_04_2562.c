#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n, i, max = -1, max_idx = 0;

	for (i = 1; i <= 9; i++) {
		scanf(" %d", &n);	// ���� 9�� �Է�

		if (max < n) {
			max = n;	// max �� ����
			max_idx = i;	// max ���� ��ġ(index) ����
		}
	}

	printf("%d\n%d", max, max_idx);

	return 0;
}
