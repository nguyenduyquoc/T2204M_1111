#include <stdio.h>
#include <string.h>

int main () {
	
	char s1[100], s2[100];
	printf("Nhap chuoi thu nhat :\n");
	scanf("%s",s1);
	printf("Nhap chuoi thu hai :\n");
	scanf("%s",s2);
	
	if (strlen(s1) > strlen(s2)){
		printf("Chuoi thu nhat dai hon chuoi thu hai.");
	} else {
		printf("Chuoi thu hai dai hon chuoi thu nhat.");
	}
}
