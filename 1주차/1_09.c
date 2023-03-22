#include <stdio.h>

int main() {
	int a;

	a = 1;
	printf("a += 1 결과 : %d\n", a += 1);

	a = 1;
	printf("++a 결과 : %d\n", ++a);
	
	a = 1;
	printf("a++ 결과 : %d\n", a++);

	return 0;
}
