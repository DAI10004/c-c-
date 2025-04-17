#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

int main() {
	struct Node* head = NULL, * current = NULL, * prev = NULL;
	int n, value;
	printf("��������ڵ�����");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		current = (struct Node*)malloc(sizeof(struct Node));
		printf("����ڵ�%d��ֵ��", i + 1);
		scanf("%d", &value);
		current->data = value;
		current->next = NULL;

		if (head == NULL) {
			head = current;
		}
		else {
			prev->next = current;
		}
		prev = current;
	}

	printf("�������ݣ�\n");
	current = head;
	while (current != NULL) {
		printf("%d ", current->data);
		current = current->next;
	}

	// �ͷ��ڴ�
	current = head;
	while (current != NULL) {
		prev = current;
		current = current->next;
		free(prev);
	}

	return 0;
}