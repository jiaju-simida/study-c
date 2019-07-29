
#include<stdio.h>


int sumz(int a);
//原型声明 
int main(){
	int a=0,b=0,i=0;
	scanf("%d %d",&a,&b);
	for(;a<=b;a++){
		if(sumz(a)==a&&a!=1) {
		if(i>=1)printf(" ");
		printf("%d",a);
		i++;
		}
	}
	if(i==0) printf("NIL\n");
}

int sumz(int a){
	//计算因子和
	int i=0,sum=1;
	for(i=2;i<a;i++){
		if(a%i==0) sum+=i;
	} 
	return sum;
}

