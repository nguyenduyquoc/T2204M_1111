#include<stdio.h>
int main(){
	unsigned long int n, i, s;
	printf("Nhap n: ");
	scanf("%lu",&n);
	i = 1;
	s = 0;
	
	if(n <= 0) {
		printf("Moi nhap lai n...");
	} else{
		while(i < n) {
			if(n % i == 0){
				s = s + i;
			}
			i++;
		} if(s == n){
		printf("%lu la so hoan hao",n);
		} else {
	    printf("%lu khong phai la so hoan hao",n);
		}
	}
	return 0;
}
