#include <stdio.h>
#include <math.h>

int main() {
	int n;
	printf("������һ��������");
	scanf("%d", &n);
	if (n <= 1) {
		printf("����������\n");
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
		printf("%d��������\n", n);
	else
		printf("%d����������\n", n);
	return 0;
}

