#include<stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	if(a<2399&&a>0){
		
		if(a/100<8)
			printf("%d",(24+(a/100)-8)*100+a%100);
		else 
			printf("%d",((a/100)-8)*100+a%100);
	}
	

	return 0;
	
} 
