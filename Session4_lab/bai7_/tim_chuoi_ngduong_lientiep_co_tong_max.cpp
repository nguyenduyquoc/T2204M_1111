#include<stdio.h>
int main () {
	 int n;
	 printf("Nhap n: ");
	 scanf("%d",&n);
	 
	for( ; n < 0; ){
		printf("\nNhap n khong thoa man.\nHay nhap lai n: ");
		scanf("%d",&n);
	}
	int arr[n];
	printf("\nNhap cac so trong mang:\n");
	for(int i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
	
	int S = 0, max = 0, i =  0;
	for( ;i < n;i++){
		if(arr[i] > 0){
			S += arr[i];
	    	if(S > max){
		    	max = S;
	    	}
		} else {
			S = 0;
		}
	}
			printf("Tong so nguyen duong lien tiep lon nhat la %d",S);
	

	return 0;
}
