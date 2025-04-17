#include <stdio.h>

int gcd_subtract(int a, int b) {
	while (a != b) {
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}

int main() {
	int a, b;
	printf("请输入两个正整数：");
	scanf("%d %d", &a, &b);
	printf("最大公约数：%d\n", gcd_subtract(a, b));
	return 0;
}