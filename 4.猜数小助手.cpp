#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main() {
	srand(time(0));
	int target = rand() % 100 + 1; // ����1��100�������
	int guess, attempts = 0;
	printf("������Ϸ��ʼ��������1��100֮�������\n");
	do {
		scanf("%d", &guess);
		attempts++;
		if (guess < target) {
			printf("̫С�ˣ�����һ�Σ�\n");
		}
		else if (guess > target) {
			printf("̫���ˣ�����һ�Σ�\n");
		}
		else {
			printf("��ϲ����¶��ˣ�����%d�Ρ�\n", attempts);
		}
	} while (guess != target);
	return 0;
}