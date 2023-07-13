// Write a program to convert celcius i.e degree to farenhite
#include<stdio.h>

int main(){

    // float celcius = 36.0;
    // float far;

    // far=(celcius * 9/5) +32;

    // printf("the tem from %f celcius to farenhite is %f", celcius,far);

    float cel,far;
    printf("Enter the temperature in cel \n");
    scanf("%f",&cel);
    far=(cel * 9/5) +32 ;
    printf("Temp in far will be %f",far);

    return 0;
}