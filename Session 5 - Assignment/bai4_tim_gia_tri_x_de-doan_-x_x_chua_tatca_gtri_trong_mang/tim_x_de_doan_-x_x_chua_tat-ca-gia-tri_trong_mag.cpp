#include<stdio.h>
#include<math.h>

int main(){
	int n,i;
	do{
		printf("Nhap n: ");
		scanf("%d",&n);
	} while (n < 0);
	
	int arr[n];
	printf("\nNhap cac so trong mang:\n");
	for(i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
	//Tim min va max cua cac so trong mang
	
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
	/* Lay tri tuyet doi cua min vs max so sanh vs nhau,cai nao lon
	hon thi do la x
	*/
	int x;
	if(abs(min) >= abs(max)){
		x = abs(min);
		printf("\nKhi x = %d thi doan [-%d, %d] chua tat ca cac gia tri cua mang.",x,x,x);	
	} else {
		x = abs(max);
		printf("\nKhi x = %d thi doan [-%d, %d] chua tat ca cac gia tri cua mang.",x,x,x);	
	}
	
}
