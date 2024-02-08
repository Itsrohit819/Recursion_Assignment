#include<stdio.h>
void f(int l, int r){
	if(l>r){
		return 0;
	}
	printf("%d ",l);
	f(l+1,r);
}
int main(){
	int n;
	scanf("%d",&n);
	f(1,n);
	return 0;
}