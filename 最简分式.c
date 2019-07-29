#include<stdio.h>
 int gcd(int a,int b)
 {
    return b==0?a:gcd(b,a%b);
 }

int main(){
	int m=0,n=0;
	scanf("%d/%d",&m,&n);
	printf("%d/%d",m/gcd(m,n),n/gcd(m,n));
	
}
