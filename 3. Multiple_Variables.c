#include <stdio.h>

int main() {

// combined declaration and assignment
	int x = 5;
	int y = 10;
	int sum = x + y;
	printf("The sum of %d and %d is %d \n\n",x,y,sum);

// separate declaration and assignment
	int a;
	int b;
	int product;
	a = 2;
	b = 3;
	product = a * b;	
	printf("The product of %d and %d is %d \n\n",a,b,product);

// separate declaration (in single line for same data types) and assignment
	int j,k,l;
	j = k = l = 50;
	printf("Combined declaration of variable of same data types: %d %d %d \n\n",j,k,l);
	
	return 0;
}
