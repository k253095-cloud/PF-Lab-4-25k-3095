#include <stdio.h>
int main(){
	printf("if you oder 3 pizzas with stuffed crust you get free garlic bread!\n");
	printf("pizzas=3\n");
	int pizzas;
	int pizza;
	printf("Enter pizzas  do you want to order with Stuffed Crust : ");
	scanf("%d", &pizzas);
	if(pizzas == 3) {
		printf("You get free garlic bread");
	} else { 
		printf("You cannot get free garlic bread");
	}
	return 0;
}
