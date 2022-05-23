#include<stdio.h>
int main(){
	
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	
	int arr[n];
	printf("\nNhap cac so trong mang:\n");
	for(int i = 0;i < n; i++){
		scanf("%d",&arr[i]);
	}
	
	int min = 0;
	for(int i = 0;i < n; i++){
		if(arr[i] > 0){
			min = arr[i];
			break;
		}	
	}
		
	if(min != 0){
     	for(int i = 0;i < n; i++){
	    	if(arr[i] > 0 && arr[i] < min){
				min = arr[i];
			}
    	}
   	printf("%d la so nguyen duong nho nhat trong mang.",min);
    } else {
	      printf("khong co so nguyen duong trong mang.");
       }
}

