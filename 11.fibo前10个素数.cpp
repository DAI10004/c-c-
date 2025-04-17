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
	int fib[100]; // ����ǰ40���㹻�ҵ�10������
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
		// ��ֹ����ѭ������������һ������
		if (i >= 100) break;
	}
	return 0;
}