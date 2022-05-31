#include<stdio.h>
#include<math.h>

int bcnnCacSoTrongMang(int n, int arr[]){
	
	int min = arr[0];
	for(int i = 0;i < n; i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	
	int bcnn;
	for(int j = 1; ; j++){
		int dem = 0;
		for(int i = 0; i < n; i++){
			if((min * j) % arr[i] == 0){
				dem++;
			}
		}
		if(dem == n){
			bcnn = abs(min * j);
			break;
		}
	}
	return bcnn;
}

int main(){
	
}

