#include<stdio.h>
#include<string.h>
void reverse(char* str){
	int i,l;
	char *start_ptr,*end_ptr,ch;
	l=strlen(str);
	start_ptr=str;
	end_ptr=str;
	for(i=0;i<l-1;i++)
	end_ptr++;
	for(i=0;i<l/2;i++){
		ch = *end_ptr;
		*end_ptr = *start_ptr;
		*start_ptr = ch;
		start_ptr++;
		end_ptr--;
	}
}
int main(){
	char str[100];
	scanf("%s",str);
	reverse(str);
	printf("Reversed string : %s",str);
	return 0;
}