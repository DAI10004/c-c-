#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

int main() {
	struct Node* head = NULL, * current = NULL, * prev = NULL;
	int n, value;
	printf("输入链表节点数：");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		current = (struct Node*)malloc(sizeof(struct Node));
		printf("输入节点%d的值：", i + 1);
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

	printf("链表内容：\n");
	current = head;
	while (current != NULL) {
		printf("%d ", current->data);
		current = current->next;
	}

	// 释放内存
	current = head;
	while (current != NULL) {
		prev = current;
		current = current->next;
		free(prev);
	}

	return 0;
}