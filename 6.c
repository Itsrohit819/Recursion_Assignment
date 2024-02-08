#include<stdio.h>
int gcd(int a,int b){
	int i;
	if(a>b){
		i=b;
		for(i=b;i>=1;i--){
			if(a%i==0 && b%i==0){
				printf("%d",i);
				return 0;
			}
		}
	}
	else if(a<b){
		i=a;
		for(i=a;i>=1;i--){
			if(a%i==0 && b%i==0){
				printf("%d",i);
				return 0;
			}
		}
	}
	else{
		printf("%d",a);
	}
	return 0;
}
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	gcd(m,n);
	return 0;
}