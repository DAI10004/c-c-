#include <stdio.h>

void bubbleSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {
	int arr[8];
	printf("������8��������");
	for (int i = 0; i < 8; i++) {
		scanf("%d", &arr[i]);
	}
	bubbleSort(arr, 8);
	printf("�������н����");
	for (int i = 0; i < 8; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}