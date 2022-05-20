#include<stdio.h>
int main (){
	for(int x = 1; x <= 5; x++){
		for(int y = 1; y <= x ; y++){
			for(int z = 1; z <= x; z++){
				printf("*");
			}
			printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}
