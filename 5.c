#include<stdio.h>
int f(int a,int b,int m){
	if(b==0) return 1;
	if (b==1) return a%m;
	int temp=f(a,b/2,m);
	if(b%2==1){
		return ((temp*temp)%m*a)%m;
	}
	else{
		return (temp*temp)%m;
	}
}
int main(){
	int p,q,r;
	scanf("%d %d %d",&p,&q,&r);
	printf("%d",f(p,q,r));
	return 0;
}