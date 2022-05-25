#include<stdio.h>
#include<math.h>
int main(){
	
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d",&n);
	} while (n < 0);
	
	int i;
	int arr[n];
	printf("\nNhap cac so trong mang:\n");
	for(i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
	
	int x,soCachXmax;
	printf("\nNhap x:");
	scanf("%d",&x);
	
	int max = 0;
	for(i = 0; i < n; i++){
		if(abs(arr[i]- x)>= max){
			max = abs(arr[i]-x);
			soCachXmax=arr[i];
		} 	
	}	printf("\n\n%d cach xa  %d nhat.",soCachXmax,x);


}
