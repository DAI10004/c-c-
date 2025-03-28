#include<stdio.h>
int main(){
	printf("100-9999中的回文数有：");
	for(int i=100;i<10000;i++){
		int reversed=0,temp=i;
		while(temp>0){
			reversed=reversed*10+temp%10;temp/=10;
			
		}
		if(reversed==i){
			printf("%d ",i);
		}
	}
	return 0;
}
