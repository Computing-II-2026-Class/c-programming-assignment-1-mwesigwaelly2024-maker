/*Name: MWESIGWA ELLY*/
/*Student Number: 25/U/BIO/01402/PD*/
#include <stdio.h>
int main(){
    float amount, fee_percent, fee_amount, total_deducted;
    // Input
    printf("Enter amount to send: ");
    scanf("%f", &amount);
    printf("Enter transaction fee: ");
    scanf("%f", &fee_percent);
    //Calculation the fee amount and total deducted
    fee_amount = amount * (fee_percent/100);
    total_deducted = amount + fee_amount;
    //Display the output
    printf("Transaction fee: %.2f UGX\n", fee_amount);
    printf("Total deducted: %.2f UgX\n", total_deducted);
    return 0;
}
