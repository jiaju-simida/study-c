#include<stdio.h>

int main(){
	
	int D[101]={0,};
	int i=0,j=0,k=0;
	for(k=0;k<2;k++){
		scanf("%d %d",&i,&j);
		for(;i>=0&&j!=0;){
			if(i==0){
				D[i]+=j;
				
				break;
		}
			else{
				D[i]+=j;
				
				scanf("%d %d",&i,&j);
		}
	}
	}
	
		k=0;
		for(i=101;i>=0;i--){
		 if(D[i]!=0){
		 	if(k!=0) printf("+");
			if(i==0){
				printf("%d",D[i]);
			}
			else if(i==1){
				printf("%dx",D[i]);
				
			}else {
				printf("%dx%d",D[i],i);
				
			}
			k++;
		}
	}
	

	return 0;
}
