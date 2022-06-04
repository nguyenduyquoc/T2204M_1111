#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao so nguyen co 3 chu so: ");
	scanf("%d",&n);
	
	if (n < 100 || n > 999){
	    printf("\nSo khong hop le !");
	}else{
		int c = n % 10;
		n /= 10;
		int b = n % 10;
		int a = n / 10;
		if (a == 1){
		 printf("one ");
		}else if (a == 2){
		 printf("two ");
		}else if (a == 3){
		 printf("three ");
		}else if (a == 4){
		 printf("four ");
		}else if (a == 5){
		 printf("five ");
		}else if (a == 6){
		 printf("six ");
		}else if (a == 7){
		 printf("seven ");
		}else if (a == 8){
		 printf("eight ");
		}else if (a == 9){
		 printf("nine");
		}	if (b == 0){
		printf("zero ");
		}else if (b == 1){
		 printf("one ");
		}else if (b == 2){
		 printf("two ");
		}else if (b == 3){
		 printf("three ");
		}else if (b == 4){
		 printf("four ");
		}else if (b == 5){
		 printf("five ");
		}else if (b == 6){
		 printf("six ");
		}else if (b == 7){
		 printf("seven ");
		}else if (b == 8){
		 printf("eight ");
	    }else if(b == 9){
	    	printf("nine");
		}if (c == 0){
		 printf("zero");
		}else if (c == 1){
		 printf("one");
		}else if (c == 2){
		 printf("two");
		}else if (c == 3){
		 printf("three ");
		}else if (c == 4){
		 printf("four ");
		}else if (c == 5){
		 printf("five ");
		}else if (c == 6){
		 printf("six ");
		}else if (c == 7){
		 printf("seven ");
		}else if (c == 8){
		 printf("eight ");
	    }else if(c == 9){
	    	printf("nine");
		}
	}
    return 0;
}
