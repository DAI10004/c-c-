#include <stdio.h>

int isPalindrome(int num) {
	int reversed = 0;
	int original = num;
	while (num > 0) {
		reversed = reversed * 10 + num % 10;
		num /= 10;
	}
	return reversed == original;
}

int main() {
	printf("回文数有：");
	for (int num = 100; num <= 9999; num++) {
		if (isPalindrome(num)) {
			printf("%d ", num);
		}
	}
	return 0;
}