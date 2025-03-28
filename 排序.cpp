#include <stdio.h>
#include <stdbool.h>/*bool使用*/ 

// 冒泡排序函数
void BSort(int t[], int len) {   //需要手动输入数组长度 
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

// 选择排序函数
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

// 插入排序函数
void ISort(int arr[], int len) {
    int i, j, key;
    for (i = 1; i < len; i++) {
        key = arr[i];
        j = i - 1;
        // 将比 key 大的元素向后移动
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    printf("输入数组长度：");
    scanf("%d", &n);
    int a[n]; 
    printf("输入数组元素：");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    while(1) {    
        int x;
        printf("输入1使用冒泡排序，输入2使用选择排序，输入3使用插入排序："); 
        scanf("%d", &x);
        if (x == 1) {
            // 调用冒泡排序函数
            BSort(a, n);
            // 输出排序后的数组
            for (int i = 0; i < n; ++i) {
                printf("%d ", a[i]);
            }
            printf("\n");
        
            // 重新输入数组元素
            printf("重新输入数组元素：");
            for (int i = 0; i < n; ++i) {
                scanf("%d", &a[i]);
            }
        } else if (x == 2) {
            // 调用选择排序函数
            QSort(a, n);
            // 输出排序后的数组
            for (int i = 0; i < n; ++i) {
                printf("%d ", a[i]);
            }
            printf("\n");
            // 重新输入数组元素
            printf("重新输入数组元素：");
            for (int i = 0; i < n; ++i) {
                scanf("%d", &a[i]);
            }
        } else if (x == 3) {
            // 调用插入排序函数
            ISort(a, n);
            // 输出排序后的数组
            for (int i = 0; i < n; ++i) {
                printf("%d ", a[i]);
            }
            printf("\n");
            // 重新输入数组元素
            printf("重新输入数组元素：");
            for (int i = 0; i < n; ++i) {
                scanf("%d", &a[i]);
            }
        } else {
            printf("输入无效，请输入 1、2 或 3。\n");
        }
    }
    return 0;
}
