#include <stdio.h>

void main(void) {
// variables & initialization of variables

    int unitConsumed;
    int billCost;
    
    // slab variables
    int rateSlab1 = 7;
    int rateSlab2 = 10;
    int rateSlab3 = 13;

    int unitSlab1 = 0;
    int unitSlab2 = 100;
    int unitSlab3 = 200;

    // slab units consumed variables
    int consumedSlab1 = 0;
    int consumedSlab2 = 0;
    int consumedSlab3 = 0;

    // cost of electricity variables
    int costSlab1 = 0;
    int costSlab2 = 0;
    int costSlab3 = 0;

// obtain input from user for electricity units consumed
    printf("Enter the electricity 'Units' consumed: \n");
    scanf("%d",&unitConsumed);
    
    if (unitConsumed <= unitSlab2){
        // units upto 100
        consumedSlab1 = unitConsumed;
        
        costSlab1 = consumedSlab1 * rateSlab1;
        billCost = costSlab1;
    } else if (unitConsumed <= unitSlab3) {
        // units between 101 and 200
        consumedSlab1 = unitSlab2;
        consumedSlab2 = unitConsumed - consumedSlab1;

        costSlab1 = consumedSlab1 * rateSlab1;
        costSlab2 = consumedSlab2 * rateSlab2;
        billCost = costSlab1 + costSlab2;
    } else {
        // units above 200
        consumedSlab1 = unitSlab2;
        consumedSlab2 = unitSlab3 - consumedSlab1;
        consumedSlab3 = unitConsumed - consumedSlab1 - consumedSlab2;

        costSlab1 = consumedSlab1 * rateSlab1;
        costSlab2 = consumedSlab2 * rateSlab2;
        costSlab3 = consumedSlab3 * rateSlab3;
        billCost = costSlab1 + costSlab2 + costSlab3;
    }

// Printing Bill

    printf("*************************************************");
    printf("\n*---------------ELECTRICITY BILL----------------*");
    printf("\n*************************************************");
    printf("\n* Your Current Bill is: Rs. %d.\t\t*",billCost);
    printf("\n*\t\t\t\t\t\t*");
    printf("\n* Bill calculation is:\t\t\t\t*");
    printf("\n*\t\t\tUnits\tCost\t\t*");
    printf("\n* 0-100 units: \t\t%d\t%d\t\t*",consumedSlab1,costSlab1);
    printf("\n* 101-200 units: \t%d\t%d\t\t*",consumedSlab2,costSlab2);
    printf("\n* 201 and above units: \t%d\t%d\t\t*",consumedSlab3,costSlab3);
    printf("\n*\t\t\t----\t------\t\t*");
    printf("\n* Total: \t\t%d\t%d\t\t*",unitConsumed,billCost);
    printf("\n*\t\t\t====\t======\t\t*");
    printf("\n*\t\t\t\t\t\t*");
    printf("\n*************************************************");

}