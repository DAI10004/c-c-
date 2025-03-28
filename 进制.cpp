#include <stdio.h>
void printByteAsBinary(unsigned char byte) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (byte >> i) & 1);
    }
    printf("\n");
}

int main() {
    int a = -7;
    printf("变量 a 的总地址: %p\n", (void *)&a);
    unsigned char *bytePtr = (unsigned char *)&a;   
    for (int i = 0; i < sizeof(int); i++) {

        printf("第 %d 个字节的地址: %p\n", i + 1, (void *)&bytePtr[i]);

        printf("第 %d 个字节的二进制值: ", i + 1);
        printByteAsBinary(bytePtr[i]);
    }

    return 0;
}
