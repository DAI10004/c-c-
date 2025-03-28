#include<stdio.h>
#include<math.h>
int main(){
	printf("Ãµ¹å»¨ÊýÓÐ£º");
	for(int i=1000;i<=9999;i++){
		int sum=0,temp=i;
		while(temp>0){
			int digit=temp%10;
			sum+=pow(digit,4);
			temp/=10;
		}
		if(sum==i){
			printf("%d ",i);
		}
		
	}
	return 0;
}
