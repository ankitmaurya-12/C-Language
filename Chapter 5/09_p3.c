// caluate force on a body of mass m by earth using functions

#include<stdio.h>
float force(float mass);

int main(){
    int m;
    printf("Enter the value of mass in Kg \n");
    scanf("%f", &m);
    printf("The force will be %0.2f N", force(m));
    return 0;
}
float force(float mass){
    float result = mass *9.8;
    return result;
}