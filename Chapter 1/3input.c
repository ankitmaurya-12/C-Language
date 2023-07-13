// For taking input from user

#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter the value of a= \n");
    // for taking input we use 'scanf' 
    scanf("%d", &a); // &a where & indicate address of a 


    printf("Enter the value of b= \n");
    scanf("%d", &b);
    
    printf("Sumation of a and b is %d \n", a+b);
    printf("Substraction of a and b is %d\n", a-b);
    printf("Multiplication of a and b is %d \n", a*b);
    return 0;
}