#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    scanf("%s", a);
    int len = strlen(a);
    char n[len + 1];
    // ����ָ�� p ָ���ַ��� a ��ĩβ
    char *p = a + len - 1;
    // ����ָ�� q ָ������ n ����ʼλ��
    char *q = n;
    // ����ָ�뽫�ַ��� a �����Ƶ����� n ��
    while (p >= a) {
        *q = *p;
        p--;
        q++;
    }
    *q = '\0';
    printf("%s\n", n);
    return 0;
}    
