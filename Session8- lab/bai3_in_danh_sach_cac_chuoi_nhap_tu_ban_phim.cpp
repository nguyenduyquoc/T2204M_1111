#include<stdio.h>
#include<string.h>

int main(){
	char str[10][100];
	printf("Nhap cac chuoi :\n");
	for(int i = 0; i < 10; i++){
		printf("chuoi thu %d : ",i);
		scanf("%s",str[i]);
	}
	
	printf("Cac chuoi vua nhap la:\n");
	for(int i = 0; i < 10; i++){
		printf("%s\n",str[i]);
	}
}
