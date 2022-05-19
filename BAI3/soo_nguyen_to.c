#include <stdio.h>

int main(){
	
	int n;
	printf("Please enter a integer: ");
	scanf("%d",&n);
	int i = 1;
	int x = 0;
	
	if (n < 2) {
		printf("%d is not a prime number",n);
	}
	else {
		while (i <= n){
			if(n % i == 0){
				x++;
			}
		     i++;
		}
		if(x == 2){
			printf("%d is a prime number",n);
		} else {
			printf("%d is not a prime number",n);
		}
	}

	return 0; 
}
