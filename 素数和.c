
#include<stdio.h>

int main(){
	int n=0,m=0,i=1,t=2,l=2,sum=0;
	scanf("%d %d",&n,&m);
//	if(n>0&&n<=m&&m<200){
	
	for(i=1;i<=m;i++){
			for(;;){
			
				for(t=2;t<l;t++){
					if(l%t==0) goto yu;
				
				}
			l++;	
			goto out;	
			yu:l++;
		}
		out:
	  	if(i>=n) sum +=l-1;
	}
	printf("%d",sum);
	//}
	return 0;
	
} 

