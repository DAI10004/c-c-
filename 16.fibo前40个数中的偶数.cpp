#include <stdio.h>

int main() {
	long long fib[40];
	fib[0] = 1;
	fib[1] = 1;
	int count = 0;
	for (int i = 2; i < 40; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	printf("前40项中的偶数为：");
	for (int i = 0; i < 40; i++) {
		if (fib[i] % 2 == 0) {
			printf("%lld ", fib[i]);
			count++;
		}
	}
	printf("\n共有%d个偶数。\n", count);
	return 0;
}