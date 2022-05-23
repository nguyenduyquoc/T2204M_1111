#include<stdio.h>
int main(){
	int n, i;
	printf("Nhap n: ");
	scanf("%d",&n);
	
	int arr[n];
	printf("Nhap mang n:\n");
	for(i = 0;i < n; i++) {
		scanf("%d",&arr[i]);
	}
	
	int S = 0;//Tong cac so le
	int dem = 0;//Dem cac so le
	float trung_binh_cong;
	for(i = 0; i < n; i++){
		if(arr[i] % 2 == 1){
			S = S + arr[i];
			dem++;
		}	
	}
      
    if(dem==0){
    	printf("Khong co so le trong mang...");
	} else {
	    trung_binh_cong =(float)S/dem;
     printf("Trung binh cong cac so le la %f ",trung_binh_cong);
	}
    
	return 0;
}
