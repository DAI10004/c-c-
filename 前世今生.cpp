#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 11
int main(){
	const char *name[N]={"苏轼","李白","司马迁","杜甫","曹植","诸葛亮","秦始皇","孔子","李清照","王羲之"};
	srand(time(NULL));
	int choice;
	do{
		printf("前世今生：\n");
		printf("你的前世今生是：\n");
		int random=rand()%N;
		printf("按键开始：%s\n",*(name+random));
		printf("如果继续输入1，结束输入2");
		scanf("%d",&choice);
	}while (choice==1);	
	return 0;
	
}
