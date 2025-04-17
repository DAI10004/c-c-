#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
	if (n <= 1) return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}

int main() {
	int fib[100]; // 假设前40项足够找到10个素数
	fib[0] = 1;
	fib[1] = 1;
	int count = 0;
	int i = 2;
	while (count < 10) {
		fib[i] = fib[i - 1] + fib[i - 2];
		if (isPrime(fib[i])) {
			printf("%d ", fib[i]);
			count++;
		}
		i++;
		// 防止无限循环，可以设置一个上限
		if (i >= 100) break;
	}
	return 0;
}