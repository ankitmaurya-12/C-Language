// Calculate area of rectangle  

#include<stdio.h>

int main(){

    int length, breath; // first initiate by taing int value
    
    printf("Enter length of rectangle =\n"); // ask user the values
    scanf("%d",&length); // store that values

    printf("Enter breath of rectangle =\n"); // ask user the values
    scanf("%d",&breath); // store that values

    int area = length*breath; // calculate the area 

    printf("Area of rectangle is %d \n",area); //finally show the result

    return 0;
}