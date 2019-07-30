#include<stdio.h>

int f(int x);
int main (){
	int number = 0;
	scanf("%d",&number);
	printf("%d",f(number));
	
	return 0;
}
int f(int x){
	if(x>1) return x*f(x-1);
}
