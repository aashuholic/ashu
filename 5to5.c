#include<stdio.h>

int main(void){
	int i=0,n;
	scanf("%d",&n);
	if(n<0){
		while(i>=n){
			printf("\n count up i=%d",i);
			i--;
		}
    }
	 else {
	
		while(i<=n){
			printf("\n countdown i=%d",i);
			i++;
		}
			
		}
	
}