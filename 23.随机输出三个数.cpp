#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateRandom(int min, int max, int count, int result[]) {
	int size = max - min + 1;
	int* available = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++) {
		available[i] = min + i;
	}
	srand(time(0));
	for (int i = 0; i < count; i++) {
		int index = rand() % (size - i);
		result[i] = available[index];
		// ��ѡ�е����Ƶ�ĩβ�������ظ�ѡ��
		available[index] = available[size - 1 - i];
	}
	free(available);
}

int main() {
	int n1, n2, n3;
	printf("������������������1 30 5����");
	scanf("%d %d %d", &n1, &n2, &n3);
	int result[n3];
	generateRandom(n1, n2, n3, result);
	printf("���ɵ������Ϊ��");
	for (int i = 0; i < n3; i++) {
		printf("%d ", result[i]);
	}
	return 0;
}