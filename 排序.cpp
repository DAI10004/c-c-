#include <stdio.h>
#include <stdbool.h>/*boolʹ��*/ 

// ð��������
void BSort(int t[], int len) {   //��Ҫ�ֶ��������鳤�� 
    int i, j;
    bool flag;
    for (i = 0; i < len - 1; ++i) {
        flag = false;
        for (j = 0; j < len - i - 1; ++j) {
            if (t[j] < t[j + 1]) {
                int tmp = t[j];
                t[j] = t[j + 1];
                t[j + 1] = tmp;
                flag = true;
            }
        }
        if (!flag) {
            break;
        }
    }
}

// ѡ��������
void QSort(int b[], int len) {
    int i, j, tmp;
    for (i = 0; i < len - 1; ++i) {
        for (j = i + 1; j < len; ++j) {
            if (b[i] < b[j]) {
                tmp = b[i];
                b[i] = b[j];
                b[j] = tmp;
            }
        }
    }
}

// ����������
void ISort(int arr[], int len) {
    int i, j, key;
    for (i = 1; i < len; i++) {
        key = arr[i];
        j = i - 1;
        // ���� key ���Ԫ������ƶ�
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    printf("�������鳤�ȣ�");
    scanf("%d", &n);
    int a[n]; 
    printf("��������Ԫ�أ�");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    while(1) {    
        int x;
        printf("����1ʹ��ð����������2ʹ��ѡ����������3ʹ�ò�������"); 
        scanf("%d", &x);
        if (x == 1) {
            // ����ð��������
            BSort(a, n);
            // �������������
            for (int i = 0; i < n; ++i) {
                printf("%d ", a[i]);
            }
            printf("\n");
        
            // ������������Ԫ��
            printf("������������Ԫ�أ�");
            for (int i = 0; i < n; ++i) {
                scanf("%d", &a[i]);
            }
        } else if (x == 2) {
            // ����ѡ��������
            QSort(a, n);
            // �������������
            for (int i = 0; i < n; ++i) {
                printf("%d ", a[i]);
            }
            printf("\n");
            // ������������Ԫ��
            printf("������������Ԫ�أ�");
            for (int i = 0; i < n; ++i) {
                scanf("%d", &a[i]);
            }
        } else if (x == 3) {
            // ���ò���������
            ISort(a, n);
            // �������������
            for (int i = 0; i < n; ++i) {
                printf("%d ", a[i]);
            }
            printf("\n");
            // ������������Ԫ��
            printf("������������Ԫ�أ�");
            for (int i = 0; i < n; ++i) {
                scanf("%d", &a[i]);
            }
        } else {
            printf("������Ч�������� 1��2 �� 3��\n");
        }
    }
    return 0;
}
