#include<stdio.h>
int main(){
	printf("crust types\nRegular cost=$0\nThin crust=$1\nStuffed crust=$2\n");
	int n;
	printf("Enter base pizza cost : ");
	scanf("%d",&n);
	int crust;
	printf("Ask for crust type : ");
	scanf("%d", &crust);
	switch(crust) {
		
	   case 1 : printf("total cost %d", n + 0);
		                   break;
       case 2 : printf("total cost %d", n + 1);
	                        break;
	   case 3 : printf("total cost %d", n + 2);
	                       break;
	   default:printf("Please enter value in the range(1-3)");
	    }
    	return 0;
}

