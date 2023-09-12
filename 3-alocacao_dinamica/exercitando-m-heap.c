#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int *v = (int*)malloc(3 * sizeof(int));
    
    v[0] = 10;
    v[1] = 23;
	v[2] = 34;
	
	v = (int*)realloc(v, 5 * sizeof(int));
	
	
	int c;
	
	for(c = 0; c < 5; c++) {
		scanf("%i", &v[c]);
	}
	
	printf("\n");
	
    for(c = 0; c < 5; c++) {
        printf("%i\n", v[c]);
    }

    return 0;
}