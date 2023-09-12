#include <stdio.h>
#include <stdlib.h>

void troca(int *x, int *y) {
	int xt = *x;
	*x = *y;
	*y = xt;
}

int main() {
	
	int a = 10;
	int b = 20;
	
	troca(&a, &b);
	
	printf("a = %i, b = %i", a, b);
	return 0;
}