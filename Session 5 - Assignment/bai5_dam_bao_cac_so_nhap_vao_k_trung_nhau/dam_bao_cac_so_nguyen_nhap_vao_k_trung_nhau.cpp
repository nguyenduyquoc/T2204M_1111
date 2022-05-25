#include<stdio.h>

int main () {
	int n,i;
	do{
		printf("Nhap n:");
		scanf("%d",&n);
	} while(n < 0);
	
	int arr[n];
	printf("\nNhap cac so trong mang:\n");
	printf("arr[0] = ");
    scanf("%d",&arr[0]);
	for(i = 1; i < n; i++){
		do{	
			printf("arr[%d] = ",i);
			scanf("%d", &arr[i]);
		} while (arr[i] == arr[i-1]);	
	}
	printf("\nMang sau khi nhap vao la: ");
	for(i = 0; i < n; i++){
		printf("%d ",arr[i]);
	}
}
