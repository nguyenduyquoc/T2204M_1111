#include<stdio.h>

 int main () {  
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    int i = 1 ; 
    
    while(i < n ) {
 	    if( i % 2 == 1){
    	printf("%d\n",i);
	    }
    	 i++;
    }
 return 0;
 }
