#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	double celsius; // ���� �µ�

	printf("���� �µ��� ȭ�� �µ��� ��ȯ\n");
	printf("���� �µ��� �Է� >> ");

	scanf("%lf", &celsius);

	printf("���� %f���� ȭ���� %f���̴�.\n", celsius, 9 * celsius / 5 + 32);

	return 0;
}
