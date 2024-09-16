#include <stdio.h>

int main (void) {
	int i, j;
	int mat[3][3];
	
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("Digite um valor de %i, %i: ", i + 1, j + 1);
			scanf("%i", &mat[i][j]);
		}
	}
	printf("\nNumeros pares: \n");
	for(i = 0; i < 3; ++i) {
		for(j = 0; j < 3; j++) {
			if (mat[i][j] % 2 == 0){
			printf("(%i, %i) %i\n", i + 1, j + 1, mat[i][j]);
		    }
	    }
	}	
	return 0;
}