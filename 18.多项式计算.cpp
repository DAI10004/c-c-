#include <stdio.h>

double calculate(int n, int sign, double denominator) {
	if (n == 0) {
		return 0;
	}
	else {
		double term = sign / denominator;
		return term + calculate(n - 1, -sign, denominator + 2);
	}
}

int main() {
	double sum = calculate(7, 1, 1.0); // 7����������������ĸ1
	printf("���Ϊ��%.4f\n", sum);
	return 0;
}