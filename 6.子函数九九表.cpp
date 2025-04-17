#include <stdio.h>

void printRow(int row) {
	for (int i = 1; i <= row; i++) {
		printf("%d*%d=%d\t", i, row, i * row);
	}
	printf("\n");
}

int main() {
	for (int i = 1; i <= 9; i++) {
		printRow(i);
	}
	return 0;
}