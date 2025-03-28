#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    scanf("%s", a);
    int len = strlen(a);
    char n[len + 1];
    // 定义指针 p 指向字符串 a 的末尾
    char *p = a + len - 1;
    // 定义指针 q 指向数组 n 的起始位置
    char *q = n;
    // 利用指针将字符串 a 逆序复制到数组 n 中
    while (p >= a) {
        *q = *p;
        p--;
        q++;
    }
    *q = '\0';
    printf("%s\n", n);
    return 0;
}    
