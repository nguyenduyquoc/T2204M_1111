#include<stdio.h>
int main(){
	for(int x = 1 ; x <=5 ; x++){
		
			if(x % 2 == 1){
				for(int y = 1; y <= 5; y++){
					printf("*");
				}
				printf("\n");
			}
		    else {
		    	for(int y = 1; y <= 4; y++){
		    		printf("*");
				}
				printf("\n");
			}	
		}
	
	return 0;
}
