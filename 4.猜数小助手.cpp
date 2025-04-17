#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main() {
	srand(time(0));
	int target = rand() % 100 + 1; // 生成1到100的随机数
	int guess, attempts = 0;
	printf("猜数游戏开始！请输入1到100之间的数：\n");
	do {
		scanf("%d", &guess);
		attempts++;
		if (guess < target) {
			printf("太小了，再试一次！\n");
		}
		else if (guess > target) {
			printf("太大了，再试一次！\n");
		}
		else {
			printf("恭喜！你猜对了，用了%d次。\n", attempts);
		}
	} while (guess != target);
	return 0;
}