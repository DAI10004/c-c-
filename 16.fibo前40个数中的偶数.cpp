#include <stdio.h>

int main() {
	long long fib[40];
	fib[0] = 1;
	fib[1] = 1;
	int count = 0;
	for (int i = 2; i < 40; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	printf("ǰ40���е�ż��Ϊ��");
	for (int i = 0; i < 40; i++) {
		if (fib[i] % 2 == 0) {
			printf("%lld ", fib[i]);
			count++;
		}
	}
	printf("\n����%d��ż����\n", count);
	return 0;
}