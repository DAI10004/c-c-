#include <stdio.h>
int taozi(int day) {
    if (day == 1) {
        return 1;
    }
    return (taozi(day - 1) + 1) * 2;
}

int main() {
    int n;
    printf("������������");
    scanf("%d", &n);
    printf("��һ�����������%d\n", taozi(n));
    return 0;
}
