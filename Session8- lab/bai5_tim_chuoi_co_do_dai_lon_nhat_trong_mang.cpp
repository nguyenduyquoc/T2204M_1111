#include<stdio.h>
#include<string.h>

int main(){
	char str[10][100];
	printf("Nhap cac chuoi:\n");
	for(int i = 0; i < 10; i++){
		printf("Chuoi thu %d : ",i);
		scanf("%s",str[i]);
	}
	
	int max,j;
	max = strlen(str[0]);
	for(int i = 1; i < 10; i++){
		if(strlen(str[i]) > max) {
			max = strlen(str[i]);
			j=i;
		}
	}
	
	printf("Chuoi %s co do dai lon nhat",str[i],max);
		
}
