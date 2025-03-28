#include<stdio.h>
int main(){
	int num=100;
	unsigned int addr = (unsigned int)& num;
	printf("变量num的32位地址：%08X\n",addr);
	for (int i=0;i<4;++i){
		unsigned char byte = (addr>>(i*8))&0xFF;
		printf("第%d个字节的值：%X\n",i+1,byte);
	}
	
	
	return 0;
	
}
