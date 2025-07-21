/*

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int num = 1;

	int* p[3] = { NULL };
	for(int i = 0; i < 3; i++) {
		p[i] = (int*)malloc(4 * sizeof(int));
		if (p[i] == NULL) {

			printf("동적할당 실패");
			return 1;
		}
	}

	for (int j = 0; j < 3; j++) {

		for (int k = 0; k < 4; k++) {

			p[j][k] = num++;
			
			printf("%4d", p[j][k]);

		}
		puts("\n");
		
	}
	for (int i = 0; i < 3; i++) {


		free(p[i]);
	}

}*/