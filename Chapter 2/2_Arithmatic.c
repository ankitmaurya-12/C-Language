// Chap 2

// In this we will learn about Second instrucation i.e *Arithmatic Instruction*

// there ar basic 5 type of operators +,-,*,/,% .
// here % use to show reminder

#include<stdio.h>
#include<math.h> //used to perform higher math operation like power

int main(){

    int a=8;
    int b=4;

    printf("The value of a+b is : %d \n", a+b);
    printf("The value of a-b is : %d \n", a-b);
    printf("The value of a*b is : %d \n", a*b);
    printf("The value of a/b is : %d \n", a/b);
    printf("The value of a%b is : %d \n", a%b);

    // No operator is assumed to be present 
    printf("The multiplication of 7 & 9 will be : %d \n", 79); // there we assumed * will be present but its not

    // printf("The multiplication of 7 & 9 will be : %d \n", (7)(9)); // here also we asummed bracket means multiplication but it not
    printf("The multiplication of 7 & 9 will be : %d \n", (7)*(9));

    // there is no operator to perform exponential or raise to the power in c
    printf("The value of 4^2 is : %d \n", 4^2); // here ^ used for bitwise XOR operator in c
    
    printf("The value of 4 to the 2 is : %f \n", pow(4,2)); // pow is function of math.h library. // And used %f because it return double

// Type conversion

    printf("The value of 5+6 is : %d \n", 5+6);
    printf("The value of 5+6.4 is : %f \n", 5+6.4);
    printf("The value of 5.6+6.4 is : %f \n", 5.6+6.4);
    
    printf("The value of 5/2 is : %d \n", 5/2);
    printf("The value of a/b is : %f \n", 5/2); // this will be error
    printf("The value of a/b is : %f \n", 5.0/2);

    return 0;
}