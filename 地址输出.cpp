#include<stdio.h>
int main(){
	int num=100;
	unsigned int addr = (unsigned int)& num;
	printf("����num��32λ��ַ��%08X\n",addr);
	for (int i=0;i<4;++i){
		unsigned char byte = (addr>>(i*8))&0xFF;
		printf("��%d���ֽڵ�ֵ��%X\n",i+1,byte);
	}
	
	
	return 0;
	
}
