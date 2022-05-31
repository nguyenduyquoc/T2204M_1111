#include<stdio.h>
#include<math.h>

int uocchunglonnhat2so (int a, int b){
	int ucln;// ucln : uoc chung lon nhat
	int min = abs(a),max= abs(b);
	if(abs(a) > abs(b)){
		min = abs(b),max = abs(a);
	}
	
	for(int i = min; i > 0;i--){
		if(min % i == 0 && max % i == 0){
			ucln = i;
			break;
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
