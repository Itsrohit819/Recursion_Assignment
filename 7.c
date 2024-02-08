#include<stdio.h>
int fact(int n){
	if(n==0 || n==1) return 1;
	return n*fact(n-1);
}
int comb(int n, int r,int m){
	return (fact(n)%m/(fact(r)%m*fact(n-r)%m))%m;
}
int main(){
	int a,b,m;
	scanf("%d %d %d",&a,&b,&m);
	int res=comb(a,b,m);
	printf("%d",res);
	return 0;
}