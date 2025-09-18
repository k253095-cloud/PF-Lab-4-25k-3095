#include<stdio.h>
int main() {
		printf("Pizza price is $8\n");
     int time;
	printf("Between 11AM and 2PM, there is  10 percent discount\n");
	printf("Enter time is : ");
	scanf("%d", &time);
	float total_discount= 8-(8*0.1);
	if(time>=11 && time<=14 ) {
		printf("after discount price will be: %f", 8-(8*0.1));
	} else {
		printf("price is: 8");
	}
	
	return 0;
}
