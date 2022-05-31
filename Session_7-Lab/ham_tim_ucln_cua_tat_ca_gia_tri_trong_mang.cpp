#include<stdio.h>
#include<math.h>

int uclnCuaCacphtuTrongmang(int n, int arr[]){
	
	int min =arr[0];
	for(int i = 0; i < n; i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}

	int j = abs(min);
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

int main(){
	
}

