#include<stdio.h>
int main() {
	printf("Pizza cost is $8\n");
	printf("pickup=1\nDelivery=2\n");
	int pickup;
	int Delivery;
	printf("Delivery or pickup : ");
	scanf("%d", &Delivery);

	if(Delivery==2 || pickup==1) {
	printf("Final Cost is: %d", 8+3);
	
   }else {
	printf("Final cost is $8");
}

	return 0;
}
