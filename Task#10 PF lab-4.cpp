#include<stdio.h>
int main(){
	int pizza;
	printf("\nenter number to  choose a pizza size(1-3) : ");
	scanf("%d", &pizza);
	switch(pizza){
		case 1 : printf("small size");
		               break;
		case 2 :  printf("Medium size");
		               break;
		case 3 : printf("Large size");
		               break;               
	default : printf("please enter valid number");				   	               
	}


printf("\nAsk how many pizza they want : ");
scanf("%d", &pizza);
if(pizza==1) {
	printf("Your total is $8");
	}else{
	printf("check our multi-pizza deals");
	}

	
	
//int main(){
	int pizzas;
	printf("\nAsk how many pizzas they want(1-3) : ");
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
	
	
	printf("\ncrust types\nRegular cost=$0\nThin crust=$1\nStuffed crust=$2\n");
	int crust;
	printf("\nAsk for crust type : ");
	scanf("%d", &crust);
	switch(crust) {
		
	   case 1 : printf("total cost %d", 8 + 0);
		                   break;
       case 2 : printf("total cost %d", 8 + 1);
	                        break;
	   case 3 : printf("total cost %d", 8 + 2);
	                       break;
	   default:printf("Please enter value in the range(1-3)");
	    }
    	
	printf("\nOptions\nY=1\nN=2\n");
	//float cost_of_pizza=8;
		printf("Options\nY=1\nN=2\n");
	float cost_of_pizza=8;
	float extra_cheese=1.5;
	printf("Ask if they want extra_cheese : ");
	scanf("%f", &extra_cheese);

	if(extra_cheese==1) {
		printf("\nTotal cost of extra_cheese is = %f", cost_of_pizza+1.50);
	}
	else if (extra_cheese==2){
		printf("\nno extra cheese");
	}
	else{
		printf("\nPlease enter only two numbers in the range(1 to 2)");
	}
	

printf("Pizza price is $8\n");
     int time;
	printf("Between 11AM and 2PM, there is  10 percent discount\n");
	printf("\nEnter time is : ");
	scanf("%d", &time);
	float total_discount= 8-(8*0.1);
	if(time>=11 && time<=14 ) {
		printf("\nafter discount price will be: %f", 8-(8*0.1));
	} else {
		printf("price is: 8");
}
	int studentID;
	printf("\nIf Students have a Student ID then \nSubtract $2 from total");
	printf("\nYes = 1,\nNo=3");
	printf("\nEnter you have Student ID (Y/N): ");
	scanf("%d",&studentID);
	if(studentID == 1) {
	  printf("\nYour final cost is %d", 8-2);
    }else if(studentID == 3) {
	  printf("\nyour final cost is $8");	
     } 
	
	
	printf("\nif you oder 3 pizzas with stuffed crust you get free garlic bread!\n");
	printf("stuffed crust=3");
	printf("\nEnter pizzas  do you want to order with Stuffed Crust : ");
	scanf("%d", &pizzas);
	if(pizzas == 3) {
		printf("\nYou get free garlic bread");
	} else { 
		printf("\nYou cannot get free garlic bread");
	}
	
	printf("\nPizza cost is $8\n");
	printf("\npickup=1\nDelivery=2\n");
	int pickup;
	int Delivery;
	printf("\nDelivery or pickup : ");
	scanf("%d", &Delivery);

	if(Delivery==2 || pickup==1) {
	printf("\nFinal Cost is: %d", 8+3);
	
   }else {
	printf("\nFinal cost is $8");
}
	return 0;
 }  
