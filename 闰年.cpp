#include<stdio.h>
int main(){
	int start=2023;
	int end=2223;
	int sum=0;
	for(int i=start;i<=end;i++){
		if((i%4==0&&i%100!=0)||(i%400==0)){
			printf("%d\t",i);
			sum++;
		}
	}
	printf("\n闰年的个数为：%d",sum);
	
	
	return 0;
}
