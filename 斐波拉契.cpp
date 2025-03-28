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
    printf("请输入一个整数：");
    scanf("%d", &n);
    int re = feibo(n);  
    printf("斐波那契数列第 %d 项的值为：%d\n", n, re);
    return 0;
}    
