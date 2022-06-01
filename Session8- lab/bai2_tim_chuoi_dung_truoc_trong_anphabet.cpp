#include<stdio.h>
#include<string.h>

int main(){
	char s1[100], s2[100];
	printf("Nhap chuoi thu nhat:\n");
	scanf("%s",s1);
	printf("Nhap chuoi thu hai:\n");
	scanf("%s",s2);
	
	if(strcmp(s1,s2) == 0){
		printf("Hai chuoi dung cung vi tri trong day anphabet.");
	} else {
		// tim chuoi dai hon
		int max = 0;
		if(strlen(s1) >= strlen(s2)){
		max = strlen(s1);
		} else {
			max = strlen(s2);
		}
		//tim chuoi dung truoc trong day anphabet
	
		for(int i = 0; i < max; ){
			if(s1[i] - s2[i] < 0) {
				printf("chuoi thu nhat dung truoc trong chuoi anphabet.");
				break;
			} else if (s1[i] -s2[i] > 0) { 
				printf("Chuoi thu hai dung truoc trong chuoi anphabet.");
				break;
			} else {
				i++;
			}
		}
	}
}
