#include<stdio.h>

int main(){
	
	int number,digit,rno,arm;
	printf("enter the number for armstrong\n");
	scanf("%d",&number);
	arm=number;
	
	while(number>0){
		digit=number%10;
		rno=rno+(digit*digit*digit);
		number=number/10;
		
		
		
	}
	printf("the sum of cubes of digit %d\n",rno);
	
	if(arm==rno){
			printf("the number is armstrong %d\n",rno);
	}
	else{
		printf("the number is not armstrong %d",rno);
	}
}