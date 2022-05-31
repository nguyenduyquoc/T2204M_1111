#include<stdio.h>
float tinhXmuY (float a, float b){
	if(b < 0){
		float S = 1;
		for(float i = 0; i < -b;i++){
			S =S*(1/a);
		}
		return S;
	} else {
			if(b == 0){
			float S = 1;
			return S;
			} else {
				float S = 1;
				for(float i = 0; i < b;i++){
					S *= a;
				}
					return S; 	
		} 
	}
}
	
int main(){

}
