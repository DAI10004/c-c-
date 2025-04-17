#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c;
	printf("请输入a, b, c：");
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a == 0) {
		printf("不是二次方程。\n");
		return 0;
	}
	double D = bb - 4ac;
	if (D < 0) {
		printf("无实根。\n");
	}
	else {
		double sqrtD = sqrt(D);
		double x1 = (-b + sqrtD) / (2a);
		double x2 = (-b - sqrtD) / (2 * a);
		printf("实根为：x1=%.2lf, x2=%.2lf\n", x1, x2);
	}
	return 0;
}