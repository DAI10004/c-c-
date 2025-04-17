#include <stdio.h>

int isLeap(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	else
		return 0;
}

int main() {
	int count = 0;
	for (int year = 2000; year <= 3000; year++) {
		if (isLeap(year)) {
			printf("%d ", year);
			count++;
			if (count % 15 == 0) {
				printf("\n");
			}
		}
	}
	printf("\n总共有%d个闰年。\n", count);
	return 0;
}