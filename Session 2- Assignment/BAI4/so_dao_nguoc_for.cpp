#include<stdio.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int inverse_num = 0;
	
	for( ; n != 0; n /= 10){
		inverse_num = inverse_num*10 + n%10;
	}
	printf("Inverse_num is %d",inverse_num);
	return 0;
}
