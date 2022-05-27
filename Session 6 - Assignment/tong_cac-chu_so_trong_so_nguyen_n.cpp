#include<stdio.h>
#include<math.h>

int tongcacchusocua1songuyen(int x){
	int chuso,sum = 0;
	for( ; x != 0; x /= 10){
		chuso = x % 10;
		sum += chuso; 
	}
	return abs(sum);
}
/*
int main(){
	
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("Tong cac chu so nguyen cua %d la %d",n,tongcacchusocua1songuyen(n));
}
*/
