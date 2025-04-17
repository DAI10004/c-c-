#include <stdio.h>

int gcd_divide(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int main() {
	int a, b;
	printf("请输入两个正整数：");
	scanf("%d %d", &a, &b);
	printf("最大公约数：%d\n", gcd_divide(a, b));
	return 0;
}