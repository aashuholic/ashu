#include<stdio.h>

int main(){
	int num,sum=0,product=1;
while(1){
	printf("\nenter a no");
	scanf("%d",&num);
	if(num<0)
	break;
	if(num%2==0)
	{
		sum+=num;
		printf("\nadded to sum..");
	}
	printf("\nsum=%d",sum);
	else
	{
		product*=num;
			printf("\nmiultiplied to product..");
		
	}
	printf("\product=%d",product);
	
}	         
}