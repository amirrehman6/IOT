#include <stdio.h>

void main(void) {

	/* 
	=================
	Two Operators
	=================
	
	1.	&   ---->	(Reference Operator) before variable name to refer to memory address
	2.	*   ---->	a) (declaring Pointer) after data type to create pointer
					b) (Dereference Operator) before pointer variable name to get actual value held in memory address stored in pointer

	*/
	
	
	int myAge = 34;
	int* ptr = &myAge;		//pointer creation
	

	//output memory address of variable
	printf("%p\n",&myAge);	// output: (& reference operator)
	
	printf("%p\n",ptr);		//output: value held by pointer i.e. memory address
		
		
	//output value held in memory address
	printf("%d\n",myAge);	//output: value held in variable
	
	printf("%d\n",*ptr);	//Output: (* Dereference operator) To retreive actual value held in such memory address
	
	
	/*
	=========================================
	To retreive alternate value from variable
	=========================================
	
	1. from value to memory address ----> use '&' before variable name i.e. &varName
	
	2. from memory address to value ----> use '*' before pointer variable name i.e. *varName
	
	*/
	
	/*
	=================================
	Three ways to declare pointer
	=================================
	
		int* myNum; // Most used
		int *myNum;
		int * myNum;
	*/
	
}