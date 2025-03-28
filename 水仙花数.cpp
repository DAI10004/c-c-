#include<stdio.h>
void fun(int num){
	int x1,x2,x3;
	x1=num%10;x2=num/10%10;x3=num/100;
	if(num==x1*x1*x1+x2*x2*x2+x3*x3*x3){
		printf("%d ",num);
		
	}
}
int main(){

	printf("100-999的水仙花数：");
	for(int i=100;i<1000;++i){
		fun(i);
	}
	
	return 0;
}
