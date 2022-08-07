#include <stdio.h>

int sum(int);


void main(void) {
	int x;
	int result;
	printf("enter a whole number: ");
	scanf("%d",&x);
	result = sum(x);
	printf("Output of recursion is: %d",result);
}


int sum(int k) {
	if ( k > 0) {
		return k + sum(k-1);
	}
	else {
		return 0;
	}
}