#include <stdio.h>

int main() {
    int rows = 15;
    int prev[rows], curr[rows]; // ������һά��������ά����

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i)
                curr[j] = 1; // ÿ�еĵ�һ�������һ��Ԫ��Ϊ 1
            else
                curr[j] = prev[j - 1] + prev[j]; // ���㵱ǰԪ��

            printf("%d ", curr[j]); // ��ӡ��ǰԪ��
        }
        printf("\n");

        // ����ǰ�и��Ƶ���һ��
        for (int j = 0; j <= i; j++) {
            prev[j] = curr[j];
        }
    }
    return 0;
}
