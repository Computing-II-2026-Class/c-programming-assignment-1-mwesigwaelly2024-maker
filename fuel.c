/*Name: MWESIGWA ELLY*/
/*Student Number: 25/U/BIO/01402/PD*/
#include <stdio.h>
int main(){
//Declare variables
    float distance, fuel_used, fuel_efficiency;

//Ask user for input
    printf("Enter distance (km):");
    scanf("%f", &distance);
    printf("Enter fuel used(litres):");
    scanf("%f", &fuel_used);
//Calculate fuel efficiency
    if (fuel_used > 0){
        fuel_efficiency = distance / fuel_used;
    }else{
        fuel_efficiency = 0; //Avoid division by zero
    }
//Display the result
printf("Fuel efficiency: %.2f km/litre\n", fuel_efficiency);
return 0;
}
