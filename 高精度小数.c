#include<stdio.h>

//�߾���С�� 
int main(){
	
	int dividend=0,divisor=0,remainder=0,i=0;
	//������������������������� 
	scanf("%d/%d",&dividend,&divisor);
	//�Ӽ����ж�ȡ����������� 
	printf("%d",dividend/divisor);
	
	//����������� 
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
