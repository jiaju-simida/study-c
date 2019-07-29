#include<stdio.h>

int main(){
	
	int a=0,b=0,c=0;
	scanf("%d",&a);
	while(a != -1 &&a>0&&a<100000){
		c++;
		if(a%2==0)
			b++;
		scanf("%d",&a);
		
	}
	printf("%d %d",c-b,b);
	return 0;
	
} 
