#include <stdio.h>

int main(){
	
	int n, i;
	printf("Nhap n: ");
	scanf("%d",&n);
	
	int arr[n];
	printf("Nhap mang n:\n");
	for(i = 0;i < n; i++){
		scanf("%d",&arr[i]);
	}
	
	int x, dem = 0;
	printf("Nhap x : ");
	scanf("%d",&x);
	
    for(i = 0; i < n; i++) {
    	if(x / arr[i] == 1) {
    		dem++;
		}
	}
	if(dem != 0){
		printf("\n%d co trong mang",x);
	} else {
		printf("\n%d khong co trong mang",x);
	}
	
	return 0;
}

