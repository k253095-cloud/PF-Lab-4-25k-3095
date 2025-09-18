#include<stdio.h>
int main(){
	int pizza;
	printf("enter number to  choose a pizza size(1-3) : ");
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
	
	return 0;
}
