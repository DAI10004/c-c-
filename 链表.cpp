#include <iostream>
using namespace std;

// ��������ڵ���
class Node {
public:
    int data;
    Node* next;
    Node(int value) : data(value), next(NULL) {}
};

// ������ͷ������ڵ�
Node* insertAtHead(Node* head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    return newNode;
}

// ��������
void traverseList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// �ͷ������ڴ�
void freeList(Node* head) {
    Node* current = head;
    Node* next;
    while (current != NULL) {
        next = current->next;
        delete current;
        current = next;
    }
}
int main() {
    Node* head = NULL;
    head = insertAtHead(head, 3);
    head = insertAtHead(head, 2);
    head = insertAtHead(head, 1);
    traverseList(head);
    freeList(head);
    return 0;
}
