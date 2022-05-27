#include<stdio.h>

int boichungnhonhatcua2so(int a, int b){
	int bcnn;//bcnn : boi chung nho nhat cua hai so a va b
	int min =a,max =b;
	if(a > b){
		min = b,max = a; 
	}	
	if(min <= max){
		for(int i = 1; i <= max;i++){
			if((min * i) % max  == 0){
				bcnn = min * i;
				break;
			}	
		}
	}
	
	return bcnn;
}

/*
int main(){
	int x;
	printf("Nhap x: ");
	scanf("%d",&x);
	int y;
	printf("Nhap y: ");
	scanf("%d",&y);
	printf("Boi chung nho nhat cua %d va %d la %d.",x,y,boichungnhonhatcua2so(x,y));
}
*/
