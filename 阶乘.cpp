#include<stdio.h>
int jc(int n){
	int sum=1; 
	for(int i=1;i<=n;i++){
		sum*=i;
	}
	return sum;
}
int main(){
	
	
	int n;scanf("%d",&n);
	printf("%dµÄ½×³ËÎª£º%d",n,jc(n));
	return 0;
}
