#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n[9], i, max = -1, max_idx = 0;

	for (i = 0; i < 9; i++) {
		scanf(" %d", &n[i]);	// ���� 9�� �Է�

		if (max < n[i]) {
			max = n[i];	// max �� ����
			max_idx = i;	// max ���� ��ġ(index) ����
		}
	}

	printf("%d\n%d", max, max_idx + 1);

	return 0;
}
