#include<stdio.h>

int main(){
	int i=1;
	while(i<=50){
		if(i%3==0 && i%5==0)
			printf("\ni=%d",i);
			i++;
		
	}
}