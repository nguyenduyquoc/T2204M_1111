#include<stdio.h>

int main(){
	
	int n,i;
	do{
		printf("Nhap n:");
		scanf("%d",&n);
	} while (n < 0);
	
	int arr[i];
	printf("\nNhap cac so trong mang:\n");
	for(i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
	//Tim doan [a,b] nghia la tim min vs max cua mang
	
	//Tim min
	int min;
	min = arr[0];
	for(i = 1; i < n; i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	//Tim max
	int max;
	max = arr[0];
	for(i = 1; i < n; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	
	printf("\n\nDoan [%d,%d] chua tat ca cac gia tri cua mang.",min,max);
	return 0;
}
