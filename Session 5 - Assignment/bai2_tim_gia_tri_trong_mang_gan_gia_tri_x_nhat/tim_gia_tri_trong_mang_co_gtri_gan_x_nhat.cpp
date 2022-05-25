#include<stdio.h>
#include<math.h>

int main () {
	int n;
	do {
		printf("Nhap n:");
		scanf("%d",&n);
	} while (n < 0);
	
	int arr[n];
	printf("\nNhap cac so trong mang:\n");
	for(int i = 0; i < n; i++){
		scanf("%dd",&arr[i]);
	}
	
	int x;
	printf("Nhap x: ");
	scanf("%d",&x);	
	
	int min, soCachXmin;//soCachXmin : gia tri trong mang gan vs gia tri cua x nhat
		min = abs(arr[0] - x);//Lay tri tuyet doi hieu so giua arr[0] vs x gan bang min
		soCachXmin = arr[0];
	int i;
	for(i = 1; i < n; i++){
		if(abs(arr[i] - x) <= min){
			min = abs(arr[i] - x);
			soCachXmin = arr[i];
		}
	}
    printf("%d la so co gia tri gan gia tri gan nhat voi %d",soCachXmin,x);
	return 0;
}
