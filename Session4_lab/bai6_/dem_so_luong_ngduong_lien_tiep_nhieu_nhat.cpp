#include<stdio.h>
int main () {
	 int n;
	 printf("Nhap n: ");
	 scanf("%d",&n);
	 
	for( ; n < 0; ){
		printf("\nNhap n khong thoa man...\nNHap lai n: ");
		scanf("%d",&n);
	}
	int arr[n];
	printf("\nNhap cac so trong mang:\n");
	for(int i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
	
	int count = 0, max = 0, i =  0;
	for( ;i < n;i++){
		if(arr[i] > 0){
			count++;
	    	if(count > max){
		    	max = count;
	    	}
		} else {
			count = 0;
		}
	}
			printf("so luong so nguyen duong lien tiep nhieu nhat la %d",max);
	

	return 0;
}
