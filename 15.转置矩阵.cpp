#include <stdio.h>

int main() {
	int matrix[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
	printf("ԭ����\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
	printf("ת�þ���\n");
	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 3; i++) {
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}