#include <iostream>
using namespace std;

// 定义链表节点类
class Node {
public:
    int data;
    Node* next;
    Node(int value) : data(value), next(NULL) {}
};

// 在链表头部插入节点
Node* insertAtHead(Node* head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    return newNode;
}

// 遍历链表
void traverseList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// 释放链表内存
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
