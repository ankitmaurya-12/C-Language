// In this we learn about variables
// Types of variable 
// How to use varialbe?

#include<stdio.h>

int main(){
    int a = 4;
    // int b = 7.8; // its not recomended
    float b = 9.8; 
    char c ='t';
    char d ='4'; // char could be anything but within '---'
    int e = 9;


// to print all variable we use libarary which shown by % d ,%c, %f

//for new line we use /n escape sequence character

    printf("This is value of a i.e %d \n", a); 
    printf("This is value of e i.e %d \n", e); 
    printf("This is value of b i.e %f \n", b);
    printf("This is value of c & d is %c & %c \n", c ,d);


//  we can make some mathmatical calculation with it.

    // 1. For Addition

    printf("Sum of a & e is %d \n", a+e);

    // else we can also use new interger 
    int f = a + e;
    printf("Sum of a & e is %d \n", f);

    // 2. For Substraction

    printf("Substraction of e with a is %d \n", e-a);

    // 3. Multiplication

    printf("Multiplication of a & e is %d \n", a*e);

    return 0;
}