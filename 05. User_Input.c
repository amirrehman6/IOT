#include <stdio.h>

int main() {
	
	//obtaining input from user
	int input;
	printf("Enter your number: \n");
	scanf("%d",&input);
	
	//determine whether input is even or odd
	if (input%2 == 0) {
		printf("Your input is EVEN");
	}	else {
		printf("Your input is ODD");
		}
		
		return 0;
}