#include <stdio.h>

void selectionSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int max_idx = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] > arr[max_idx]) {
				max_idx = j;
			}
		}
		// ����
		int temp = arr[i];
		arr[i] = arr[max_idx];
		arr[max_idx] = temp;
	}
}

int main() {
	int arr[8];
	printf("������8��������");
	for (int i = 0; i < 8; i++) {
		scanf("%d", &arr[i]);
	}
	selectionSort(arr, 8);
	printf("�������н����");
	for (int i = 0; i < 8; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}