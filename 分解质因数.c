
#include<stdio.h>


int isPrime(int a);
//ԭ������ 
int main(){
	int input=0,i=0,k=0,j;
	scanf("%d",&input);
	
	if(isPrime(input)==0){
		
			for(j=2;input%j!=0;j++);
			printf("%d=%d",input,j);
			k=input/j;
			while(isPrime(k)==0){
				for(j=2;k%j!=0;j++);
				printf("x%d",j);
				k/=j;
			}
			printf("x%d",k);
		
	}
	else printf("%d=%d",input,input);
	
	return 0;
} 


int isPrime(int a){
	//�������壬�ж�����
	int i=0,ret = 1;
	for(i=2;i<a;i++){
		if((a%i)==0){
		
		 ret=0;
		break;
		}
	} 
	return ret;
}
