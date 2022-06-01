#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	printf("Nhap chuoi:\n");
	scanf("%s",str);
	
	int kt = strlen(str);
	
	char str1[100];
	
	for(int i = 0; i < kt; i++){
		str1[i] = str[kt-1-i];
	}
	
	printf("Chuoi sau khi dao nguoc la : %s",str1);
}
