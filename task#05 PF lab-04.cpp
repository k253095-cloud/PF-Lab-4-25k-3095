#include<stdio.h>
int main(){
	printf("Options\nY=1\nN=2\n");
	float cost_of_pizza=8;
	float extra_cheese=1.5;
	printf("Ask if they want extra_cheese : ");
	scanf("%f", &extra_cheese);

	if(extra_cheese==1) {
		printf("Total cost of extra_cheese is = %f", cost_of_pizza+1.50);
	}
	else if (extra_cheese==2){
		printf("no extra cheese");
	}
	else{
		printf("Please enter only two numbers in the range(1 to 2)");
	}
	return 0;
}
