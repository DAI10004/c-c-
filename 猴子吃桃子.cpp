#include <stdio.h>
int taozi(int day) {
    if (day == 1) {
        return 1;
    }
    return (taozi(day - 1) + 1) * 2;
}

int main() {
    int n;
    printf("请输入天数：");
    scanf("%d", &n);
    printf("第一天的桃子数：%d\n", taozi(n));
    return 0;
}
