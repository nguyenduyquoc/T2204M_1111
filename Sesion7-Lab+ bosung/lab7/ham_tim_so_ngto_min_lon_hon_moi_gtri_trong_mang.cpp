#include<stdio.h>

//Ham tim so nguyen to nho nhat lon hon tat ca cac so con lai trong mang

int soNgtoMinlonHonCacSoOfArray (int n,int arr[]) {

	//tim so lon nhat trong mang
	int max = arr[0];
	for(int i = 0; i < 6; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	
	//Tim so nguyen to nho nhat lon hon tat ca cac so trong mang
	int a = max + 1;//a la so nguyen to can tim
	for( ; ; a++){
		int dem = 0;
		for(int j = 1; j < a/2; j++){
			if(a % j == 0)
			dem++;
		}
		if(dem==1){
		    break;
    	}
    }
	return a;
}
/*
int main(){
	int manggg[6] = {1,2,6,5,29,10};	
	printf("so nguyen to do la : %d",soNgtoMinlonHonCacSoOfArray(6,manggg));	
}
*/
