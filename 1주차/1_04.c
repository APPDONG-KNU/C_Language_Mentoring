#include <stdio.h>

int main() {
	int a;
	a = 155;

	printf("a의 값은 %d진수로 %d이다.\n", 10, a);
	printf("a의 값은 %d진수로 %o이다.\n", 8, a);
	printf("a의 값은 %d진수로 %x이다.\n", 16, a);

	return 0;
}
