/*Name: MWESIGWA ELLY*/
/*Student Number: 25/U/BIO/01402/PD*/
#include <stdio.h>
int main(){
    float units_consumed, cost_per_unit, total_electricity_bill;
//Prompt user for input
    printf("Enter units consumed: ");
    scanf("%f", &units);
    printf("Enter cost per unit: ");
    scanf("%f", &cost_per_unit);
//Calculate total electricity bill
    total_electricity_bill = units * cost_per_unit;
//Display the result
    printf("Total bill: %.2f UGX\n", total_electricity_bill);
return 0;
}
