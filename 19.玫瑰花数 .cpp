#include <stdio.h>
#include <math.h>

int isRose(int num) {
	if (num < 1000 || num > 9999)
		return 0;
	int sum = 0;
	int temp = num;
	while (temp > 0) {
		int digit = temp % 10;
		sum += pow(digit, 4);
		temp /= 10;
	}
	return sum == num;
}

int main() {
	printf("õ�廨���У�");
	for (int num = 1000; num <= 9999; num++) {
		if (isRose(num)) {
			printf("%d ", num);
		}
	}
	return 0;
}
//õ�廨������1634��8208��9474�ȡ�