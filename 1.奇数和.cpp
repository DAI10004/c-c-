#include <stdio.h>
int main() {
	int ans = 0;
	for (int i=1; i<=100; i++) {
		if (i % 2 == 1) {ans += i;}
	}
	printf("%d\n", ans);
	return 0;
}