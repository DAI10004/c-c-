#include<stdio.h>
bool is_prime(int num){
	if(num<2){
		return false;
	}
	for(int i=2;i*i<=num;i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}



int main(){
	int cout=0;
	for(int i=0;i<=100;i++){
		if(is_prime(i)){
			cout++;
		}
	}
	printf("0-100的素数的个数为：%d",cout);
	
	return 0; 
}
