#include <stdio.h>
int feibo(int num) {
    if (num == 0) {
        return 0;  
    }
    if (num == 1) {
        return 1;  
    }
    return feibo(num - 1) + feibo(num - 2);
}

int main() {
    int n;
    printf("������һ��������");
    scanf("%d", &n);
    int re = feibo(n);  
    printf("쳲��������е� %d ���ֵΪ��%d\n", n, re);
    return 0;
}    
