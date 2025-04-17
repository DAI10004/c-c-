#include <stdio.h>
#include <math.h>

int main() {
	int n;
	printf("请输入一个整数：");
	scanf("%d", &n);
	if (n <= 1) {
		printf("不是素数。\n");
		return 0;
	}
	int isPrime = 1;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			isPrime = 0;
			break;
		}
	}
	if (isPrime)
		printf("%d是素数。\n", n);
	else
		printf("%d不是素数。\n", n);
	return 0;
}

