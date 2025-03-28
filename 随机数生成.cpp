#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 生成不重复随机数的子函数
void generateRandomNumbers(int n1, int n2, int n3) {
    if (n3 > (n2 - n1 + 1)) {
        printf("无法生成这么多不重复的随机数。\n");
        return;
    }
    int *nums = (int *)malloc(n3 * sizeof(int));
    if (!nums) {
        printf("内存分配失败。\n");
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
    printf("生成的随机数为：");
    for (int i = 0; i < n3; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    free(nums);
}

int main() {
    int n1, n2, n3;
    printf("请输入三个数 n1, n2, n3：");
    if (scanf("%d %d %d", &n1, &n2, &n3) != 3) {
        printf("输入有误。\n");
        return 1;
    }
    generateRandomNumbers(n1, n2, n3);
    return 0;
}    
