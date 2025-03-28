#include<stdio.h>
double series(int n,int flag){
	if(n==13){
		return flag*(1.0/n);
	}
	return flag*(1.0/n)+series(n+2,-flag);
}
int main(){
	double result=series(1,1);
	printf("½á¹ûÎª£º%.4f\n",result);
	return 0;
}
