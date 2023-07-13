// Operator Precedence
// it is similar to BODMAS in normal math

// 1st --> * / %
// 2nd --> + -
// 3rd --> =
// it apply only in absence of paranthesis

#include<stdio.h>

int main(){

    int x=4;
    int y=5;

// Case 1 : No same stage differenet operator
    printf("The value of 3 * x - y * 9 is %d \n",3*x-y*9);    

// Case 2 : Same stage differenet operator
    printf("The value of 3 * x / y * 9 is %d \n",3*x/y*9); // it will follow left to right associativity

    return 0;
}


// Further we will learn about Third instrucation i.e *Control Instruction*
// (It Determine the flow of control in a program.)

// 1. Sequence Control Instruction
// 2. Decision Control Instruction
// 3. Loop Control Instruction
// 4. Case Control Instruction