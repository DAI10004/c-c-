#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c;
	printf("������a, b, c��");
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a == 0) {
		printf("���Ƕ��η��̡�\n");
		return 0;
	}
	double D = bb - 4ac;
	if (D < 0) {
		printf("��ʵ����\n");
	}
	else {
		double sqrtD = sqrt(D);
		double x1 = (-b + sqrtD) / (2a);
		double x2 = (-b - sqrtD) / (2 * a);
		printf("ʵ��Ϊ��x1=%.2lf, x2=%.2lf\n", x1, x2);
	}
	return 0;
}