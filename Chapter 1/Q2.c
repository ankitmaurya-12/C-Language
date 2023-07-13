// calculate the area of circle

#include<stdio.h>

int main(){

    // initiate integer of radius, area & volume
    float radius;
    float area;
    float volume;

    // take input radius from user
    printf("Enter radius of Circle in meter = \n");
    scanf("%f",&radius);

    // apply area of circle formula
    area = 3.14*radius*radius;

    // print area of circle
    printf("Area of Circle with radius %f is %f m^2\n", radius,area);

    // apply volume formula
    volume = 3.14*radius*radius*radius;

    // print volume of cirlce
    printf("Volume of Circle with radius %f is %f m^3 \n", radius,volume);

    return 0;
}