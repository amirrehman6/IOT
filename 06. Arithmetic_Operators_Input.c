#include <stdio.h>

void main(void) {

int num_01;
int num_02;
int result;
char op[5];
	
printf("%s","Enter Number:01 \n");
scanf("%d",&num_01);
printf("%s","Enter Number:02 \n");
scanf("%d",&num_02);		
printf("%s","Enter Operator \n");
scanf("%s",op);		
	
// printf("%c",op[0]);
if(op[0] == '+'){
result = num_01+num_02;
printf("\nThe sum of %d and %d is this: %d",
 num_01,num_02,result);
}
else if(op[0] == '-'){
result = num_01-num_02;
printf("\nThe sub of %d and %d is this: %d",
 num_01,num_02,result);
}
else if(op[0] == '*'){
result = num_01*num_02;
printf("\nThe multiplication of %d and %d is this: %d",
num_01,num_02,result);
}
else if(op[0] == '/'){
result = num_01/num_02;
printf("\nThe division of %d and %d is this: %d",
num_01,num_02,result);
}
else{
printf("%s","Invalid Operator\n");
}
}