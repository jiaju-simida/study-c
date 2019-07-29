#include<stdio.h>

int main(){
	
	int a=0,jisu=0,su=0,zhi=1;

		
		scanf("%d",&a);
	if(a>=0&&a<=1000000){
		while(a>0){
			jisu++;
			
			if(jisu%2==a%10%2)
				su += zhi;
			
			a /=10;
			zhi *= 2;
		}
		printf("%d",su);
	}	
	
	return 0;
	
} 
