#include<stdio.h>
int main(){ 
	int studentID;
	printf("If Students have a Student ID then \nSubtract $2 from total");
	printf("\nYes = 1,\nNo=3");
	printf("\nEnter you have Student ID (Y/N): ");
	scanf("%d",&studentID);
	if(studentID == 1) {
	  printf("Your final cost is %d", 8-2);
    }
	 else if(studentID == 3) {
	  printf("your final cost is $8");	
     } 
	return 0;
}
