#include<stdio.h>

int uclnCuaCacphtuTrongmang(int n, int arr[]){
	
	int min =arr[0];
	for(int i = 0; i < n; i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}

	int j = min;
	for( ; j > 0;j--){
		int dem = 0;
		for(int i = 0; i < n; i++){
			
			if(arr[i] % j == 0){
				dem++;
			}
		}
		if(dem == n){
			break;
		}
	}
	return j;
}
/*
int main(){
	
	int manggg[6] = {1550,50,550,225,325,25};	
	printf("Uoc chung lon nhat cua tat ca phan tu trong mang  la : %d",uclnCuaCacphtuTrongmang(6,manggg));	
}
*/
