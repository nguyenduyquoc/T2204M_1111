#include <stdio.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	float S=0;
	int i=1;
	
	if(n < 1){
		printf("Moi ban nhap lai n...");
	} else {
    	while(i <= n){
	    	S= S+ (float)1/i;
	    	i++;
	}
		printf("S= %f",S);
	}
	return 0;
}

