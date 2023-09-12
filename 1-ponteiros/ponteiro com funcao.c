#include <stdio.h>
#include <stdlib.h>

float soma(float *pf, float v) {
	float R = (*pf) + v;
	
	return R;
}

int main() {
	float v, x = 0;
	float *p0 = NULL;
	
	
	printf("Digite o valor de x e v: ");
	scanf("%f %f", &x, &v);
	
	printf("O valor de x: %.f\n", x);
	
	p0 = &x;
	
	float R = soma(&x, v);
	
	printf("O resultado: %.f", R);
	
	return 0;
}
