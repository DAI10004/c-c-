#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 11
int main(){
	const char *name[N]={"����","���","˾��Ǩ","�Ÿ�","��ֲ","�����","��ʼ��","����","������","����֮"};
	srand(time(NULL));
	int choice;
	do{
		printf("ǰ��������\n");
		printf("���ǰ�������ǣ�\n");
		int random=rand()%N;
		printf("������ʼ��%s\n",*(name+random));
		printf("�����������1����������2");
		scanf("%d",&choice);
	}while (choice==1);	
	return 0;
	
}
