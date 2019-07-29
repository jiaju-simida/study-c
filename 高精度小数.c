#include<stdio.h>

//高精度小数 
int main(){
	
	int dividend=0,divisor=0,remainder=0,i=0;
	//定义变量被除数，除数，余数 
	scanf("%d/%d",&dividend,&divisor);
	//从键盘中读取被除数与除数 
	printf("%d",dividend/divisor);
	
	//输出整数部分 
	remainder = dividend%divisor;
	if(remainder != 0) printf(".");
	while(remainder!=0&&i<200){
	
		printf("%d",remainder*10/divisor);
		remainder = (remainder*10)%divisor;
		i++;
		
	}
	printf("\n");
	return 0;
	
}  
