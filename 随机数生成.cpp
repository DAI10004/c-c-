#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ���ɲ��ظ���������Ӻ���
void generateRandomNumbers(int n1, int n2, int n3) {
    if (n3 > (n2 - n1 + 1)) {
        printf("�޷�������ô�಻�ظ����������\n");
        return;
    }
    int *nums = (int *)malloc(n3 * sizeof(int));
    if (!nums) {
        printf("�ڴ����ʧ�ܡ�\n");
        return;
    }
    srand(time(NULL));
    for (int i = 0; i < n3; i++) {
        int r;
        int j;
        do {
            r = rand() % (n2 - n1 + 1) + n1;
            int j;
            for (j = 0; j < i; j++) {
                if (nums[j] == r) break;
            }
        } while (j < i);
        nums[i] = r;
    }
    printf("���ɵ������Ϊ��");
    for (int i = 0; i < n3; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    free(nums);
}

int main() {
    int n1, n2, n3;
    printf("������������ n1, n2, n3��");
    if (scanf("%d %d %d", &n1, &n2, &n3) != 3) {
        printf("��������\n");
        return 1;
    }
    generateRandomNumbers(n1, n2, n3);
    return 0;
}    
