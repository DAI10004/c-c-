#include <stdio.h>

int main() {
	for (int num = 100; num <= 999; num++) {
		int a = num / 100;
		int b = (num / 10) % 10;
		int c = num % 10;
		if (aaa + bbb + ccc == num) {
			printf("%d ", num);
		}
	}
	return 0;
}
//输出应该是153、370、371、407。