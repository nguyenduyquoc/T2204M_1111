#include<stdio.h>

int uocchunglonnhat2so (int a, int b){
	int ucln;// ucln : uoc chung lon nhat
	int min = a,max = b;
	if(a > b){
		min = b,max = a;
	}
	if(min <= max){
		for(int i = min; i > 0;i--){
			if(min % i == 0 && max % i == 0){
				ucln = i;
				break;
			}
		}
	}
	return ucln;
}

/*
int main(){
	int x;
	printf("Nhap x: ");
	scanf("%d",&x);
	
	int y;
	printf("\nNhap y: ");
	scanf("%d",&y);
	printf("Uoc chung lon nhat cua %d va %d la %d.",x,y,uocchunglonnhat2so(x,y));
}
*/
