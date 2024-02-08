#include<stdio.h>
int bin(int n){
	if(n==0)
	{
		printf("0");
		return 0;
	} 
	if(n==1){
		printf("1");
		return 0;
	} 
	
	int a=n%2;
	
	bin(n/2);
	printf("%d",a);
	return 0;
}
int main(){
	int x;
	scanf("%d",&x);
	bin(x);
	return 0;
}