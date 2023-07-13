//  write a program to convert celcius into farhenite using functions

#include<stdio.h>
float change(float a);
int main(){
    float temperatue;
    printf("Enter the Temperature in celcius \n");
    scanf("%f",&temperatue);
    printf("Temperature in fahrenhite will be %0.2f far\n", change(temperatue));

    return 0;
}

float change (float a){
    float far, cel;
    far = (cel * 9/5) +32;
    return far;
}