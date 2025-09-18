#include<stdio.h>
int main(){
	int pizzas;
	printf("Ask how many pizzas they want(1-3) : ");
	scanf("%d", &pizzas);
    if(pizzas==1) {
    	printf("1 pizza cost is $8");
    }else if(pizzas==2) {
    	printf("2 pizzas cost is $15");
	}else if(pizzas==3) {
		printf("3 pizzas cost is $21");
	}else{
		printf("please vaild pizzas number");
}

	
	return 0;
 }  
