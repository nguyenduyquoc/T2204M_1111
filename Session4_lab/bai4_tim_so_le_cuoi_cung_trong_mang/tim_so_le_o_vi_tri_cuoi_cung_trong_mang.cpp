#include<stdio.h>
int main(){
	
	int n;
	int s=0;
	printf("Nhap n: ");
	scanf("%d",&n);
	
	int arr[n];
	printf("\nNhap cac so nguyen trong mang n:\n");
	for(int i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
    
    int SoLeCuoiCung;
	for(int i = 0; i < n; i++){
	 if(arr[i] % 2 == 1){
	 	SoLeCuoiCung = arr[i];
	 	s++;
	 }
	}
	if(s == 0){
	 printf("Trong mang khong co so le");
	} else {
	 printf("\n%d la so le cuoi cung trong mang",SoLeCuoiCung);
	}
		
}
