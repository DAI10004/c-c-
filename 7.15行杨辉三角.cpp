#include <stdio.h>

int main() {
    int rows = 15;
    int prev[rows], curr[rows]; // 用两个一维数组代替二维数组

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i)
                curr[j] = 1; // 每行的第一个和最后一个元素为 1
            else
                curr[j] = prev[j - 1] + prev[j]; // 计算当前元素

            printf("%d ", curr[j]); // 打印当前元素
        }
        printf("\n");

        // 将当前行复制到上一行
        for (int j = 0; j <= i; j++) {
            prev[j] = curr[j];
        }
    }
    return 0;
}
